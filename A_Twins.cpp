#include<bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    int n, x;
    float sum=0;
    multiset<int, greater<int>>  my_set;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        my_set.insert(x);
        sum=sum+x;

    }
    sum=sum/2;
    int ac=0;
    int counter=0;
    for (auto it = my_set.begin(); it != my_set.end(); ++it) {
        counter++;
        ac= ac+ *it ;
        if (ac>sum){
            cout<<counter;
            break;
        }
        
    }

    return 0;
}
