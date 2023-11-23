#include "LlistaIOEstudiant.hh"

void LlegirLlistaEstudiant(list<Estudiant>& l){
    Estudiant e;
    e.llegir();
    while(e.consultar_DNI() != 0)
}
void EscriureLlistaEstudiant(const list<Estudiant>& l);
// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de l
