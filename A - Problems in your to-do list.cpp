#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
    int n, z, sum=0;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>z;
        if(z>=1000){
            sum++;
        }

    }
    cout<<sum<<"\n";
   }
   return 0;
}
