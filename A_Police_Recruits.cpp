#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, counter = 0, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;
        if (event == -1) {
            if (counter == 0) {
                x++;
            } else {
                counter--;
            }
        } else {
            counter += event;
        }
    }
    cout << x << endl;
    return 0;
}
