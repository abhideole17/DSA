#include<iostream>
using namespace std;
class node{
    public:
int data;
node* left;
node* right;
};
node* newNode(int data){
    node* new_node=new node();
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}


int main(){
    
    return 0;
}