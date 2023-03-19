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
    int counter=0, n, x, y, z;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>y;
        cin>>z;
        if( x & y == 1 || x&z ==1 || y&z ==1){
            counter ++;
        }
    }
    cout<<counter;
    return 0;
}
