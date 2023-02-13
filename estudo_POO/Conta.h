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
    Conta() : valor{125}, nome{"Fantasma."} {
        
    };
    Conta(std::string nome_valor) : valor{175}, nome{nome_valor} {
        
    };
    Conta(double v) : valor{v} {
        
    };
    Conta(std::string nome_valor,double v) : nome{nome_valor}, valor{v} {
        
    };
};

