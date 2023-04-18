#include <iostream>
#include<set>
using namespace std;

int main() {
    int t;
    cin>>t;
    char c;
    for(int i=0;i<t;i++){
        cin>> c;
        if(c=='c' ||c=='d' ||c=='e' ||c=='f' ||c=='r'|| c=='o' || c=='s'  ){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}
