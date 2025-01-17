#include "../include/ClassicSlots.h"

ClassicSlots::ClassicSlots(float _prob_ganhar, float _prob_avaria,  int _premio, int _posX, int _posY, int _temp, string _tipo, User *U, ESTADO_MAQUINA _est)
    : Maquina(_prob_ganhar, _prob_avaria, _premio, _posX, _posY, _temp, _tipo, U, _est)
{
    
}

ClassicSlots::~ClassicSlots()
{

}

bool ClassicSlots::Jogar()
{
    vector<string> L_Resultado = {"Banana", "Barra de Ouro", "Sino", "7"};
    string slot1, slot2, slot3;

    int Resultado = AleatorioINT(1, 100);

    if(Resultado <= Get_PROB_GANHAR()){
        string VENCER = AleatorioVECTOR_STRINGS(L_Resultado);
        slot1 = VENCER;
        slot2 = VENCER;
        slot3 = VENCER;

        //sleep ADICIONA SUSPENSE
        //1 = 1s
        cout << "Loading..." << endl;
        sleep(2);
        cout << slot1 << "  " << flush;
        sleep(2);
        cout << slot2 << "  " << flush;
        sleep(2);
        cout << slot3 << flush;


        if((slot1 == "7") && (slot2 == "7") && (slot3 == "7")) {
            cout << endl << "!!! JACKPOT !!!" << endl;
        }
        else{
            if((slot1 == slot2) && (slot2 == slot3)){
                cout << endl << "Ganhou" << endl;
            }
        }
    }
    else{
        do{
            slot1 = AleatorioVECTOR_STRINGS(L_Resultado);
            slot2 = AleatorioVECTOR_STRINGS(L_Resultado);
            slot3 = AleatorioVECTOR_STRINGS(L_Resultado);


        }while((slot1 == slot2) && (slot2 == slot3));

        cout << "Loading..." << endl;
        sleep(1);
        cout << slot1 << "  " << flush;
        sleep(1);
        cout << slot2 << "  " << flush;
        sleep(2);
        cout << slot3 << flush;

        cout << endl << "Perdeu" << endl;
    }
    return true;
}
