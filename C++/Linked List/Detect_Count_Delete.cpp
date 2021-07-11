#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node * Create_Node(int n)
{
    struct node *head =(struct node *)malloc(sizeof(struct node));
    int x;
    cin >> x;
    struct node *temp = head;
    head->data = x;
    head->link = NULL;
    for(int i = 1; i <n ; i++)
    {
        struct node *New_Node =(struct node *)malloc(sizeof(struct node));
        int x;
        cin >> x;
        New_Node->data = x;
        New_Node->link = NULL;
        temp->link = New_Node;
        temp = temp->link;
        
    }
    cout << "Linked List Created Successfully\n";
    return head;
}

void print(struct node *head)
{
    struct node *temp  = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->link;
        
    }
    
    cout << endl;
}

void CreateLoop(struct node *head)
{
    struct node *x= head->link;
    struct node *prev;
    struct node *temp = head;
    while(temp)
    {   
        prev = temp;
        temp = temp->link;
    }
    prev->link = x;
}

void detect_count_delete_loop(struct node *head)
{
    struct node *slow = head, *fast = head, *prev=NULL;
    while(slow && fast && fast->link)
    {   prev = slow;
        slow = slow->link;
        fast = fast->link->link;
        if(fast==slow)
        {
            cout << "Loop Exists" << endl;
            break;
        }
    }
    
    int count = 1;
    slow = slow->link;
    fast = fast->link->link;
    while(slow!=fast)
    {
        slow = slow->link;
        fast = fast->link->link;
        count++;
    }
    cout << "Loop Length : " << count << endl;
    slow->link = NULL;

    
    
}

int main()
{   
    int n;
    cin >> n;
    struct node *head = Create_Node(n);
    print(head);
    CreateLoop(head);
    detect_count_delete_loop(head);
    print(head);
    return 0;
}