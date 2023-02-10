//Atividade proposta no curso de c++ na seção de ponteiros.
//criar uma matriz usando ponteiros e funções

#include<iostream>
using namespace std;

int *criar_novo_array(int *array1, int tamanho1, int *array2, int tamanho2){
    int *ponteiro_novo_array {nullptr};
    ponteiro_novo_array = new int[tamanho1*tamanho2];
    int posicao_novo_array{};
    for(size_t i{}; i < tamanho2;i++){
        
        for(size_t j{}; j < tamanho1; j++){
            *(ponteiro_novo_array+posicao_novo_array) = *(array2+i) * *(array1+j);
            posicao_novo_array++;
            
        }
        
    }
    //cout << *(ponteiro_novo_array+14) << " "; TESTE
    return ponteiro_novo_array;
}

void printar_array(int *array,int tamanho){
    for(size_t i{}; i < tamanho;i++){
        cout << "["<< *(array+i) << "] "; 
    }
}


int main(){
    system("clear");
    int array_1[5]{1,2,3,4,5};
    int array_2[3]{10,20,30};
    cout << "\nPrintando o primeiro array: " << endl;
    printar_array(array_1,5);
    cout << "\nPrintando o segundo array: " << endl;
    printar_array(array_2,3);
    cout << endl;
    int *resultado = criar_novo_array(array_1,5,array_2,3);
    cout << "\nPrintando o novo array: " << endl;
    printar_array(resultado,15);
    delete [] resultado;
    

    return 0;
}