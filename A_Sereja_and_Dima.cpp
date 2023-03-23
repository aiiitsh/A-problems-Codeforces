#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    vector<int> vect1(n);
    for (int i = 0; i < n; i++) {
        cin >> vect1[i];
    }

    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (vect1[left] > vect1[right]) {
                sum1 += vect1[left];
                left++;
            } else {
                sum1 += vect1[right];
                right--;
            }
        } else {
            if (vect1[left] > vect1[right]) {
                sum2 += vect1[left];
                left++;
            } else {
                sum2 += vect1[right];
                right--;
            }
        }
        if (left > right) break;
    }
    cout << sum1 << " " << sum2;

    return 0;
}
