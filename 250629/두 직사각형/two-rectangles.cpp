#include <iostream>

using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(x2<a1 || a2<x1 || y1>b2 || y2<b1){
        cout<<"nonoverlapping";
        return 0;
    }
    cout<<"overlapping";
    return 0;
}