#include <iostream>
using namespace std;

int main(){
    
    cout << boolalpha;
    int menor {10}, maior{20};
    cout << "\nDigite um número no intervalo de " << menor << " a " << maior << endl;

    int num {};
    cin >> num;
    
    bool verificar_num {false};
    verificar_num = (num > menor && num < maior);
    cout << verificar_num << endl;
    

    return 0;
}