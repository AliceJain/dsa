#include "bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

vector <Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end; i++){
        vector<Node*> leftSub=constructTrees(start,i-1);
        vector<Node*> rightSub=constructTrees(i+1,end);

        for(int j=0; j<leftSub.size(); j++){
            Node* left=leftSub[j];
            for(int k=0; k<rightSub.size();k++){
                Node* right=rightSub[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void printPreorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}


int main(){
    vector<Node*> totalTrees=constructTrees(1,3);
    for(int i=0; i<totalTrees.size(); i++){
        cout<<(i+1)<<" : ";
    printPreorder(totalTrees[i]);
    cout<<endl;
    }
    return 0;
    
}