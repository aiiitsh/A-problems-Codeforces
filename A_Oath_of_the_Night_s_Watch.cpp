#include<bits/stdc++.h>

using namespace std;

 
int main(){
    int n;
    cin>>n;
    vector <int> x(n);
    
    for(int i=0;i<n;i++){
        cin>>x[i];

    }
    sort(x.begin(), x.end());
    int counter=0;
    for(int i=1; i< n-1;i++){
        if(x[i]<x[n-1]&& x[i]>x[0]){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}