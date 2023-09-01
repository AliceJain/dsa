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

Node* sortedArrayToBst(int arr[], int start, int end){
    if(start>end)
      return NULL;
  int mid=(start+end)/2;
  Node* root=new Node(arr[mid]);
  root->left=sortedArrayToBst(arr,start,mid-1);
  root->right=sortedArrayToBst(arr,mid+1,end);
  return root;
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
    int arr[]={10,20,30,40,50};
    Node* root=sortedArrayToBst(arr,0,4);
    printPreorder(root);
    return 0;
    
}