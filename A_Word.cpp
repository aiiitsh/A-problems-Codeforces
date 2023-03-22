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
    
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            counter_lo++;
        } else if (c >= 'A' && c <= 'Z') {
            counter_up++;
        }
    }
    
    
    if (counter_up > counter_lo) {
        for (char &c : s) {
            c = toupper(c);
            
        }
        
    } else {
        for (char &c : s) {
            c = tolower(c);
        }
    }
    cout << s ;

   
    return 0;
}
