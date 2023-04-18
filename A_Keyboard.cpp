#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    char x;
    cin >> x;
    string s;
    cin >> s;
    vector<char> z = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    for(int i=0;i<s.length();i++){
        for(int j=0; j<z.size(); j++) {
            if(s[i] == z[j]) {
                if(x == 'R') {
                    cout << z[j-1];
                } else if(x == 'L') {
                    cout << z[j+1];
                }
                continue;
            }
        }
    }
    return 0;
}
