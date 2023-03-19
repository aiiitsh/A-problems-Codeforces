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
    int t, a,b,c;
    cin>> t;
    for (int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b==c){
            cout<<"+"<<endl;
        
        }
        else if(a-b==c){
            cout<<"-"<<endl;
        
        }


    }
    
    return 0;
}
