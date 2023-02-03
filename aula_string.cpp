#include <iostream>
#include <string>
using namespace std;

int main(){

    string nome_completo {"Gabriel Brasil"};
    cout << nome_completo << endl;
    string primeiro_nome{nome_completo,0,7};
    cout <<"\nEsse é o primeiro nome: " << primeiro_nome << endl;
    string segundo_nome{nome_completo,8,7};
    cout << "\nEsse é o segundo nome: " << segundo_nome << endl;
    if(primeiro_nome == segundo_nome){
        cout << "\nNomes iguais";
    }else{
        cout << "\nNomes diferentes";
    }
    cout << "\nNomes juntos: " << primeiro_nome + " " + segundo_nome << endl;
    nome_completo.erase(0,8);
    cout << "\nNome completo depois de apagar a primeira parte: " << nome_completo << endl;
    primeiro_nome.swap(segundo_nome);
    cout << "\nAgora esse é o segundo nome: " << segundo_nome << endl;
    return 0;
}