#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x[3],y[3];
    cin>>x[0]>>x[1]>>y[0]>>y[1];
    if((x[0]>=y[0] && x[0]<=y[1]) || (x[1]>=y[0] && x[1]<=y[1]) || (y[0]>=x[0] && y[0]<=x[1]) || (y[1]>=x[0] && y[1]<=x[1])){
        cout<<"intersecting";
    }
    else{
        cout<<"nonintersecting";
    }
}