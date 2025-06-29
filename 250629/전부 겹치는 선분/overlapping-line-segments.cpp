#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g[101]={0};
    cin>>a;
    for(f=0;f<a;f++){
        cin>>b>>c;
        for(e=b;e<=c;e++){
            g[e]++;
        }
    }
    for(f=0;f<101;f++){
        if(g[f]==a){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}