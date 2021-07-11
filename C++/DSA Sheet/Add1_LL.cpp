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
    string s = "";
    while(temp)
    {
        s += to_string(temp->data); 
        temp = temp->next;
    }
    cout << 1 + stoi(s) << endl;
}

int main()
{
	int n;
	cin >> n;
	
	struct node *head;
    head = CreateNode(n);
    PrintList(head);
	
	return 0;
}