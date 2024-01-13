//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
    // if (head_ref == NULL || head_ref->next == NULL) {
    //     return head_ref;
    // }

    // Node *temp;
    // Node *i;
    // Node *j;

    // for (i = head_ref; i->next != NULL; i = i->next) {
    //     for (j = head_ref; j->next != NULL; j = j->next) {
    //         if (j->data > j->next->data) {
    //             temp = j->next;
    //             j->next = temp->next;
    //             temp->next = j;

    //             if (j == head_ref) {
    //                 head_ref = temp;
    //             } else {
    //                 Node *prev = head_ref;
    //                 while (prev->next != j) {
    //                     prev = prev->next;
    //                 }
    //                 prev->next = temp;
    //             }
    //         }
    //     }
    // }
    // return head_ref;
    
    
    Node* temp  = head_ref;
    vector <int> v;
    while (temp!=NULL) {
        v.emplace_back(temp-> data);
        temp =  temp->next;
    }
    sort(v.begin(),v.end());
    
    temp  = head_ref;
    for (int it : v) {
        temp -> data = it;
        temp = temp -> next;
    }
    return head_ref;
}

};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends