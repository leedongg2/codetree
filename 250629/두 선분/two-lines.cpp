#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x[5];
    for(int f=0;f<4;f++){
        cin>>x[f];
    }
    if(x[1]>=x[2] || x[3]<=x[0]){
        cout<<"intersecting";
        return 0;
    }
    cout<<"nonintersecting";

}