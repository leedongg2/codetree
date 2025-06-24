#include <iostream>
#include <algorithm>
using namespace std;
int g[1001];
int main(){
    int a,b,c,d=0,e,f;
    cin>>a;
    for(f=0;f<a*2;f++){
        cin>>g[f];
    }
    sort(g,g+(a*2));
    for(f=0;f<a;f++){
        if(d<(g[f]+g[(a*2)-1-f])){
            d=(g[f]+g[(a*2)-1-f]);
        }
    }
    cout<<d;
}