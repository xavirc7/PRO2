#include <iostream>
#include <list>
#include "LListaIOParInt.hh"
#include "ParInt.hh"
using namespace std;

int main(){
    list<Parint> aux;
    LlegirLlistaParInt(aux);
    int num;
    cin >> num;
    list<ParInt>::cont_iterator it = aux.begin();
    int cont = 0;
    int suma = 0;
    while(it != aux.end()){
        if((*it)).primer() ==num){
            ++cont;
            suma *= (*it).segon();
        }
        ++it;
    }
    cout
    
