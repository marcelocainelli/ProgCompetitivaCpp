#include <iostream>
using namespace std;

int main(){
    int P1,C1,P2,C2;
    int res;
    cin >> P1 >> C1 >> P2 >> C2;
    if(P1*C1>P2*C2){
        res = -1;
    }else if(P1*C1<P2*C2){
        res = 1;
    }else{
        res = 0;
    }
    cout << res << endl;
    return 0;
}