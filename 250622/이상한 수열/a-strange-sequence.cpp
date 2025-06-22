#include <iostream>
using namespace std;
int phe(int a){
    if(a==1){
        return 1;
    }
    if(a==2){
        return 2;
    }
    return (phe(a/3)+phe(a-1));
}
int main(){
    int a;
    cin>>a;
    cout<<phe(a);
}