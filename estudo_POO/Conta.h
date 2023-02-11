#pragma once
#include<string>

class Conta{
    private:
    std::string nome;
    double valor;

    public:
    void set_valor(double val){
        valor = val;
    }
    double get_valor(){
        return valor;
    }

    void set_nome(std::string n);
    std::string get_nome();
};

