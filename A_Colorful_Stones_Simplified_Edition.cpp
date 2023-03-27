#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int pos = 1;
    for (char c : t) {
        if (c == s[pos-1]) {
            pos++;
        }
    }

    cout << pos << endl;

    return 0;
}
