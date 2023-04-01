#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<numeric>
using namespace std;
typedef long long ll;
#define OI ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi acos(-1.0)
const int nmax = 1e5 + 5;
 
int main() {
   int n;
   cin>>n;
   int k;
   vector<int> ones, twos, threes;
   for(int i=0;i<n;i++){
    cin>>k;
    if(k==1){
        ones.push_back(i+1); 
    }
    else if(k==2){
        twos.push_back(i+1); 
    }
    else if(k==3){
        threes.push_back(i+1); 
    }
   }
   int num_teams = min(min(ones.size(), twos.size()), threes.size());
   cout << num_teams << "\n";
   for(int i=0; i<num_teams; i++) {
       cout << ones[i] << " " << twos[i] << " " << threes[i] << "\n";
   }
 
    return 0;
}
