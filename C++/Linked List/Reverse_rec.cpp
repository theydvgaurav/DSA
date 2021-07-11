#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *link;
};

struct node * Rev(struct node *head)
{
    if (head == NULL || head->link == NULL)
            return head;
 
        /* reverse the rest list and put 
          the first element at the end */
        struct node *rest = Rev(head->link);
        head->link->link = head;
 
        /* tricky step -- see the diagram */
        head->link = NULL;
 
        /* fix the head pointer */
        return rest;
    
}

struct node * Creation(int n)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    if(!head)
        cout << "Memory Not allocated to head" << endl;
    int x;
    cin >> x;
    head->data = x;
    head->link = NULL;
    struct node *temp = head;
    
    for(int i = 1 ; i < n ; i++ )
    {
        struct node *New_Node = (struct node *)malloc(sizeof(struct node));
        if(!New_Node)
            cout << "Memory not allocated to " << i+1 <<"th Node" << endl;
        int y; 
        cin >> y;
        New_Node->link = NULL;
        New_Node->data = y;
        temp->link = New_Node ; 
        temp = temp->link;

    }

    return head;
}

void Print_List(struct node *head)
{   
    while(head)
    {
        cout << head->data << endl;
        head = head->link;
    }
}



int main(){
    int n;
    cin >> n;
    Print_List(Rev(Creation(n)));
    return 0;
}