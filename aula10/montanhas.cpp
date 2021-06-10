#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    for(int i=2;i<=n-1;i++){
        if(v[i]<v[i-1] && v[i]<v[i+1]){
            cout << "S" <<endl;
            return 0;
        }
    }
    cout << "N" << endl;
    return 0;
}