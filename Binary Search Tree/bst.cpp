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

Node* insert(Node* root, int val){
    if(root==NULL)
       return new Node(val);
    if(val<root->data)
        root->left=insert(root->left, val);
    else
        root->right=insert(root->right, val);
    return root;
}

Node* search(Node* root, int key){
    if(root==NULL)
      return NULL;
    if(root->data==key)
       return root;
    if(root->data<key){
        return search(root->left, key);
    }
    return search(root->right, key);
    
}

Node* inorderSuccessor(Node* root){
    Node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

Node* deleteBST(Node* root, int key){
    if(key < root->data)
       root->left=deleteBST(root->left, key);
    else if(key > root->data)
       root->right=deleteBST(root->right, key);
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node * temp=inorderSuccessor(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right, temp->data);
    }
    return root;

}

void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,7);
    insert(root,3);
    insert(root,2);
    insert(root,4);
    deleteBST(root,5);
    inorder(root);
}