#include <iostream>
using namespace std;

int main(){

    int l,d,k,p,pedagios,resposta;

    cin >> l >> d >> k >> p;
    pedagios = l/d;
    resposta = (l*k) + (pedagios*p);
    cout << resposta << endl;

    return 0;
}