#include <iostream>
#include <string>
using namespace std;

int main(){
    string alfabeto {"abcdefghij "};
    string segredo {"1234567890k"};
    string aux{};

    cout << "\nDigite a palavra desejada para muda-la: " << endl;
    string palavra_normal{}, palavra_codificada{};
    
    getline(cin,palavra_normal);

    for(auto caractere: palavra_normal){
        int posicao = alfabeto.find(caractere);
        char codigo {segredo.at(posicao)};
        palavra_codificada += codigo;
    }

    cout << "\nEssa é a palavra codificada: " << palavra_codificada << endl;

    for(auto voltando: palavra_codificada){
        int posicao_nova = segredo.find(voltando);
        char desvendando{alfabeto.at(posicao_nova)};
        aux += desvendando;
    }

    cout << "\nEssa é a palavra descodificada: " << aux << endl;

    
    
    return 0;
}