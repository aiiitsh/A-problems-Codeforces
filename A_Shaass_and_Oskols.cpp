#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> my_vector(n+2);
    for (int i=0; i<n; i++){
        cin >> my_vector[i];
    }
    int k;
    cin >> k;
    int x, y;
    for(int i=0; i<k; i++){
        cin >> x >> y;
        if(x<=n && y<=my_vector[x-1]){
            my_vector[x-2] += y-1;
            my_vector[x] += my_vector[x-1]-y;
            my_vector[x-1] = 0;
        }
        else if(x>n && y<=my_vector[x-1]){
            my_vector[x] += my_vector[x-1]-y;
            my_vector[x-1] = 0;
        }
        else if(x<=n && y>my_vector[x-1]){
            my_vector[x-2] += y-1;
            my_vector[x-1] = 0;
        }
        else if(x>n && y>my_vector[x-1]){
            // All birds on the x-th wire have flown away
            int total_birds = my_vector[n-1] - y;
            for(int j=n-2; j>=0; j--){
                if(my_vector[j] >= total_birds){
                    my_vector[j+1] += total_birds;
                    break;
                }
                else{
                    total_birds -= my_vector[j];
                    my_vector[j+1] += my_vector[j];
                    my_vector[j] = 0;
                }
            }
            if(total_birds > 0){
                my_vector[0] += total_birds;
            }
            my_vector[n-1] = 0;
        }
    }
    for(int i=0; i<n; i++){
        cout << my_vector[i] << "\n";
    }
    return 0;
}
