#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
int h, g;
    
    map<int, int> home_uniforms, guest_uniforms;
    for (int i = 0; i < n; i++) {
        
        cin >> h >> g;
        home_uniforms[i] = h;
        guest_uniforms[i] = g;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home_uniforms[i] == guest_uniforms[j]) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
