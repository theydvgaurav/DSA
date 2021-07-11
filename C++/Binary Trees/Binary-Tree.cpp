#include <iostream>
using namespace std;

class Node{
    public :
        int data;
        Node *Left;
        Node *Right;
        
        Node(int n){
            data = n;
            Left = Right = NULL;
        }
};

//NLR
void preorder(Node *root){
    if(!root)
        return ;
    cout << root->data <<" " ;
    preorder(root->Left);
    preorder(root->Right);
}

//LNR
void inorder(Node *root){
    if(!root)
        return ;
    preorder(root->Left);
    cout << root->data <<" " ;
    preorder(root->Right);
    
}

//LRN
void postorder(Node *root){
    if(!root)
        return ;
    preorder(root->Left);
    preorder(root->Right);
    cout << root->data <<" " ;
    
    
}


int main() {
	Node *root = new Node(1);
	root->Left = new Node(2);
	root->Right = new Node(3);
	root->Left->Left = new Node(4);
	root->Left->Right = new Node(5);
	root->Right->Left = new Node(6);
	root->Right->Right = new Node(7);
	
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	
	return 0;
}
