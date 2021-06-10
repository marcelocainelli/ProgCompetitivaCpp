#include <iostream>
using namespace std;

int gangorra(int P1, int C1, int P2, int C2){
    if(P1*C1>P2*C2){
        return -1;
    }else if(P1*C1<P2*C2){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int P1,C1,P2,C2;
    cin >> P1 >> C1 >> P2 >> C2;
    cout << gangorra(P1,C1,P2,C2) << endl;
    return 0;
}