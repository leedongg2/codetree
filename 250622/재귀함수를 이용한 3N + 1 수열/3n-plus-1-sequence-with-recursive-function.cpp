#include <iostream>
using namespace std;
int count=0;
void phe(int a){
    if(a==1){
        return ;
    }
    if(a%2==0){
        a/=2;
    }
    else{
        a*=3;
        a++;
    }
    count++;
    phe(a);
}
int main(){
    int a;
    cin>>a;
    phe(a);
    cout<<count;
}