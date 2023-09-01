#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adjList[N];   // array of vectors

int main(){
    int m,n;
    cin >>m>>n;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    for (int i = 1; i < (n + 1); i++){
        cout << i << "->";
        vector<int>::iterator it;
        for(it = adjList[i].begin(); it != adjList[i].end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
}


