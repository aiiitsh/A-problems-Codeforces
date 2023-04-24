#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int counter=0;
    char c, z='q';
    for(int i=0;i<n;i++){
        cin>>c;
        if(c==z){
            counter++;
        }
        z=c;

    }
    cout<<counter;

    return 0;
}
