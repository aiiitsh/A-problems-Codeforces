#include<bits/stdc++.h>

using namespace std;

 
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    set<char> x;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<n;i++){
        x.insert(s[i]);

    }
    if(26==x.size()){
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}