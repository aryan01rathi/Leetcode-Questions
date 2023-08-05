#include <bits\stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;
    node(int val)
    {
        val = val;
        next = NULL;
    }

};

int getDecimalValue(node *head)
{
    int i = 0;
    int value, sum = 0;
    while (head != NULL)
    {
        value = head->val;
        sum = sum + (value * (2 ^ i));
        i++;
        head = head->next;
    }
    return sum;
}
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void insertattail(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

int counttotal(ListNode *head)
{
    int i = 0;
    while (head->next != NULL)
    {
        i++;
        // cout<<i<<endl;
        head = head->next;
    }
    return i;
}
ListNode *middleNode(ListNode *head)
{
    int i = counttotal(head);
    if (i % 2 == 0)
    {
        int mid = (i / 2) + 1;
        while (i != mid)
        {
            head = head->next;
            i++;
        }
        else
        {
            int mid = i / 2;
            while (i != mid)
            {
                head = head->next;
                i++;
            }
        }
        return head->val;
    }
}

void display(ListNode *head)
{

    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
 bool hasCycle(node* head)
	{
		if(head == NULL) return false;
		node* p = head;
		node* q = head;
		while(true)
		{
			p = p->next;
			q = q->next;
			if(q!= NULL) q = q->next;
			if(q == NULL || p ==NULL) return false;
			else if(p == q) return true;
		}
	}
int main()

{


    ListNode *head = NULL;
    insertattail(head, 1);
    // // insertattail(head,0);
    // // insertattail(head,1);
    // display(head);
    // //getDecimalValue(head);
}
 