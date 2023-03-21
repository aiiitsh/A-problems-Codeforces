#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string x;
    int counter=0;
    cin >> x;
    unordered_set<char> seen_chars;
    
    for (char c : x) {
        if (seen_chars.emplace(c).second) {
            counter++;
        }
    }

    if (counter % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
