#include<iostream>
using namespace std;
int main(){
    string s="Hello! Welcome to my profile.";
    for(int i=0;i<=s.length();i++){
        if(s[i]%2==0){
             s[i]='a';
            cout<<s;
        }
        
        
       
    }
    
}