#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left_child;
    TreeNode* right_child;
};
TreeNode* newTreeNode(int data){
    TreeNode* treenode=new TreeNode();
    treenode->data=data;
    treenode->left_child=NULL;
    treenode->right_child=NULL;
    return(treenode);
}
int main()
{
    TreeNode* root=newTreeNode(0);    //value to root node
    root->left_child=newTreeNode(1);  //value to left child
    root->right_child=newTreeNode(2); //value to right child
    cout<<"The Root Node is "<<root->data<<endl;      
    cout<<"Left Child of Root Node is "<<root->left_child->data<<endl;
    cout<<"Right Child of Root Node is "<<root->right_child->data<<endl;
    cout<<endl;
    root->left_child->left_child=newTreeNode(11);   //value to left child of the left child
    root->left_child->right_child=newTreeNode(12);  //value to right child of the left child
    cout<<"Left Child of Left Child is "<<root->left_child->left_child->data<<endl;
    cout<<"Right Child of Left Child is "<<root->left_child->right_child->data<<endl;
    cout<<endl;
    root->right_child->left_child=newTreeNode(21);  //value to left child of the right child
    root->right_child->right_child=newTreeNode(22); //value to right child of the right child
    cout<<"Left Child of Right Child is "<<root->right_child->left_child->data<<endl;
    cout<<"Right Child of Left Child is "<<root->right_child->right_child->data<<endl;
    return 0;
}
