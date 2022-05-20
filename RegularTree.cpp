#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* child1;              
    TreeNode* child2;                //Creating different children of the Root
    TreeNode* child3;
};
TreeNode* newTreeNode(int data){
    TreeNode* treenode=new TreeNode();        //allocating new memory for node
    treenode->data=data;
    treenode->child1=NULL;
    treenode->child2=NULL;
    treenode->child3=NULL;
    return(treenode);
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(1);
    root->child2=newTreeNode(2);
    root->child3=newTreeNode(3);
    cout<<"Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    return 0;
}


