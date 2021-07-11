#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
        int data;
        Node *link;
        Node(int n){
            data = n;
            link = NULL;
        }
};

Node * Create(int n){
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *temp = head;
    for(int i= 0 ; i < n-1 ; i++){
        int x;
        cin >> x;
        Node * New_Node = new Node(x);
        temp->link = New_Node;
        temp = temp->link;
    }
    return head;
}

void Print(Node *head){
    Node *temp = head;
    while(temp){
        cout << temp->data  << " " ;
        temp = temp->link;
    }
     cout << endl; 
}

void Remove(Node *head){
    
    
}

void Un_Remove(Node *head){
    unordered_map<int,int> mp;
    Node *temp = head;
    Node *prev = NULL;
    while(temp){
        if(!mp[temp->data]){
            mp[temp->data]++;
            prev = temp; // agar nxt node present nhi hai tbhi otherwise linked list phle jaisi ho jayegi
        }
        else
        {prev->link = temp->link;}    
    temp = temp->link;
    }
    
    
}

int main(){
    int n;
    cin >> n;
    Node *head = Create(n);
    Print(head);
    Un_Remove(head);
    Print(head);
    
    return 0;
}