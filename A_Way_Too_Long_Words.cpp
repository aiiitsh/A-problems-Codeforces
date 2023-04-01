
#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<numeric>
using namespace std;
typedef long long ll;
#define OI ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi acos(-1.0)
const int nmax = 1e5 + 5;
 
int main() {
    int n;
    cin >> n;
    string k;
 
    while (n--) {
        cin >> k;
        if (k.length() > 10) {
            cout << k[0] << k.length() - 2 << k[k.length() - 1] << endl;
        }
        else {
            cout << k << endl;
        }
    }
 
    return 0;
}