#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    //costructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* & head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
    return ;
}
void insertAtTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,int position,int data)
{
    Node* temp=head;
    if(position==1)
    {
        insertAtHead(head,data);
    }
    else
    {
        int cnt=1;
        while(cnt<position-1)
        {
            temp=temp->next;
            cnt++;
        }
        Node *t=new Node(data);
        t->next=temp->next;
        temp->next=t;
    }
    return ;
}
void print(Node * &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"head is : "<<head->data<<endl;
    return ;
}
int main()
{
    Node* node1=new Node(10);
    Node * head=node1;
    Node * tail=node1;
    insertAtHead(head,20);
    insertAtTail(tail,20);
    insertAtTail(tail,40);
    insertAtPosition(head,5,120);
    print(head);
    cout<<"tail is : "<<tail->data<<endl;
    return 0;
}