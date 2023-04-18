#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]== '1'){
            if(i%2!=0){
                cout<<"Aoki";
                return 0;
            }
            else{
                cout<<"Takahashi";
                return 0;
            }
            
        }
    }
}
