#include <iostream>
using namespace std;

int main(){
    int n, t, v, somaDist=0;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t >> v;
        // d = v * t
        somaDist += v * t;
    }
    
    cout << somaDist << endl;

    return 0;
}