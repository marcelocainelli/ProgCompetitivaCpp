#include <iostream>
using namespace std;

int main(){
    int N;
    int resultado=1;
    cin >> N;
    for(int i=N;i>=1;i--){
        resultado = resultado*i;
    }
    cout << resultado << endl;
    return 0;
}