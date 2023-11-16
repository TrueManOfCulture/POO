#ifndef CLASSICSLOTS_H
#define CLASSICSLOTS_H

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <unistd.h>

using namespace std;

#include "User.h"
#include "Maquina.h"
#include "Uteis.h"

class ClassicSlots : public Maquina
{
    public:
        ClassicSlots(int _id, int _prob_ganhar, int _premio, int _posX, int _posY, int _temp);
        virtual ~ClassicSlots();

        void Jogar();
        string Get_TIPO(){ return "CLASSIC_SLOTS"; }

};

#endif // CLASSICSLOTS_H