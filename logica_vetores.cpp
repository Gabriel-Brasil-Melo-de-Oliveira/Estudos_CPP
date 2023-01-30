/*Testes usando a lógica de vetores. */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);


    for(int i = 0; i < vector1.size(); i++){
        cout << "\nEsse é o valor do vetor 1 na posição: " << i+1 << endl << vector1.at(i) << endl;
    }

    vector2.push_back(100);
    vector2.push_back(200);


    for(int i = 0; i < vector1.size(); i++){
        cout << "\nEsse é o valor do vetor 2 na posição: " << i+1 << endl << vector2.at(i) << endl;
    }

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    for(int i = 0; i < vector_2d.size();i++){
        for(int j = 0 ; j < vector_2d.size();j++){
            cout << "\nimprimindo matriz: " << vector_2d.at(i).at(j) << endl;
        }
    }
   


    return 0;
}