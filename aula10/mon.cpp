#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int montanha[n];
    for(int i=0;i<n;i++){
        cin >> montanha[i];
    }

    for(int i=1;i<n-1;i++){
        if(montanha[i]<montanha[i-1] && montanha[i]<montanha[i+1]){
            cout << "S" << endl;
            return 0;
        }
    }

    cout << "N" << endl;
    return 0;
}