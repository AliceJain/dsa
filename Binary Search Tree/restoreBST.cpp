#include "bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void calcPointers(Node* root, **first, **mid, **last, **prev){
    if(root==NULL)
       return;
}
void restoreBST(Node* root){
    Node *first, *mid, *last, *prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calcPointers(root, &first, &mid, &last, &prev);
    if(first && last)
      swap(&(first->data), &(last->data));
    else if(first && mid)
      swap(&(first->data), &(mid->data));
}


int main(){
    Node* root=new Node(15);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(5);



    //cout<<largestBST(root).ans<<endl;

    return 0;
}