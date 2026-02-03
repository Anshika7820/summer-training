#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    Node(int val){
        data=val;
        next=NULL;
    } 
    
};


void insertAtEnd(Node* &head,int val){

    Node* node =new Node(val);

    if(head==NULL){
        head=node;
        return;
    }

    Node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=node;
}

void insertAtBegin(Node* &head,int val){
    
    Node* node=new Node(val);

    if(head==NULL){
        head=node;
        return;
    }

    node->next=head;
    head=node;

}
int main(){
    Node* head=NULL;
    insertAtEnd(head,1);
    return 0;
}
