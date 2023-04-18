#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    string x;
    for(int i=0;i<t;i++){
        cin>> x;
        cout<<x;
        for(int j=x.length()-1;j>=0;j--){
            cout<<x[j];
        }
        cout<<'\n';
    }
    return 0;
}
