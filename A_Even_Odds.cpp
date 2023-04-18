#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 1;
    } else if (n % 2 == 0 && k == n) { // last element, even section
        cout << k;
    } else if (n % 2 != 0 && k == n) { // last element, odd section
        cout << k - 1;
    } else if (k == 1) { // first element
        cout << k;
    } else if (n % 2 == 0 && k <= n/2) { // element in the odd section
        cout << 2*k - 1;
    } else if (n % 2 == 0 && k > n/2) { // element in the even section
        cout << 2*(k - n/2);
    } else if (n % 2 != 0 && k <= (n+1)/2) { // element in the odd section
        cout << 2*k - 1;
    } else if (n % 2 != 0 && k > (n+1)/2) { // element in the even section
        cout << 2*(k - (n+1)/2);
    }
    return 0;
}
