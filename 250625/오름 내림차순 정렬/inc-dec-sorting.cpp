#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int a,b,c,d,e,f,g[101];
    cin>>a;
    for(f=0;f<a;f++){
        cin>>g[f];
    }
    sort(g,g+a);
    for(f=0;f<a;f++){
        cout<<g[f]<<" ";
    }
    sort(g,g+a,greater<int>());
    cout<<'\n';
    for(f=0;f<a;f++){
        cout<<g[f]<<" ";
    }
}