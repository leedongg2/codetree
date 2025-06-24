#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a;
    string g[a+1];
    for(f=0;f<a;f++){
        cin>>g[f];
    }
    sort(g,g+a);
    for(f=0;f<a;f++){
        cout<<g[f]<<'\n';
    }
}