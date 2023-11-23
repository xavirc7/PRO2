#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;


int main(){
    int N;
    cin >> N;
    vector <Estudiant> v(N);
    for (int i = 0; i < N; i++) {
        v[i].llegir();
    }
    vector <Estudiant> res;
    res[0] = v[0];
    int j = 0;
    for (int i = 1; i< N; ++i){
        if (v[i].consultar_DNI() == res[j].consultar_DNI()){
            if(v[i].te_nota()){
                if(res[j].te_nota()){
                    if (v[i].consultar_nota() > res[j].consultar_nota()) {
                        res[j].modificar_nota(v[i].consultar_nota());
                    }
                }
            }
        }
        ++j;
        res[j] = v[i];
    }
    
    //CALCULOS
    for (int i = 0; i < res.size(); ++i){
        res[i].escriure();
    }
}
