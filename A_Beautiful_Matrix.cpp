#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int position_x, position_y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                position_x = i;
                position_y = j;
            }
        }
    }
    int moves = abs(position_x - 2) + abs(position_y - 2);
    cout << moves << endl;
    return 0;
}
