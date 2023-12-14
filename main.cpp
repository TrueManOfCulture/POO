#include <iostream>
#include <string>
#include <locale>

using namespace std;

#include "./include/Casino.h"
#include "./include/User.h"
#include "./include/BlackJack.h"
#include "./include/ClassicSlots.h"
#include "./include/Maquina.h"
#include "./include/Relogio.h"
#include "./include/Roleta.h"
#include "./include/User.h"
#include "./include/Uteis.h"
#include "./include/XML.h"
#include "./include/Craps.h"

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    srand(time(0));

    list<User *> LU;
    LerFicheiroUser(LU, "USERS.txt");

    ifstream dadosCasino("CasinoData.xml");
    saltarNLinhas(dadosCasino, 2);
    string nomeCasino = ObterConteudo(dadosCasino);
    dadosCasino.close();
    Casino C(nomeCasino);
    C.Load("CasinoData.xml");
    C.Ass_ListaUsusarios(LU);

    C.Run(false);

    //////////////    TESTES DE ALTERAR ESTADO DE UMA MÁQUINA    //////////////
    /*Maquina *Maq = new ClassicSlots(5, 50, 1, 1, 70, "Classic Slots", NULL, ON);
    C.Add(Maq);
    //Maq->Jogar();

    cout << C.Get_Estado(12) << endl;

    C.Desligar(12);

    cout << C.Get_Estado(12) << endl;*/


    //////////////    TESTES DE LEITURA DE MEMÓRIA    //////////////
    //Casino C("Solverde");

    /*list<User *> LU;
    LerFicheiroUser(LU, "USERS.txt");
    C.Ass_ListaUsusarios(LU);

    C.MemoriaCasino();*/

    //////////////    TESTES DE AUMENTAR PROBABILIDADE DE GANHAR VIZINHAS    //////////////
    /*Casino C("Solverde");
    Maquina *Maq = new ClassicSlots(5, 50, 1, 0, 70, "CLASSIC SLOTS", NULL, ON);
    Maq->Show();
    C.Add(Maq);
    Maq = new ClassicSlots(5, 50, 0, 1, 70, "CLASSIC SLOTS", NULL, ON);
    Maq->Show();
    C.Add(Maq);
    Maq = new ClassicSlots(5, 50, 1, 1, 70, "CLASSIC SLOTS", NULL, ON);
    Maq->Show();
    C.Add(Maq);
    Maq = new ClassicSlots(5, 50, 2, 2, 70, "CLASSIC SLOTS", NULL, ON);
    Maq->Show();
    C.Add(Maq);
    Maq = new ClassicSlots(5, 50, 0, 0, 70, "CLASSIC SLOTS", NULL, ON);
    Maq->Show();
    C.Add(Maq);

    list<Maquina *> MaquinasVizinhas;

    C.SubirProbabilidadeVizinhas(Maq, 1, MaquinasVizinhas);

    cout << "//////////////////////////////////////////" << endl << endl;

    for(list<Maquina *>::iterator it = MaquinasVizinhas.begin(); it != MaquinasVizinhas.end(); ++it){
        (*it)->Show();
    }*/


    //////////////    TESTES DE LISTAR TIPO DE MAQUINAS    //////////////
    /*
    cout << "//////////////////////////////////////////" << endl << endl;
    //print da saida
    list<Maquina *> *Test;
    Test = C.Listar_Tipo("ClassicSlots");

    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl << endl;

    //print da lista
    for(list<Maquina *>::iterator it = Test->begin(); it != Test->end(); ++it){
        (*it)->Show();
    }

    delete Test;
    */

    //////////////    TESTES DE RANKING DOS FRACOS    //////////////
    
    cout << "//////////////////////////////////////////" << endl << endl;

    C.PesqMaq(1, cout);
    /*
    map<string, Maquina *> HashMaq;

    HashMaq = C.Ass_HashMaq();

    /*for(map<string, Maquina *>::iterator it = HashMaq.begin(); it != HashMaq.end(); ++it){
        int aoga = AleatorioINT(1, 100);
        for(int i = 0; i < aoga; i++)
            it->second->Inc_QNT_AVARIA();
    }*/

    /*for(map<string, Maquina *>::iterator it = HashMaq.begin(); it != HashMaq.end(); ++it){
        it->second->Show();
    }


    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl << endl;

    list<Maquina *> *Test;
    Test = C.Ranking_Dos_Fracos();

    for(list<Maquina *>::iterator it = Test->begin(); it != Test->end(); ++it){
        (*it)->Show();
    }

    delete Test;
    */

    //////////////    TESTES DE JOGADORES MAIS GANHOS    //////////////
    /*
    cout << "//////////////////////////////////////////" << endl << endl;

    list<User *>::iterator userIt = LU.begin();
    C.Add(*userIt);

    userIt = LU.begin();
    advance(userIt, 1);
    C.Add(*userIt);
    
    userIt = LU.begin();
    advance(userIt, 2);
    C.Add(*userIt);

    userIt = LU.begin();
    advance(userIt, 3);
    C.Add(*userIt);

    map<string, User *> HashUser;
    HashUser = C.Ass_HashUser();

    for(map<string, User *>::iterator it = HashUser.begin(); it != HashUser.end(); ++it){
        int aoga = AleatorioINT(1, 100);
        it->second->Set_premioGanho(aoga);
    }

    for(map<string, User *>::iterator it = HashUser.begin(); it != HashUser.end(); ++it){
        it->second->Show();
    }
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////" << endl << endl;

     list<User *> *Test;
    Test = C.Jogadores_Mais_Ganhos();

    for(list<User *>::iterator it = Test->begin(); it != Test->end(); ++it){
        (*it)->Show();
    }

    C.Listar();

    delete Test;

    */
    //////////////    TESTES DE LISTAR    //////////////
    /*
    list<User *>::iterator userIt = LU.begin();
    C.Add(*userIt);

    userIt = LU.begin();
    advance(userIt, 1);
    C.Add(*userIt);
    
    userIt = LU.begin();
    advance(userIt, 2);
    C.Add(*userIt);

   /*list<User *>::iterator userIt = LU.begin();
   C.Add(*userIt);

   userIt = LU.begin();
   advance(userIt, 1);
   C.Add(*userIt);
   
   userIt = LU.begin();
   advance(userIt, 2);
   C.Add(*userIt);

   userIt = LU.begin();
   advance(userIt, 3);
   C.Add(*userIt);*/

   //C.Listar();
}
