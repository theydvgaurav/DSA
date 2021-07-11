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
    

	cout << "Linked List Created Sucessfully" << endl; // 
    return head;

}

void Createloop(struct node *head)
{
    struct node *temp = head;
    while( temp->next)
    {   
        temp = temp->next;
    }
    temp->next = head;
}


int detectloop(struct node *head)
{   
    int t = 0;
    struct node *slow , *fast ;
    slow = head;
    fast = head;
    while(slow && fast && fast->next)
    {      
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout << "Loop Exist";
            t=1;
            break;
        }
    
    }

    return t;
}

int main()
{
	int n;
	cin >> n;
	
	struct node *head;
    head = CreateNode(n);
    Createloop(head);
	int x = detectloop(head);
    if(!x)
        cout << "No Loop";
        
	return 0;
}
