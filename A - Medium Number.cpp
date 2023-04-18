#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, j, u;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
       int sum=a+b+c;
       j=min(min(a, b), min(c, b));
       u=max(max(a, b), max(c, b));
       
       cout<<sum-j-u<<'\n';
    }
}
