#include <iostream>

using namespace std;

int f,n;
int x1[101], x2[101];

int main() {
    cin >> n;
    int ma1=0, ma2=0;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    for(f=0;f<n;f++){
        if(x1[f]>ma1){
            ma1=x1[f];
        }
    }
     for(f=0;f<n;f++){
        if(x2[f]>ma2){
            ma2=x2[f];
        }
    }
    if(ma1<=ma2){
        cout<<"Yes";
        return 0;
    }
    cout<<"NO";
}