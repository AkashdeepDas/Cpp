#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        
        Node(int data)
        {
            this->data=data;
            this->next=nullptr;
        }
};

class LinkedList
{
    public:
        Node *head;
        Node *tail;
        
        LinkedList()
        {
            this->head=nullptr;
            this->tail=nullptr;
        }
        void insert(int data)
        {
            Node *node=new Node(data);
            if(this->head==nullptr)
            {
                this->head=this->tail=node;
            }
            else
            {
                this->tail->next=node;
                this->tail=this->tail->next;
            }
        }
        void display()
        {
            Node *temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
};

int main()
{
    LinkedList *L1= new LinkedList();
    
    L1->insert(12);
    L1->insert(5);
    L1->insert(2);
    L1->insert(16);
    
    L1->display();
    
    return 0;
    
}
