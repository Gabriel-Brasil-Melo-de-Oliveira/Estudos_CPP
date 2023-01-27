/*Fazer um programa que peça um número de 1 a 100 e diga ao usuário que é o número favorito dele*/

#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "\nDigite um número de 1 a 100: ";
    cin >> num;
    cout << "O numero " << num << " é o meu favorito também" << endl;
    return 0;
}