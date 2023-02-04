#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string nome {"GABRIEL"};
    
    size_t tamanho {nome.size()};
    int j{tamanho};
    
    for(size_t i = 0; i < nome.size();i++){
        
        for(size_t j = 1; (j+i) < nome.size();j++){
            cout << " ";
        }

        string aux {nome,0,i+1};
        string aux_2 {nome,0,i};

        char reverso[aux_2.size()];
        int contador{};
        for(size_t i = 0; i < aux_2.size();i++){
            reverso[i] = aux_2[aux_2.size()-1-i];
            contador++;
        }
        reverso[contador] = '\0';

        cout << aux+reverso << endl;

        
    }    

    return 0;
}