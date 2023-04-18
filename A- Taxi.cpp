#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> groups(5, 0);
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        groups[s]++;
    }

    int cars = groups[4];
    cars += groups[3];
    groups[1] -= groups[3];
    if (groups[1] < 0) groups[1] = 0;
    cars += (groups[2] + 1) / 2;
    if (groups[2] % 2 == 1) groups[1] -= 2;
    if (groups[1] < 0) groups[1] = 0;
    cars += (groups[1] + 3) / 4;

    cout << cars << endl;

    return 0;
}
