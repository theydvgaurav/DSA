#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node *prev,*next;

        Node(int x, Node *t){
            prev = t;
            data = x;
            next = NULL;
        }
};


void show(Node *head){
    Node * temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

Node * Reverse(Node*head){
    Node *temp = head;
    Node *tmp;
    while(temp->next){
            tmp = temp->prev;
        temp->prev = temp->next;
        temp->next = tmp;
        temp = temp->prev;
    }
    temp->next = temp->prev;
    temp->prev = NULL;

    head = temp;
    return head;
}


int main(){

    Node *head = new Node(9,NULL);
    head->next = new Node(8,head);
    head->next->next = new Node(7,head->next);
    head->next->next->next = new Node(6,head->next->next);
    head->next->next->next->next = new Node(5,head->next->next->next);

    show(Reverse(head));

    return 0;
}