#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<numeric>
using namespace std;
typedef long long ll;
#define OI ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi acos(-1.0)
const int nmax= 1e5 + 5;
 
int main(){
    int matrix [5][5];
    int position_x, position_y;
    for (int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                position_x=i;
                position_y=j;
                break;
            }
        
        }
    }
    
    if(position_x <= 3){
        position_x=3-position_x;
    }
    else if (position_x>3){
        position_x=5-position_x;
    }
    if(position_y <= 3){
        position_y=3-position_y;
    }
    else if (position_y>3){
        position_y=position_y-3;
    }
    cout<<position_x+position_y;
    return 0;
}