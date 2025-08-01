#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> g;
    int a,b,c,d=2147483647,e,f;
    cin>>a;
    for(f=0;f<a;f++){
        cin>>b;
        g.push_back(b);
    }
    for(f=0;f<a;f++){
        c=0;
        for(e=0;e<a;e++){
            c+=(g[e]*abs(e-f));
        }
        if(c<=d){
            d=c;
        }
    }
    cout<<d;
}