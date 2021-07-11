#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * Createnode(int n)
{
    int val;
    cin >> val;
    struct node *temp , *head;
    head = (struct node *)malloc(sizeof(struct node));
        if(!head)
            cout << "Memory Not Allocated to head" << endl;
    
    temp = head;
    head->data = val;
    head->next = NULL;

    for( int i = 2 ; i <= n ; i++)
    {
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));
        int val;
        cin >> val;
        NewNode->data = val;
        NewNode->next = NULL;
        temp->next = NewNode;
        temp = temp->next; 

    }
    
    cout << "Linked List Created Successfully" << endl;
    return head;
}

void PrintList( struct node *head)
{
    struct node *temp = head;
    while(temp)
    {
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void GetNode(struct node *head , int n){
    struct node *temp = head;
    int count = 0;
    while(temp)
    {   
        count++;
        temp = temp->next;
    }
    
    if(n <= count)
    {   temp = head;
        int i = 1;

        while(i < count-n+1)
        {   
            i++;
            temp = temp->next;
        }

        cout << "Value at the Node " << i << " is : " << temp->data << endl;

    }
    else 
        cout << "Node doesn't exist" << endl;
}

int main(){
    int n , key;
    cin >> n >> key;
    struct node *head = Createnode(n);
    PrintList(head);
    GetNode(head , key);
    return 0;
}