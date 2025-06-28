#include <iostream>
#include <algorithm>
using namespace std;

int g[5];

int main() {
    cin>>g[0]>>g[1]>>g[2]>>g[3];
    sort(g,g+4);
    cout<<g[3]-g[0];

    return 0;
}