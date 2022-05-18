#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
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
void BreadthFirstTraversal(TreeNode* root){       //Function for BFS
    queue<TreeNode*> q;
    TreeNode* temp_tree_node=root;
    while(temp_tree_node){
        cout<<temp_tree_node->data<<" ";
        if(temp_tree_node->left_child){
            q.push(temp_tree_node->left_child);
        }
        if(temp_tree_node->right_child){
            q.push(temp_tree_node->right_child);
        }
        temp_tree_node=q.front();
        q.pop();
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->left_child=newTreeNode(1);
    root->right_child=newTreeNode(2);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"The Left Child is "<<root->left_child->data<<endl;
    cout<<"The Right Child is "<<root->right_child->data<<endl;
    cout<<endl;
    root->left_child->left_child=newTreeNode(11);
    root->left_child->right_child=newTreeNode(12);
    cout<<"Left Child of Left Child is "<<root->left_child->left_child->data<<endl;
    cout<<"Right Child of Left Child is "<<root->left_child->right_child->data<<endl;
    cout<<endl;
    root->right_child->left_child=newTreeNode(21);
    root->right_child->right_child=newTreeNode(22);
    cout<<"Left Child of Right Child is "<<root->right_child->left_child->data<<endl;
    cout<<"Right Child of Right Child is "<<root->right_child->right_child->data<<endl;
    cout<<endl;
    cout<<"The Breadth First Traversal of the Tree is"<<endl;
    BreadthFirstTraversal(root);
    return 0;
}
