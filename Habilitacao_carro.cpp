#include <iostream>
using namespace std;

int main(){
    int idade {};
    cout << "\nDigite sua idade: " << endl;
    cin >> idade;
    int n = 16 - idade;
    if(idade >= 16){
        bool possui_carro {false};
        cout << "\nDigite 0 caso não tenho carro e 1 caso tenha carro: " << endl;
        cin >> possui_carro;

        if(possui_carro == false){
            cout << "\nVocê precisa comprar um carro primeiro!" << endl; 
        }else{
            cout << "\nVocê ja pode dirigir!" << endl;
        }
    }else{
        cout << "\nVocê ainda não pode dirigir, volte em " << n << " anos.";
    }
    
    return 0;
}