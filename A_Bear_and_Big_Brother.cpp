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
    int a, b, years=0;
    cin>>a;
    cin>>b;
    while (true){
        if (a<=b){
            years++;
            a=a*3;
            b=b*2;
        }
        else{
        break;}

    }  
    cout<<years;
      return 0;
}