#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * CreateNode(int n)
{   
    struct node *temp , *head;
    int val;
    cin >> val;
    head = (struct node *)malloc(sizeof(struct node));
        if(!head)
            cout << " Memory Not Allocated to head" << endl;
    head->data = val;
    head->next = NULL;
    temp = head;

    for(int i = 2 ; i <= n ; i++)
    {
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));
            if(!NewNode)
                cout << "Memory Not Allocated to" << i << "th NewNode" << endl;
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

void Insertatend(struct node *head , int n)
{
    struct node *temp = head;
    struct node *tp;
    while(temp)
    {   
        tp = temp;
        temp = temp->next;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    tp->next = newnode;
    newnode->data = n;
    newnode->next = NULL;
}

void PrintList(struct node *head)
{
    struct node *temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}

int main()
{
    int n;
    cin >> n;
    struct node *head = CreateNode(n);
    Insertatend(head, 678);
    Insertatend(head, 900);
    PrintList(head);
    return 0;

}