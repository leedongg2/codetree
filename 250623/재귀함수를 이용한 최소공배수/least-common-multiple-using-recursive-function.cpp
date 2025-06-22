#include <iostream>
#include <vector>
using namespace std;
vector <int> g;
int phe(int a, int b){
    if(a%b==0){
        return b;
    }
    return phe(b,a%b);
}
int iestr(int a,int b){
    return (a/phe(a,b)*b);
}
int ohs(int a){
    if(a==g.size()-1){
        return g.at(a);
    }
    return iestr(g.at(a),ohs(a+1));
}
int main(){
    int a,b,c,d,e,f;
    cin>>a;
    for(f=0;f<a;f++){
        cin>>b;
        g.push_back(b);
    }
    cout<<ohs(0);
}