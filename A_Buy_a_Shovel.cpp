#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int price, r, min_1 = -1, min_2 = -1, test1, test2;
    cin >> price >> r;
    for(int i = 1; i <= 10; i++) {
        test1 = price * i;
        if(test1 % 10 == 0 || (test1 - r) % 10 == 0) {
            min_1 = i;
            break;
        }
    }
    for(int i = 1; i <= 10; i++) {
        test2 = (price * i) - r;
        if(test2 % 10 == 0 && test2 >= 0) {
            min_2 = i;
            break;
        }
    }
    if(min_1 == -1 && min_2 == -1) {
        cout << -1 << endl;
    } else if(min_1 == -1) {
        cout << min_2 << endl;
    } else if(min_2 == -1) {
        cout << min_1 << endl;
    } else {
        cout << min(min_1, min_2) << endl;
    }
    return 0;
}
