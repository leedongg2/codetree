#include <iostream>
using namespace std;
void phe(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    phe(n-1);
    cout<<n<<" ";
}
int main() {
    int a;
    cin>>a;
    phe(a);
    return 0;
}