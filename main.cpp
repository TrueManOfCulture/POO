#include <iostream>
#include <locale>

using namespace std;

#include "Pessoa.h"

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    Pessoa *P = new Pessoa("Ze Carlos", 42);
    P->Show();
    delete P;
}
