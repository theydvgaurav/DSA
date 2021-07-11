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

Node * Intersection(Node * head1, Node *head2){
    unordered_map<int,int> mp;
    vector<int> v;
    Node *head = NULL;
    Node *temp = head1;
    while(temp){
        mp[temp->data] = 1;
        temp = temp->link;
    }
    temp = head2;
    while(temp){
        if(mp[temp->data]){
            v.push_back(temp->data);
        }
        temp = temp->link;
    }
    
    if(!v.empty())
    {   head = new Node(*v.begin());
      temp = head;
      
      for( int i = 1 ; i < v.size() ; i++){
        Node * New_Node = new Node(v[i]);
        temp->link = New_Node;
        temp = temp->link;
     }}
    
    return head;
     
}





void Remove(Node *head){
    Node *temp = head;
    Node *prev = NULL;
    while(temp->link){
        if(temp->data==temp->link->data){
            prev->link = temp->link;
        }
        else{
            prev = temp;
            
        }
        temp = temp->link;
    }
    
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
    int n1 , n2;
    cin >> n1 >> n2;
    Node *head1 = Create(n1);
    Node *head2 = Create(n2);
    Print(head1);
    Print(head2);
    Print(Intersection(head1 , head2));
    
    
    
    return 0;
}