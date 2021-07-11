#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * CreateNode(int n){
    struct node *temp , *head;
    int val;
    head = (struct node *)malloc(sizeof(struct node));
        if(!head)
            cout << "Memory Not Allocated to head pointer" << endl;

    temp = head;
    cin >> val;
    head->data = val;
    head->next = NULL;

    for( int i = 2 ; i <=n ; i++)
    {
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));
            if(!NewNode)
                cout << "Memory Not Allocated to" << i << "th New Node" << endl;
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

void PrintList(struct node *head){
    struct node *temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

struct node * InsertatBeg(struct node *head , int val)
{
    struct node *newhead = (struct node *)malloc(sizeof(struct node));
        if(!newhead)
            cout << "Memory not Allocatde to Newhead Pointer" << endl;
    newhead->data = val;
    newhead->next = head;

    return newhead;

 }

 int main()
 {  
    int n;
    cin >> n;
    struct node *head = InsertatBeg(CreateNode(n),56);
    PrintList(head);

    return 0;
 }
