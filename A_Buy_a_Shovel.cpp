#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int price, r;
    cin>>price>>r;

    for(int i=1;i<10;i++){
        int total_price = price * i;
        int change = total_price % 10;
        if(change == r || change == 0){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}

