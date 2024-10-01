#include <iostream>

using namespace std;

struct Complexo {
    float parteReal;
    float parteImaginaria;
};

Complexo soma(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.parteReal = z.parteReal + w.parteReal;
    resultado.parteImaginaria = z.parteImaginaria + w.parteImaginaria;
    return resultado;
}

Complexo subtracao(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.parteReal = z.parteReal - w.parteReal;
    resultado.parteImaginaria = z.parteImaginaria - w.parteImaginaria;
    return resultado;
}

Complexo produto(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.parteReal = z.parteReal * w.parteReal - z.parteImaginaria * w.parteImaginaria;
    resultado.parteImaginaria = z.parteReal * w.parteImaginaria + z.parteImaginaria * w.parteReal;
    return resultado;
}

void exibir(Complexo z) {
    cout << z.parteReal << (z.parteImaginaria >= 0 ? " + " : " ") << z.parteImaginaria << "i" << endl;
}

int main() {
    Complexo z, w;

    cout << "Digite o número complexo z (parte real e parte imaginária): ";
    cin >> z.parteReal >> z.parteImaginaria;
    
    cout << "Digite o número complexo w (parte real e parte imaginária): ";
    cin >> w.parteReal >> w.parteImaginaria;

    Complexo resultadoSoma = soma(z, w);
    Complexo resultadoSubtracao = subtracao(z, w);
    Complexo resultadoProduto = produto(z, w);

    cout << "Soma: ";
    exibir(resultadoSoma);

    cout << "Subtração: ";
    exibir(resultadoSubtracao);

    cout << "Produto: ";
    exibir(resultadoProduto);

    return 0;
}