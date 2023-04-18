#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0;
        bool passed_candy = false;
        for (char c : s) {
            switch (c) {
            case 'L':
                a--;
                break;
            case 'R':
                a++;
                break;
            case 'U':
                b++;
                break;
            case 'D':
                b--;
                break;
            }
            if (a == 1 && b == 1) {
                passed_candy = true;
                break;
            }
        }
        if (passed_candy) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
