#include<iostream>
#include<string>
#include"Conta.h"
using namespace std;

int main(){
    Conta conta_de_gabriel;
    conta_de_gabriel.set_nome("Gabriel.");
    cout << "\nEssa é a conta de: " << conta_de_gabriel.get_nome() << endl;
    conta_de_gabriel.set_valor(500);
    cout <<"\nEsse é o valor da conta: " << conta_de_gabriel.get_valor() << endl;

    cout << "-----------------------------------------------" << endl;

    Conta conta_do_fantasma;
    cout << "\nEssa é a conta de: " << conta_do_fantasma.get_nome() << endl;
    cout << "\nEsse é o valor da conta: " << conta_do_fantasma.get_valor() << endl;

    cout << "-----------------------------------------------" << endl;

    Conta conta_Josenildo{"Josenildo."};
    cout << "\nEssa é a conta de: " << conta_Josenildo.get_nome() << endl;
    cout << "\nEsse é o valor da conta: " << conta_Josenildo.get_valor() << endl;

    cout << "-----------------------------------------------" << endl;

    Conta conta_xico{25.5};
    conta_xico.set_nome("Xico.");
    cout << "\nEssa é a conta de: " << conta_xico.get_nome() << endl;
    cout << "\nEsse é o valor da conta: " << conta_xico.get_valor() << endl;

    cout << "-----------------------------------------------" << endl;

    Conta conta_chaves{"Chaves.", 679};
    cout << "\nEssa é a conta de: " << conta_chaves.get_nome() << endl;
    cout << "\nEsse é o valor da conta: " << conta_chaves.get_valor() << endl;

    cout << "-----------------------------------------------" << endl;

    Conta *conta_maria = new Conta("Maria", 889);
    cout << "\nEssa é a conta de: " << conta_maria->get_nome() << endl;
    cout << "\nEsse é o valor da conta: " << conta_maria->get_valor() << endl;

    cout << "-----------------------------------------------" << endl;

    delete [] conta_maria;

    return 0;
}