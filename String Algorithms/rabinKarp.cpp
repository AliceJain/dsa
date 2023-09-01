#include<bits/stdc++.h>
using namespace std;
int p=31;
const int N=1e5+3, m=1e9+7;
vector<long long> powers(N);

long long calculateHash(string s){
    long long hash=0;
    for(int i=0; i<s.size(); i++){
        hash=(hash +(s[i]-'a'+1)*powers[i]) % m;
    }
    return hash;
}


int32_t main(){
    string s="na";
    string t="apna collegena";
    int S=s.size(), T=t.size();
     powers[0]=1;
    for(int i=1; i<N; i++){
        powers[i]=(powers[i-1]*p)%m;
    }
    vector<long long> h(T+1);
    for(int i=1; i<=T; i++){
        h.push_back(calculateHash(t));
    }
    long long h_s=calculateHash(s);
    for(int i=0; i+S-1<T; i++){
        long long curr_h = (h[i+S]-h[i]+m)%m;
        if(curr_h==(h_s*powers[i])%m)
            cout<<i;
    }
   

    }
