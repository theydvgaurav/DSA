#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *link;

        Node(int x){
            data = x;
            link = NULL;
        }
};

Node * Del(Node *head , int x){

    

    Node *temp = head;

    

    while(temp)
    {
       
        if(temp->link->data == x)
            break;
        
         temp = temp->link;
    }

    if(head->data == x )
        head = head->link;
    
    temp->link = temp->link->link;
    

    return head;

}

void show(Node *head, int x){

    Node * temp = head;
    while(x--){
        cout << temp->data << " ";
        temp = temp->link;
    }

    cout <<"\n";

}

int main(){

    int x;
    cin >> x;

    Node * head  = new Node(9);
    head->link = new Node(8);
    head->link->link = new Node(7);
    head->link->link->link = new Node(6);
    head->link->link->link->link = new Node(5);
    head->link->link->link->link->link = head;

    show(head,5);
    show(Del(head,x),4);
    return 0;
}