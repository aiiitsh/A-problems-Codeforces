#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if (even > 0 && odd > 0 && even >= odd) {
            
            cout << "YES\n";
        } else if (even == 0 && odd > 0) {
            
            cout << "NO\n";
        } else if (even > 0 && odd == 0) {
            
            cout << "YES\n";
        } else {
            
            cout << "NO\n";
        }
    }

    return 0;
}
