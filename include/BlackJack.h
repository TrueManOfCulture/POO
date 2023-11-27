#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <iostream>
#include <string>
#include <list>
#include <vector>
//#include <conio.h>

using namespace std;

#include "User.h"
#include "Maquina.h"
#include "Uteis.h"

class BlackJack : public Maquina
{
    public:
        BlackJack(float _prob_ganhar, int _premio, int _posX, int _posY, int _temp, string _tipo, User *U = NULL, ESTADO_MAQUINA _est = OFF);
        virtual ~BlackJack();

        void Jogar();
        string Get_TIPO(){ return "BLACKJACK"; }
        int Memoria(){ return sizeof(*this); }
};

#endif // BLACKJACK_H
