#include <iostream>
using namespace std;

int main(){
    int n,t,v;
    int distanciaSoma = 0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){ 
        cin >> t >> v;
        distanciaSoma +=  t*v;
    }
    
    cout << distanciaSoma << endl;

    return 0;
}