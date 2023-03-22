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
    string s;
    int counter_lo=0, counter_up=0;
    cin>> s;
    
    for(int i=0;i<s.length();i++){
        if (int(s[i])>90){
            counter_lo ++;
        }
        else if (int(s[i])<=90){
counter_up++;
        }
        

    }
    
    if(counter_up>counter_lo){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
        
        

    }
        
    
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    }
    return 0;
}