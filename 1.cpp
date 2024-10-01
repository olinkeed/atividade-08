#include <iostream>
#define N 10
using namespace std;

typedef struct{
    int hora;
    int minuto;
}hora;

typedef struct{
    int dia;
    int mes;
    int ano;
}data1;

typedef struct{
    hora horario;
    data1 data; 
    string compromisso;
}agenda;
agenda vetagenda[N];

int preenche(agenda *ind){
    cout << "Qual o horario do compromisso?" << endl;
    cin >> ind->horario.hora;
    cout << "Qual os minutos do compromisso?" << endl;
    cin >> ind->horario.minuto;
    cout << "Qual o dia do compromisso?" << endl;
    cin >> ind->data.dia;
    cout << "Qual o mes do compromisso?" << endl;
    cin >> ind->data.mes;
    cout << "Qual o ano do compromisso?" << endl;
    cin >> ind->data.ano;
    cout << "Qual sera o compromisso?" << endl;
    cin >> ind->compromisso;
    return 1;
}

void exibir(agenda *ind){
    cout << "Horario do compromisso: " << ind->horario.hora <<":"<< ind->horario.minuto << endl;
    cout << "Dia do compromisso: " << ind->data.dia <<"/"<< ind->data.mes<< "/" << ind->data.ano << endl;
    cout << "Compromisso: " << ind->compromisso << endl;
}

int main(){
    int aux = 0, i;
    char continuar = 'S';
    while((continuar == 'S') || (continuar == 's')){
        aux += preenche(&vetagenda[aux]);
        cout << "Continuar? [S/N]";
        cin >> continuar;
    }
    cout << endl;
    for(i = 0; i < N; i++){
        if(vetagenda[i].horario.hora != 0){
            cout << "Compromisso: " << i + 1 << endl;
            exibir(&vetagenda[i]);
            cout << endl;
        }
    }
}   