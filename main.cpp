#include <iostream>
#include <locale>
#include <string>
#include <list>
#include <fstream>

using namespace std;

#include "./include/Maquina.h"
#include "./include/ClassicSlots.h"
#include "./include/BlackJack.h"
#include "./include/Casino.h"
#include "./include/Roleta.h"
#include "./include/Uteis.h"
#include "./include/User.h"
#include "./include/XML.h"

int main()
{
    ifstream dadosCasino("CasinoData.xml");
    setlocale(LC_ALL, "PORTUGUESE");
    saltarNLinhas(dadosCasino, 2);
    string nomeCasino = ObterConteudo(dadosCasino);
    dadosCasino.close();
    Casino C(nomeCasino);

    C.Load("CasinoData.xml");

    //cout << ObterConteudo("<TEMP_AVISO>70</TEMP_AVISO>")<<endl;


    //////////////    TESTES DE ALTERAR ESTADO DE UMA MÁQUINA    //////////////
    /*Maquina *Maq = new ClassicSlots(5, 50, 1, 1, 70, "Classic Slots", NULL, ON);
    C.Add(Maq);
    //Maq->Jogar();

    cout << C.Get_Estado(12) << endl;

    C.Desligar(12);

    cout << C.Get_Estado(12) << endl;*/


    //////////////    TESTES DE LEITURA DE MEMÓRIA    //////////////
    /*Casino C("Solverde");

    list<User *> LU;
    LerFicheiroUser(LU, "USERS.txt");
    C.Ass_ListaUsusarios(LU);

    Maquina *Maq = new ClassicSlots(5, 50, 1, 1, 70, "CLASSIC SLOTS", NULL, ON);
    C.Add(Maq);
    Maq = new ClassicSlots(5, 50, 1, 1, 70, "CLASSIC SLOTS", NULL, ON);
    C.Add(Maq);
    Maq = new ClassicSlots(5, 50, 1, 1, 70, "CLASSIC SLOTS", NULL, ON);
    C.Add(Maq);

    C.MemoriaCasino();*/
}