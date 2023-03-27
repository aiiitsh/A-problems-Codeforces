#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, counter=0;
    
    cin>>a>>b>>c>>d;
    if(a==b || a ==c || a==d) {
        counter++;
    }
    if(b==c || b ==d ) {
        counter++;
    }
    if(c==d  ) {
        counter++;
    }   
    cout<<counter;
    return 0;}
