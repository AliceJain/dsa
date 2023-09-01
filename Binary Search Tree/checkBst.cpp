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

bool isBst(Node* root, Node* min=NULL, Node* max=NULL){
  if(root==NULL)
      return true;
    if(min!=NULL && root->data <= min->data)
      return false;
    if(max!=NULL && root->data >= max->data)
      return false;
    bool leftValid=isBst(root->left, min, root);
    bool rightValid=isBst(root->right, root, max);

   return leftValid && rightValid;

}


int main(){
    Node* root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(8);
    cout<<isBst(root, NULL, NULL);
}