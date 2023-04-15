#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> x (n);
    for(int i=0; i<n;i++){
        cin>>x[i];
    } 
    
    int maximum, minimum;
    for(int i=0;i<n;i++){
        
        if(i==0){
            maximum=x[n-1]-x[0];
            minimum=x[1]-x[0];

        }
        else if(i==(n-1)){
            maximum= x[n-1]-x[0];
            minimum= x[n-1]-x[n-2];
        }
        else{
            maximum= max((x[n-1]-x[i]), (x[i]-x[0]));
            minimum=min((x[i+1]-x[i]), (x[i]-x[i-1]));
        }
        cout<<minimum<<" "<< maximum<<"\n";
    }

    return 0;
}
