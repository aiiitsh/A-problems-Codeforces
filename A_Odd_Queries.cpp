#include <iostream>
#include <vector>
using namespace std;

bool is_odd(long long n) {
    return (n % 2 == 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            long long range_sum = 0;

            for (int i = l-1; i < r; i++) {
                if (i >= l-1 && i <= r-1) {
                    range_sum += k;
                }
                else {
                    range_sum += a[i];
                }
            }

            if (is_odd(sum - range_sum + ((r - l + 1) * k))) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
