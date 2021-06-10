#include <iostream>
using namespace std;

int main(){
    int p1,c1,p2,c2;
    int resultado;

    cin >> p1 >> c1 >> p2 >> c2;

    if(p1*c1 == p2*c2){
        resultado = 0;
    }else if(p1*c1 > p2*c2){
        resultado = -1;
    }else{
        resultado = 1;
    }

    cout << resultado << endl;


    return 0;
}