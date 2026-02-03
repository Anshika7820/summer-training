#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node *&head, int val)
{

    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = node;
}

void insertAtBegin(Node *&head, int val)
{

    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        return;
    }

    node->next = head;
    head = node;
}

void insertAtPosition(Node *&head, int val, int n){

    Node* node=new Node(val);

    if(n == 1){
        node->next=head;
        head=node;
        return ;
    }

    Node* temp=head;

    for(int i=1;i<n-1 && temp!=NULL; i++){
        temp=temp->next;
    }

    if(temp==NULL){
        return;
    }

    node->next=temp->next;
    temp->next=node;

}

void printLinkedList(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    insertAtEnd(head, 1);

    insertAtEnd(head, 9);

    insertAtBegin(head, 4);

    insertAtEnd(head, 3);

    insertAtEnd(head, 6);

    insertAtEnd(head, 4);

    insertAtEnd(head, 0);

    insertAtEnd(head, 5);

    printLinkedList(head);
     
    cout << endl;

    insertAtPosition(head,8,7);

    printLinkedList(head);

    return 0;
}
