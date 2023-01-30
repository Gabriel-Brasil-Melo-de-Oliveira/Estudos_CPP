#include <iostream>
using namespace std;

int main(){
    cout << "\nDigite o valor em reais que você deseja converter em dolar americano: " << endl;
    float valor_real {0};
    cin >> valor_real;

    float valor_convertido = valor_real*0.20;

    cout << "\nEsse é o valor do seu dinheiro em dolares americanos: " << valor_convertido << endl;


    return 0;
}