#include<bits/stdc++.h>
using namespace std;

int main(){
   
   string s;
   cin>>s;
   
   if(s[0]== s[1] && s[1]==s[2]){
    cout<<-1;
   }
   else if(s[0]== s[1] && s[1] !=s[2]){
    cout<<s[2];
   }
   else if(s[0]!= s[1] && s[1]==s[2]){
    cout<<s[0];
   }
   else{
    cout<<s[1];
   }
}
