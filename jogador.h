#ifndef JOGADOR_H
#define JOGADOR_H
#include<string>
class Jogador{
private:
    std::string nome;
    time_t tempo;
    bool venceu;
public:
    /* Construtor padrao */
    Jogador();

    /* Construtor com inicializacao */
    Jogador (std::string nome);

    /* Define o nome do jogador */
    void set_nome(std::string nome);

    /* Retorna o nome do jogador */
    std::string get_nome();

    /* Define o inicio da partida */
    void set_tempo_inicial(time_t inicio);

    /* Retorna o tempo de inicio da partida */
    time_t tempo_inicial();

    /* Define o tempo total da partida, caso o jogador seja vencedor */
    void set_tempo(time_t tempo);

    /* Retorna o tempo total da partida */
    time_t get_tempo();
};

#endif // JOGADOR_H
