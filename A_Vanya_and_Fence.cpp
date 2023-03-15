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
    int counter=0, n, h, z;
    cin>>n;
    cin>>h;
    for (int i=0; i<n; i++){
        cin>>z;
        if(z<=h){
            counter = counter + 1;
        }
        else if(z>h){
            counter = counter + 2;
        }

    }
    cout<<counter;
    
    return 0;
}