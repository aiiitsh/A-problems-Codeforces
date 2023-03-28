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
    int x, y;
    cin>>x>>y;
    int a = max(x, y);
    switch (a){
        case 6:
        cout<<"1/6";
        break;
        case 5: 
        cout<<"1/3";
        break;
        case 4:
        cout<<"1/2";
        break;
        case 3:
        cout<<"2/3";
        break;
        case 2:
        cout<<"5/6";
        break;
        case 1:
        cout<<"1/1";
        break;


    }

    
    return 0;
}