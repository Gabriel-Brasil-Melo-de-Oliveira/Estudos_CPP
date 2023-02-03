/*Criação de um mini sistema usando ferramentas estudadas no curso de c++ */

#include <iostream>
#include <vector>
using namespace std;

int main(){
   char opcao_escolhida{};
   vector<int> vetor_de_inteiros{};
   do{
        do{
            cout << "\nSelecione a opção desejada: " << endl;
            cout << "\nA-Imprimir os valores.";
            cout << "\nB-Adicionar um número.";
            cout << "\nC-Média dos números.";
            cout << "\nD-Menor número.";
            cout << "\nE-Maior número.";
            cout << "\nF-Sair." << endl;
            cin >> opcao_escolhida;
        }while(opcao_escolhida != 'a' && opcao_escolhida != 'A' && opcao_escolhida != 'b' && opcao_escolhida != 'B'&& opcao_escolhida != 'c'&& opcao_escolhida != 'C'&& opcao_escolhida != 'd'&& opcao_escolhida != 'D'&& opcao_escolhida != 'e'&& opcao_escolhida != 'E'&& opcao_escolhida != 'f'&& opcao_escolhida != 'F');
        
        if(opcao_escolhida == 'a' || opcao_escolhida == 'A'){
            if(vetor_de_inteiros.size() == 0){
                cout << "\nLamento mas não existe valores." << endl;
            }else{
                for(auto valor_vetor: vetor_de_inteiros){
                    cout << "[" << valor_vetor << "] ";
                }
            }
        
        }else if(opcao_escolhida == 'b' || opcao_escolhida == 'B'){
            cout << "\nDigite o número desejado para adicionar: " << endl;
            int num_add{};
            cin >> num_add;
            vetor_de_inteiros.push_back(num_add);
        }else if(opcao_escolhida == 'c' || opcao_escolhida == 'C'){
            if(vetor_de_inteiros.size() == 0){
                cout << "\nLamento mas não existe valores." << endl;
            }else{
                double soma{};
                for(auto valor_vetor: vetor_de_inteiros){
                    soma += valor_vetor;
                }
                double media{};
                media = soma/vetor_de_inteiros.size();
                cout << "\nEsse é o valor da media dos números: " << media << endl;
            }
        }else if(opcao_escolhida == 'd' || opcao_escolhida == 'D'){
            if(vetor_de_inteiros.size() == 0){
                cout << "\nLamento mas não existe valores." << endl;
            }else{
                int menor_numero{vetor_de_inteiros.at(0)};
                for(int i = 0; i < vetor_de_inteiros.size();i++){
                    if(vetor_de_inteiros.at(i) < menor_numero){
                        menor_numero = vetor_de_inteiros.at(i);
                    }
                }
                cout << "\nEsse é o valor do menor número: " << menor_numero << endl;
            }

        }else if(opcao_escolhida == 'e' || opcao_escolhida == 'E'){
            if(vetor_de_inteiros.size() == 0){
                cout << "\nLamento mas não existe valores." << endl;
            }else{
                int maior_numero{vetor_de_inteiros.at(0)};
                for(int i = 0; i < vetor_de_inteiros.size();i++){
                    if(vetor_de_inteiros.at(i) > maior_numero){
                        maior_numero = vetor_de_inteiros.at(i);
                    }
                }
                cout << "\nEsse é o valor do maior número: " << maior_numero << endl;
            }
        }
       
    }while(opcao_escolhida != 'f' && opcao_escolhida != 'F');
    cout << "\nObrigado por usar nosso sistema!" << endl;
 

    return 0;
}