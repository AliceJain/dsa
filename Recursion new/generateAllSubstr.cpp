#include<iostream>
using namespace std;

void allSubstr(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    allSubstr(ros,ans);
    allSubstr(ros,ans+ch);
    
}

int main(){
    allSubstr("ABC", "");
    cout<<endl;
    return 0;
}