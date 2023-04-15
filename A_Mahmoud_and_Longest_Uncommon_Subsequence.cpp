#include<bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    cin>>x>>y;
    if(x==y){
        cout<<-1;
    }
    else{
        string a =x+y;
        set<int> q;
        for(int i=0;i<a.length();i++){
            q.insert(a[i]);
        }
        
        cout<<q.size()-(min((y.length()), (x.length())))+(a.length() - q.size());
    }

    return 0;
}
