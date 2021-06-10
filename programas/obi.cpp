#include <iostream>
using namespace std;

int main(){
    int N,P,fase1,fase2,cont=0;

    cin >> N >> P;
    for(int i=0;i<N;i++){
        cin >> fase1 >> fase2;
        if(fase1+fase2>=P){
            cont++;
        }
    }
    cout << cont << endl;

    return 0;
}