#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
    string x;
    int counter=0;
    cin>> x;
    unordered_set<char> seen_chars;
    
    for(char c :x ){
        if(seen_chars.find(c) == seen_chars.end()){
            seen_chars.insert(c);
            counter++;
        }
    }

    
    if(counter%2==0){
        cout<<"CHAT WITH HER!";

    }
    else
    cout<<"IGNORE HIM!";
    return 0;
}