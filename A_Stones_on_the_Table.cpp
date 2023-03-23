#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string x;
    cin >>x;
    int counter=0;
    for (int i=0;i<n;i++){
        if (x[i]==x[i+1]){
            counter++;
        }
    }
    cout<<counter;

    return 0;
}
