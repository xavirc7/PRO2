#include <iostream>
#include <queue>
using namespace std;

void recalcular_min_max(queue<int> q, int& min, int& max) {
    max = -1000;
    min = 1000;
    while (not q.empty()) {
        if (max < q.front()) max = q.front();
        if (min > q.front()) min = q.front();
        q.pop();
    }
}

int main(){
    queue<int> q;
    int n, max, min, sum, cont;
    double media;
    max = 0;
    min = 0;
    media = 0;
    sum = 0;
    cont = 0;
    cin >> n;
    while (n <= 1000 and n >= -1001){
        if (n == -1001){
            if (q.empty()) cout << 0 << endl;
            else {
                sum -= q.front();
                --cont;
                q.pop();
                if (q.empty()){
                    cout << 0 << endl;
                }
                else{
                    recalcular_min_max(q,min,max);
                    media = double(sum) / double(cont);
                    cout << "min " << min << "; max " << max << "; media " << media << endl;
                }
            }
        }
        else {
            sum += n;
            ++cont;
            media = double(sum) / double(cont);
            q.push(n);
            recalcular_min_max(q,min,max);
            cout << "min " << min << "; max " << max << "; media " << media << endl;
        }
        cin >> n;
    }
    
}
