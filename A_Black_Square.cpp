#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    string x;
    cin>>x;
    
    for(int i=0; i<x.length();i++){
        char strip=x[i];
        if(strip=='1'){
            sum += a;
        }
        else if(strip=='2'){
            sum += b;
        }
        else if(strip=='3'){
            sum += c;
        }
        else if(strip=='4'){
            sum += d;
        }
    }
    cout<<sum;
    
    return 0;
}
