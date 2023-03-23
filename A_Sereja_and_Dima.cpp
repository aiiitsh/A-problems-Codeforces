#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum1=0, sum2=0;
    cin>>n;
    vector<int> vect1(n);
    for (int i=0;i<n;i++){
        cin>>vect1[i];
    }
    
    
    for (int i=0;i<n;i++){
        if(i%2!=0){
            if(vect1.front()>vect1.back()){
                sum1=sum1+vect1.front();
                vect1.erase(vect1.begin());
            }
            else{
                sum1=sum1+vect1.back();
                vect1.erase(std::prev(vect1.end()));
            }
        }
        else if(i%2==0){
            if(vect1.front()>vect1.back()){
                sum2=sum2+vect1.front();
                vect1.erase(vect1.begin());
            }
            else{
                sum2=sum2+vect1.back();
                vect1.erase(std::prev(vect1.end()));
            }
        }
    }
    cout<<sum2<<" "<<sum1;

    return 0;
}
