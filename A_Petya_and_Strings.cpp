#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<numeric>
using namespace std;
typedef long long ll;
#define OI ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi acos(-1.0)
const int nmax= 1e5 + 5;

int main(){
    string x, y;
    char l,m;
    cin>>x>>y;
    int k=0, j=0 ;

    for(int i=0 ;i<x.length();i++){
        l=x[i];
        
        l=tolower(l);
        x[i] = l;
        

    }
    for(int i=0 ;i<x.length();i++){
        m=y[i];
        m=tolower(m);
        y[i] = m;
        
    }
    for(int i=0 ;i<x.length();i++){
        if(y[i] < x[i]){
            cout<<1;
            break;

        }
        
        else if (y[i] > x[i]){
            cout<<-1;
            break;

        }
        
        else if (i==(x.length())-1 )
        cout<<0;
        
        
    }
    
    



   

    
    return 0;
}