#inculde "Estudiant.hh"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M, S;
    cin >> M >> N >> S;
    vector<bool> selecc(N,false);
    int x;
    for (int i = 0; i < S; ++i) {
        cin >> x;
        selecc[x-1] = true;
    }
    for (int i = 0; i < M; ++i) {
        Estudiant e;
        double suma = 0;
        e.llegir;
        if (selecc[0]) suma += e.consultar_nota();
        for(int j = 1; i< N; ++j){
            double nota;
            cin >> nota;
            if (selecc[j])suma += nota;
        }
        e.modificar_nota(suma/S);
        e.escriure();
    }
}
