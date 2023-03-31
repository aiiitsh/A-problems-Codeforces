#include<bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    set<int> x;
    char z='{';
    while(z!='}'){
        cin>>z;
        if(z=='{' || z==','){
            continue;
        }
        else
        x.insert(z);

    }
    cout <<x.size()-1;
    return 0;
}
