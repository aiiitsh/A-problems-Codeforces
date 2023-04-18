#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        
        cin>>n;
        
        for(int j=0;j<n;j++){
            cin>>k;
            if(k%2!=0){
                sum++;

            }


        }
        cout<<sum<<"\n";
        sum=0;
    }


}
