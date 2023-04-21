#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, counter1=0, counter2=0;
    cin>>n;
    string a="ahmed hesham", b="mohamed hesham", x;
    if(n==1){
        cin>>x;
        cout<<x;
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==a){
            counter1++;
            continue;

        }
        else if(x==b){
            counter2++;
            continue;

        }
        else if(a=="ahmed hesham"){
            a=x;
            counter1++;
            continue;
        }
        else if(b=="mohamed hesham" && a!="ahmed hesham"){
            b=x;
            counter2++;
            continue;
        }
        
        
    }
    if(counter1>counter2){
        cout<<a;
    }
    else
    cout<<b;

    
    
    
    return 0;
}
