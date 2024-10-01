#include <iostream>

using namespace std;

struct Vetor {
    float x;
    float y;
    float z;
};

float somavetores(Vetor ind) {
    return ind.x + ind.y + ind.z;
}

int main() {
    Vetor resultado[3];
    float total = 0;

    for (int i = 0; i < 2; i++) {
        cout << "Vetor " << (i + 1) << ": ";
        cin >> resultado[i].x >> resultado[i].y >> resultado[i].z;
    }

    for (int i = 0; i < 2; i++) {
        total += somavetores(resultado[i]);
    }

    cout << "Soma dos vetores: " << total << endl;

    return 0;
}