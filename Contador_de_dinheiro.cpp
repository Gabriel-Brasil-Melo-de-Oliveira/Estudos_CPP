/* Diga, de acordo com a quantidade de real que o usuário digitar, quantos centenas, dezenas e unidades de reais e reais o usuario pode trocar */

#include <iostream>
using namespace std;

int main(){
    cout << "\nDigite a quantidade de reais que você possui: " << endl;
    int quant_real{};
    cin >> quant_real;

    int cont_centena{}, cont_dezena{}, cont_real{};

    
    cont_centena = quant_real/100;
    quant_real %= 100;
    cont_dezena = quant_real/10;
    quant_real %= 10;
    cont_real = quant_real/1;
    quant_real %= 1;

    
    cout << "\nEssa é a quantidade de centena: " << cont_centena <<"\nEssa é a quantidade de dezena: " << cont_dezena << "\nEssa é a quantidade de unidade: " << cont_real << endl;
    return 0;
}