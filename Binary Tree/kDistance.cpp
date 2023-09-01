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

void printSubtree(Node* root, int k){
    if(root==NULL || k<0)
      return;
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtree(root->left, k-1);
    printSubtree(root->right, k-1);

}

int nodesAtk(Node* root, Node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root == target){
      printSubtree(root,k);
      return 0;
    }
    int dl=nodesAtk(root->left, target, k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        } else{
            printSubtree(root->right, k-dl-2);
        }
        return 1+dl;
    }
    int dr=nodesAtk(root->right, target, k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        } else{
            printSubtree(root->left, k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}


int main(){
struct Node* root=new Node(1);
        root->left=new Node(2);
        root->right=new Node(3);
        root->left->left=new Node(4);
        nodesAtk(root, root->left, 1);
return 0;
}