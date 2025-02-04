#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
     node(int data){
        this ->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};
node * buildtree(node* root){
    int data; 
    cout<< "enter the data"<< " ";
    cin>>data;
    root = new node(data);
    if(data ==-1){
        return NULL;
    }
    cout << "enter the element for left in  :"<<data<<endl;
    root->left = buildtree(root->left);
       cout << "enter the element for right in  :"<<data<<endl;
    root->right = buildtree(root->right);
    
    return root;


}
void inorder(node* root){
    if(root==NULL) return;
    //left root right
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL) return;
    // root left right
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL) return;
    //left root right
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node * root = NULL;
    root = buildtree(root);
    inorder(root);
  



return 0 ;
}