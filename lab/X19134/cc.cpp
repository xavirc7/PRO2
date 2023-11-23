LlistaIOParInt.hh amb les funcions:
void LlegirLlistaParInt(list<ParInt>& l){
    ParInt p;
    while(p.llegeir()){
        l.insert(l.end(),p);
    }
}

void EscriureLlistaParInt(const list<ParInt>& l){
    list<ParInt>::const_iterator it = l.begin();
    while(it != l.end()){
        //cout << *it << endl;
        (*it).escriure();
        ++it
    }
}
