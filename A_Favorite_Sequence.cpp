#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;

    while(t--){
        cin>>n;
        if(n==1){
            int z;
            cin>>z;
            cout<<z<<"\n";
            continue;
        }
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        int *front=&x[0];
        int *back=&x[n-1];
        int q;
        if(n%2==0){
            q=n/2;
        }
        else{
            q=(n+1)/2;
        }
        for(int i=0;i<q;i++){
            if(i==q-1 && n%2!=0){
                cout<<*front;
            }
            else{
                cout<<*front<<" "<<*back<<" ";
                front++;
                back--;
            }
        }
        cout<<"\n";
    }

    return 0;
}
