#include <bits/stdc++.h>
using namespace std;


struct node{ 
	int  data;
 	struct node *next;
	};


int CreateNode(int n)
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

}

int main()
{
	int n;
	cin >> n;
	
	CreateNode(n);
	
	return 0;
}