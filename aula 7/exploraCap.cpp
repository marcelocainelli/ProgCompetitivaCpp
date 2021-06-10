#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    long double p,q,coefAngular,a,b;
    int cont=0;

    cin >> n >> p >> q;

    long double coef = p/q;

    vector<pair<long double,long double>> VectPontos;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        VectPontos.push_back(make_pair(a,b));        
    }

    //0x1 0x2 0x3 0x4
    //1x2 1x3 1x4
    //2x3 2x4
    //3x4
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            coefAngular = ((VectPontos[i].second - VectPontos[j].second)/(VectPontos[i].first - VectPontos[j].first));
            if(coefAngular >= coef){
                cont++;                  
            }
        }
    }

    cout << cont << endl;

    return 0;
}