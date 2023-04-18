#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int score = a[k-1];
    int num_advancers = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= score && a[i] > 0) {
            num_advancers++;
        }
    }
    cout << num_advancers << endl;
    return 0;
}
