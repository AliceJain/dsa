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

int maxSumUtil(Node* root, int &ans){
    if(root==NULL)
      return 0;
    int left=maxSumUtil(root->left, ans);
    int right=maxSumUtil(root->right, ans);

    int nodeMax=max(max(max(root->data+left, root->data+right), root->data+left+right), root->data);
    ans=max(ans, nodeMax);
    int singlePathSum=max(max(root->data+left, root->data+right), root->data);
    return singlePathSum;
}

int maxPathSum(Node* root){
    int ans=INT_MIN;
    maxSumUtil(root,ans);
    return ans;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);

    cout<<maxPathSum(root);
       
return 0;
}