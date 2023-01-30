/*Peça ao usuário quantos quartos pequenos e quantos quartos grandes serão higienizados, depois forneça os valores

Dados do exercício: quarto_pequeno = 25R$; quarto_grande = 35R$; Taxa_do_custo = 6%; estimativas para 30 dias

*/

#include <iostream>
using namespace std;

int main(){
    cout << "\nDigite o número de quartos grandes que serão higienizados: ";
    int num_quartos_grandes {0};
    cin >> num_quartos_grandes;

    cout << "\nDigite o número de quartos pequenos que serão higienizados: ";
    int num_quartos_pequenos{0};
    cin >> num_quartos_pequenos;

    float taxa {0}, custo {0};
    custo = ((num_quartos_grandes*35)+(num_quartos_pequenos*25));
    taxa = ((num_quartos_grandes*35)+(num_quartos_pequenos*25))*0.06;
    

    cout << "\nO valor a ser cobrado sera de: " << taxa+custo << endl << "Essa estimativa é válida por 30 dias" << endl;

    return 0;
}