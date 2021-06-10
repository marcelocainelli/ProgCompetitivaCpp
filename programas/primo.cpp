#include <iostream>
using namespace std;

int main(){
    int N;
    bool res=true;
    cin >> N;
    for(int i=N-1;i>1;i--){
        if(N%i==0){
            res=false;
        }
    }
    if(res){
        cout << "sim" << endl;
    }else{
        cout << "nao" << endl;
    }

    return 0;
}