#include <bits/stdc++.h>
using namespace std;


struct node{ 
	int  data;
 	struct node *next;
	};


struct node * CreateNode(int n)
{	
	struct node *temp , *head ;
	int val;
	cin >> val;
	head = (struct node *)malloc(sizeof(struct node));
		if(head == NULL)
				cout << "Memory Not Allocated to head" << endl;
	temp = head ;
	head->data = val;
	head->next = NULL;

	for( int i = 2 ; i <= n ; i++)
	{	
		struct node *NewNode;
		NewNode = (struct node *)malloc(sizeof(struct node));
			if(NewNode == NULL)
				cout << "Memory Not Allocated to NewNode" << endl;
		int val;
		cin >> val;
		NewNode->data = val;
		NewNode->next = NULL;
		temp->next = NewNode;
		temp = temp->next;
	}

	cout << "Linked List Created Sucessfully" << endl;
    return head;

}

void PrintList( struct node * head)
{
    struct node *temp = head;
    while(temp)
    {
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void Del_key(struct node *head,  int n){
    struct node *temp = head;
    struct node *prev =(struct node *)malloc(sizeof(struct node));
    prev->next = head;
    while(temp->data!=n)
    {  
        prev = temp;
        temp = temp->next;
    }
     
    prev->next=temp->next;
     
    if(temp==head) // to check whether the while loop is executed or not if not 
    {              //then we need to do head = head->next i.e just shifting the head 
        head = prev->next;
    }

    temp = head;
    while(temp)
    {
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;

}

int main()
{
	int n;
	cin >> n;
	
	struct node *head = CreateNode(n);
    PrintList(head);
    Del_key(head,9);
	
	return 0;
}