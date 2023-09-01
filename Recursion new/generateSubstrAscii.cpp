#include<iostream>
#include<string>
using namespace std;

void allSubstr(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    allSubstr(ros,ans);
    allSubstr(ros,ans+ch);
    allSubstr(ros,ans+ to_string(code));
    
}

int main(){
    allSubstr("ABC", "");
    cout<<endl;
    return 0;
}