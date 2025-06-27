#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int a,b,c=0,d=0,e,f;
    string g,z;
    cin>>a>>b>>g;
    string h[a+1];
    for(f=0;f<a;f++){
        d=0;
        cin>>z;
        if(z.size()<g.size()){
            continue;
        }
        for(e=0;e<g.size();e++){
            if(g[e]!=z[e]){
                d++;
                break;
            }
        }
        if(d!=0){
            continue;
        }
        h[c]=z;
        c++;
    }
    sort(h, h+c);
    
    cout<<h[b-1];
}