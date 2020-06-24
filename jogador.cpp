#include "jogador.h"
Jogador::Jogador(): nome(""){}
Jogador::Jogador(std::string nome){ set_nome(nome); }
void Jogador::set_nome(std::string nome) { this -> nome = nome; }
std::string Jogador::get_nome() { return nome; }
void Jogador::set_tempo(time_t tempo) { this->tempo = tempo; }
time_t Jogador::get_tempo() { return tempo; }
