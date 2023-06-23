#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor for making object of Node with values
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    { //?????????? why??????????

        int value = this->data;
        // to free memory
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "deleted data is " << value << endl;
    }
};




bool palindromeLL(Node* &head){
    Node* s=head;
    Node* f=head;
    while( f->next!=NULL && f->next->next!=NULL){
        s=s->next;
        f=f->next->next;
    }

    //reverse
    Node* prev=NULL;
    Node* curr=s->next;
    Node* fwd;
    while(curr!=NULL){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;

    }
    s->next=prev;
    s=s->next;
    Node* dummy=head;
    while(s!=NULL){
        if(dummy->data!=s->data)return false;
        dummy=dummy->next;
        s=s->next;
    }
    return true;

}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatHead(Node *&head, int data)
{
    // creating new node
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

void insertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertatPosition(Node *&head, int data, int position, Node *&tail)
{
    if (position == 1)
    {
        insertatHead(head, data);
        return;
    }
    // above code for inserting at starting position
    int count = 1;
    Node *temp = head;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *newadd = new Node(data);
    newadd->next = temp->next;
    temp->next = newadd;
    if (newadd->next == NULL)
    {
        tail = newadd;
    }
}

int main()
{

    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    insertatTail(tail, 254);
    print(head);

    insertatTail(tail, 2);
    // print(head);
    insertatTail(tail, 3);
    // print(head);
    insertatTail(tail, 3);
    insertatTail(tail, 2);
    insertatTail(tail, 22);
    insertatTail(tail, 1);
  
    print(head);
    cout<<"after palindrome "<<endl;

   palindromeLL(head);
   print(head);
   

    return 0;
}
