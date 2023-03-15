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
    int counter_A=0, counter_B=0, n;
    char test;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>test;
        if(test == 'A'){
            counter_A ++;
        }
        else{
            counter_B ++;
        }

    }
    if (counter_A > counter_B){
        cout<<"Anton";
    }
    else if ( counter_A < counter_B){
        cout<<"Danik";
    }
    else
    cout<<"Friendship";
    return 0;
}