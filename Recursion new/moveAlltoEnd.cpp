#include<iostream>
using namespace std;

string movetoend(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ros=movetoend(s.substr(1));
    if(ch=='x'){
        return ros+ch;
    }
    return ch+ros;
    
}

int main(){
    cout<<movetoend("xxxasndccdfexxxasnwixe");
    return 0;
}