#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor used in this case
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);

    tail->next = temp;
    // tail = tail->next;
    tail = temp;
}

void insetatindex(node *&head, int index, int d)
{
    node *temp = head;
    int cnt = 1; 
    while (cnt < index -1)
    {
        temp =  temp -> next;
        cnt++;
    }
    //createing a node for d 
    node * nodetoinsert =  new node(d);
    
    nodetoinsert ->next =   temp -> next;
    temp ->next =  nodetoinsert;


    
}
void printlist(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(10);

    node *head = node1;
    node *tail = node1;
    printlist(head);
    insertathead(head, 45);
    printlist(head);
    insertathead(head, 20);
    printlist(head);

    insertattail(tail, 65);
    printlist(head);

    insetatindex(head,2, 90);
    printlist(head);
     

    cout << endl;
    return 0;
}