#include<iostream>
#include<string>
#include"Conta.h"
using namespace std;

int main(){
    Conta conta_de_gabriel;
    conta_de_gabriel.set_valor(450);
    cout << conta_de_gabriel.get_valor() << endl;
    conta_de_gabriel.set_nome("VAITOMA NO CU PORRRAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    cout << conta_de_gabriel.get_nome() << endl;
    return 0;
}