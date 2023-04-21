#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    set <int> x;
    int k, l;
    cin>>k;
    for(int i=0;i<k;i++){
cin>>l;
x.insert(l);
    }
    
    cin>>k;
    for(int i=0;i<k;i++){
cin>>l;
x.insert(l);
    }
    if(n==x.size()){
        cout<<"I become the guy.";
    }
    else
    cout<<"Oh, my keyboard!";
    return 0;
}
