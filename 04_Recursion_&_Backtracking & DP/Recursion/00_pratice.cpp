#include <iostream>
#include <map>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void reclist(Node *head)
{
    // basea case
    if (head == NULL)
        return;

    cout << head->data << " ";

    reclist(head->next);
}
int getlength(Node *head)

{
    int len;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void knode(Node *head, int &k)
{
    // base case

    if (head == NULL)
        return;

    int target = getlength(head) - k;
}

void fromlast(Node *head, int &k)
{
    // base case
    if (head == NULL)
        return;

    // R.c

    fromlast(head->next, k);

    k--;

    if (k == 0)
        cout << head->data << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *root = new Node(5);
    head = tail = root;

    insertAtTail(tail, 4);
    insertAtTail(tail, 1);
    insertAtTail(tail, 3);
    insertAtTail(tail, 2);

    cout << endl;
    reclist(head);
    int k = 2;
    cout<<"The last k node is "
    fromlast(head, k);
}