#include <iostream>
using namespace std;

int main(){
    int c,p,f;

    cin >> c >> p >> f;
    if(c*f > p){
        cout << "N" << endl;
    }else{
        cout << "S" << endl;
    }
    
    return 0;
}