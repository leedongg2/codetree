#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    vector <int> g,h;
    cin>>a;
    g.push_back(0);
    for(f=1;f<=a;f++){
        cin>>b;
        g.push_back(b);
        if(f%2!=0){
            h=g;
            sort(h.begin(),h.end());
            cout<<h.at((f/2)+1)<<" ";
        }
    }
}