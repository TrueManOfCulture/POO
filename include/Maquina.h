#ifndef MAQUINA_H
#define MAQUINA_H

#include <iostream>
#include <string>
#include <list>

using namespace std;

#include "User.h"

enum ESTADO_MAQUINA{OFF, ON, AVARIADA, ERRO};


class Maquina
{
    //User *U;
    static int ID;
    int ID__;
    float PROB_GANHAR;
    float PROB_AVARIA;
    int PREMIO;
    int posX, posY;
    int TEMPERATURA;
    string TIPO;
    ESTADO_MAQUINA ESTADO;
    int QNT_AVARIAS;                            

    public:
        Maquina(float _prob_ganhar, float _prob_avaria,  int _premio, int _posX, int _posY, int _temp, string _tipo, User *U = NULL, ESTADO_MAQUINA _est = OFF);
        virtual ~Maquina();

        ESTADO_MAQUINA Get_ESTADO(){ return ESTADO; }               // RETORNA O ESTADO DA MÁQUINA
        int Get_ID (){ return ID__; }                                 // RETORNA O ID DA MÁQUINA
        int Get_POSX(){ return posX; }                              // RETORNA A POSX
        int Get_POSY(){ return posY; }                              // RETORNA A POSY
        float Get_PROB_GANHAR(){ return PROB_GANHAR; }              // RETORNA A PROBABILIDADE DE GANHAR DE UMA MÁQUINA
        void Set_ESTADO(ESTADO_MAQUINA _est){ ESTADO = _est; }      // ALTERA O ESTADO DA MÁQUINA
        void Set_PROB_GANHAR(float _prob){ PROB_GANHAR += _prob; }  // ALTERA A PROBABILIDADE DE GANHAR DA MÁQUINA
        virtual void Jogar(){}

        virtual string Get_TIPO(){ return "SEM_TIPO"; }             // RETORNA O TIPO DA MÁQUINA
        virtual void Show(ostream &saida = cout);                   // MOSTRA OS DADOS DA MÁQUINA
        virtual int Memoria(){ return sizeof(*this); }              // CALCULA A MEMÓRIA OCUPADA
};

#endif // MAQUINA_H
