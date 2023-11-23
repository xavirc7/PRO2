#include <iostream>
#include <vector>
using namespace std;

struct equip{
    int num;
    int punts = 0;
    int gf = 0;
    int gc = 0;
};

typedef vector <pair<int,int>> filas;
typedef vector <filas> matriu;
typedef vector <equip> taula;

void llegir_matriu (matriu m, int n){
    
    pair <int,int> r;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> r.first >> r.second;
            m[i][j] = r;
        }
    }
}

void obtenir_matriu (matriu m, taula t, int n){
    for (int i = 0; i < n; ++i){
        t[i].num = i + 1;
        for (int j = 0; j < n; ++j){
            if (i != j){
                if (m[i][j].first < m[i][j].second) t[i].punts += 3;
                else if (m[i][j].first > m[i][j].second) t[j].punts += 3;
                else ++t[i].punts and ++t[j].punts;
                t[i].gf += m[i][j].first;
                t[i].gc +=m[i][j].second;
                t[j].gc += m[i][j].first;
                t[j].gf +=m[i][j].second;
            }
        }
    }
}


bool cmp(const taula& a, const taula& b) {
    if (a.punts != b.punts) return a.punts > b.punts;
    if (a.gf - a.gc != b.gf - b.gc) return a.gf - a.gc > b.gf - b.gc;
    return a.num < b.num;
    
}


int main(){
    int n;
    cin >> n;
    matriu m;
    llegir_matriu (m, n);
    taula t(4);
    obtenir_matriu (m, t, n);
    sort(t.begin(), t.end(), cmp);
}
