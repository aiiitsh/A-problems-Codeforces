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
    int y, w;
    cin >> y >> w;
    int max_value = max(y, w);
    int numerator = 6 - max_value + 1;
    int denominator = 6;
    int gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
    cout << numerator << "/" << denominator << endl;
    return 0;
}
