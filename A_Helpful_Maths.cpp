#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    multiset<int> x;
    string z;
    cin >> z;
    for (int i = 0; i < z.length(); i++) {
        if (z[i] != '+') {
            x.insert(stoi(string(1, z[i])));
        }
    }
    int count = 0;
    for (int elem : x) {
        cout << elem;
        count++;
        if (count < x.size()) {
            cout << "+";
        }
    }
    return 0;
}
