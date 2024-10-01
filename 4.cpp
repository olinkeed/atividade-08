#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Carta {
    string naipe;
    string valor;
};

int main() {
    Carta baralho[52];
    
    string naipes[] = {"Copas", "Ouros", "Espadas", "Paus"};
    string valores[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    
    int aux = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            baralho[aux].naipe = naipes[i];
            baralho[aux].valor = valores[j];
            aux++;
        }
    }

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }

    cout << "Cartas do Jogador 1:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << baralho[i].valor << " de " << baralho[i].naipe << endl;
    }

    cout << "Cartas do Jogador 2:" << endl;
    for (int i = 5; i < 10; i++) {
        cout << baralho[i].valor << " de " << baralho[i].naipe << endl;
    }

    return 0;
}