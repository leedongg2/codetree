#include <iostream>
using namespace std;
int phe(int a){
    if(a==1){
        return 2;
    }
    if(a==2){
        return 4;
    }
    return (phe(a-1)*phe(a-2))%100;
}
int main(){
    int a;
    cin>>a;
    cout<<phe(a);
}