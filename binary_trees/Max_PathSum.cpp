//Max PathSum

#include <iostream>
#include <math.h>
#include <climits>



using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
  
  Node(int val){
      data=val;
      left=NULL;
      right=NULL;
  }
  
  
};

int maxPathSumUtil(Node* root, int &ans){
    if(root==NULL){
        return 0;
    }
    
    int left=maxPathSumUtil(root->left, ans);
    int right=maxPathSumUtil(root->right, ans);
    int NodeMax=max(max(root->data, root->data + right+ left), max(root->data+left, root->data+right));
    ans=max(ans, NodeMax);
    
    int singlePath=max(root->data, max(root->data + left, root->data + right));
    
    return singlePath;
}

int maxPathsum(Node* root){
    int ans=INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    
    cout<<maxPathsum(root);
    
    return 0;
}
