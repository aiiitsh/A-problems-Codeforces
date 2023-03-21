#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    //The time complexity of the sort function in the code is O(n log n), comparison-based algorithm, such as quicksort or mergesort
    for (int i : arr){
        cout << i << " ";
    }
    return 0;
}
