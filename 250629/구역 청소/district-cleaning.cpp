#include <iostream>
#include <algorithm>
#include <stdbool.h>
using namespace std;

int g[5],f;
bool che[101]={false};
int main() {
    int ans=0;
    cin>>g[0]>>g[1]>>g[2]>>g[3];
    for(f=g[0];f<g[1];f++){
        che[f]=true;
    }
    for(f=g[2];f<g[3];f++){
        che[f]=true;
    }
    for(f=0;f<101;f++){
        if(che[f]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}