#include <iostream>
using namespace std;

int main(){
    int n,p,x,y;
    int aprovados =0;

    cin >> n >> p;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(x+y >= p){
            aprovados++;
        }
    }
    cout << aprovados << endl;

    return 0;
}