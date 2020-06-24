#ifndef JOGO_H
#define JOGO_H
#include "jogador.h"
#include <fstream>
#include <string>
#include <time.h>
class Jogo{
private:
    Jogador jogador;
    std::string palavra;
    std::string palavra_velada;
    int tentativas;
    time_t inicio;
    std::string historico;

    /* Retorna aleatoriamente uma palavra do arquivo */
    std::string palavra_sorteada();

    /* Define uma string conforme os acertos do jogador  */
    void set_palavra_velada(char letra);

    /* Define uma string de mesmo tamanho da palavra sorteada contendo apenas o caracter '-' */
    void criar_palavra_velada();

    /* Adiciona o palpite do jogador no historico */
    void incluir(char letra);
public:
    const int tamanho_arquivo = 50;
    const int num_recordistas = 3;
    const int max_tentativas = 5;

    /* Construtor */
    Jogo(std::string nome);


    std::string get_nome_jogador() {return jogador.get_nome();} ;
    /* Retorna true caso o jogador tenha advinhado a palavra secreta */
    bool advinhou();

    /* Retorna a palavra sorteada */
    std::string get_palavra() { return palavra; }

    /* Retorna uma string conforme os acertos do jogador para ser impressa na tela */
    std::string get_palavra_velada(){ return palavra_velada; }

    /* Retorna o numero de tentativas */
    int get_tentativas() { return tentativas; }

    /* Retorna true caso a letra ja tenha sido utilizada */
    bool foi_usada(char letra);

    /* Retorna true caso o jogador acerte um caracter da palavra sorteada */
    bool acertou(char letra);

    /* Retorna true caso o jogador acerte a palavra sorteada */
    bool acertou(std::string palpite);

    /* Retorna uma string contendo os atuais recordistas */
    std::string get_recordistas();

    /* Define se o atual vencedor é um recordista */
    void record();
};
#endif // JOGO_H
