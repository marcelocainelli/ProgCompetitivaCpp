#include <iostream>
using namespace std;

int main(){
    int d,a,l,c;

    cin >> d >> a >> l >> c;

    if(d>a && d>l && d>c){
        cout << "N" << endl;
    }else{
        cout << "S" << endl;
    }

    return 0;
}