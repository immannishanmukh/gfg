//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function

   // Function to reverse the LL recursively
    Node* reverseLL(Node*head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        Node* newHead = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    void sort(Node **head)
    {
         // Code here
        
        Node* inc = *head , *dec = inc->next, *prev = NULL;
        if(inc == NULL || dec == NULL){
            return ;
        }
        
        Node* temp1 = inc, *temp2 = dec;
        
        while(temp1!=NULL && temp2!=NULL){
            temp1->next = temp2->next;
            prev = temp1;
            temp1 = temp1->next;
            if(temp1 == NULL){
                break;
            }
            temp2->next = temp1->next;
            temp2 = temp2->next;
        }
        
        dec = reverseLL(dec);
        
        while(prev->next!=NULL){
            prev = prev->next;
        }
        prev->next = dec;
        return;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends