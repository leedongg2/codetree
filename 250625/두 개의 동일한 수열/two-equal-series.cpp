#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c=0,d,e,f,g[101],h[101];
    cin>>a;
    for(f=0;f<a;f++){
        cin>>g[f];
    }
    for(f=0;f<a;f++){
        cin>>h[f];
    }
    sort(g,g+a);
    sort(h,h+a);
    for(f=0;f<a;f++){
        if(g[f]!=h[f]){
            c++;
        }
    }
    c==0 ? (cout<<"Yes") : (cout<<"No");
}