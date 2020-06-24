#include "jogo.h"
#include<iostream>
using namespace std;
Jogo::Jogo(string nome)
{
    Jogador j(nome);
    jogador = j;
    palavra = palavra_sorteada();
    criar_palavra_velada();
    tentativas = max_tentativas;
    historico = "";
    /* Inicio da partida */
    inicio = time(nullptr);
}
char maiusculo(char letra){
    char ch = (letra >= 'a' && letra <= 'z' ) ? letra - 'a'+ 'A': letra;
    return ch;
}
std::string maiusculo(std::string palpite){
    for (int i = 0; i < (int)palpite.length(); i++) {
        palpite[i] =  maiusculo(palpite[i]);
    }
    return palpite;
}
bool Jogo::advinhou()
{
    for (int i = 0; i < (int)palavra_velada.length(); i++) {
        if (palavra_velada[i] == '-') {
            return false;
        }
    }
    return true;
}
bool Jogo::foi_usada(char letra)
{
    int i;
    letra = maiusculo(letra);
    for (i =0; i < max_tentativas; i++) {
        if (letra == historico[i]) {
            return true;
        }
    }
    return false;
}

void Jogo::incluir(char letra)
{
    letra = maiusculo(letra);
    if (!foi_usada(letra)) {
        historico += letra;
    }
}
string Jogo::palavra_sorteada()
{
    string palavra = "";
    ifstream arquivo_entrada;
    arquivo_entrada.open("palavras-windows.txt");
    if (arquivo_entrada.is_open()) {
        srand(time(nullptr));
        int indice = rand() % 50; // define a posição da palavra sorteada
        for (int i = 0; i <= indice; i++){arquivo_entrada >> palavra;}
        arquivo_entrada.close();
        return palavra;
    }
    palavra = "ARQUIVO DE PALAVRAS NAO PODE SER ENCONTRADO!";
    return palavra;
}

bool Jogo::acertou(char letra)
{
    if (tentativas && !advinhou() && !foi_usada(letra)) {
        letra =  maiusculo(letra);
        incluir(letra);
        for (int i = 0; i < (int)palavra.length(); i++) {
            if (letra == palavra[i]) {
                set_palavra_velada(letra);
                if (advinhou()) {
                    time_t t = time(nullptr) - inicio;
                    jogador.set_tempo(t);
                }
                return true;
            }
        }
        tentativas--;
    }
    return false;
}
bool Jogo::acertou(string palpite)
{
    tentativas = 0;
    palavra_velada = palavra;
    if (palpite.length() == palavra.length()) {
        palpite = maiusculo(palpite);
        for (int i = 0; i < int(palavra.length()); i++) {
            if ( palpite[i] != palavra[i]) {
                return false;
            }
        }
        time_t t = time(nullptr) - inicio;
        jogador.set_tempo(t);
        return true;
    }
    else {
        return false;
    }
}

void Jogo::set_palavra_velada(char letra)
{
    for (int i = 0; i < int(palavra_velada.length()); i++) {
        if (palavra[i] == letra) {
            palavra_velada[i] = letra;
        }
    }
}

void Jogo::criar_palavra_velada()
{
    for (int i = 0; i < int(palavra.length()); i++) {
        char ch = '-';
        palavra_velada += ch;
    }
}
void Jogo::record()
{
//    time_t t = time(nullptr) - inicio;
//    jogador.set_tempo(t);
    ifstream arquivo;
    string str = "", nome = "", tempo = "";
    arquivo.open("record.txt");
    if (arquivo.is_open()) {//arquivo ja foi aberto
        arquivo >> nome;
        if(nome != ""){//arquivo ja foi criado
            bool inserido = false;
            int i=0;
            arquivo >> tempo;
            int tempo_int = stoi(tempo);
            while(!arquivo.eof() && i < num_recordistas){
                if(tempo_int < jogador.get_tempo()){//o tempo do jogAtual não e menor
                    str += nome + '\n' + tempo + '\n'; //
                    i++;
                }else{
                    if(tempo_int == jogador.get_tempo()){

                        str += nome + '\n' + tempo +'\n';
                        i++;
                        if(i < num_recordistas){
                            str += jogador.get_nome() + '\n' + to_string(jogador.get_tempo()) + '\n';
                            i++;
                        }
                    }else{
                        if(!inserido){
                            str += jogador.get_nome() + '\n' + to_string(jogador.get_tempo()) +'\n';
                            i++;
                            inserido = true;
                        }
                        if(i < num_recordistas){
                            str += nome + '\n' + tempo + '\n';
                            i++;
                        }
                    }
                }
                arquivo >> nome;
                arquivo >> tempo;
            }
            if (!inserido && i < num_recordistas) {
                    str += jogador.get_nome() + '\n' + to_string(jogador.get_tempo()) +'\n';
            }
        }
        else{//arquivo em branco
            str += jogador.get_nome() + '\n' + to_string(jogador.get_tempo()) + '\n';
        }
        arquivo.close();
    }
    else {
        str += jogador.get_nome() + '\n' + to_string(jogador.get_tempo()) + '\n';
    }
    ofstream saida;
    saida.open("record.txt");
    saida << str;
    saida.close();
}

string Jogo::get_recordistas() {
    string str = "";
    ifstream arquivo_record;
    arquivo_record.open("record.txt");
    if (arquivo_record.is_open()) {
        string nome = "";
        string tempo = "";
        arquivo_record >> nome;
        if (nome == "") {
            str = "SEM RECORDISTAS";
        }
        else {
            while (!arquivo_record.eof()) {
                arquivo_record >> tempo;
                str += "NOME: " + nome + " | TEMPO: " + tempo + '\n';
                arquivo_record >> nome;
            }
        }
    }
    else {str = "ARQUIVO NAO ENCONTRADO";}
    return str;
}
