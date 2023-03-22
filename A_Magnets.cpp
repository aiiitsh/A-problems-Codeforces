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
    int n, x, counter=0, toggle;
    cin>>n;
    cin>>x;
    toggle=x;
    for(int i=1;i<n;i++){
        cin>>x;
        if (x != toggle){
            counter++;
            
        }
        toggle=x;
    }
    cout<<counter+1;

    

   
    return 0;
}