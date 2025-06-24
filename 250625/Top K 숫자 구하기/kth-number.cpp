#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,d,e,f,g[1001];
    cin>>a>>b;
    for(f=0;f<a;f++){
        cin>>g[f];
    }
    sort(g,g+a);
    cout<<g[b-1];
}