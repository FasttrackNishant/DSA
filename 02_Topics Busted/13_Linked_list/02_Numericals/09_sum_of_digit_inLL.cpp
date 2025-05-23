
class Solution
{
private:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct Node *head, struct Node *&tail, int value)
    {
        Node *temp = new Node(val);
        // empty list
        if (head == NULL)
        {

            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    struct Node *add(struct Node *first, struct Node *second)
    {
        Node *anshead = NULL;
        Node *anstail = NULL;

        int carry = 0;
        while (first != NULL && second != NULL)
        {
            int sum = carry + first->data + second->data;
            int digit = sum % 10;

            // create node and add in ansere linked list
            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
            first = first->next;
            second = second->next;
        }

        while (first != NULL)
        {
            int sum = carry + first->data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            first = first->next;
        }
        while (second != NULL)
        {
            int sum = carry + second->data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            second = second->next;
        }

        // do no list same lenght ki thi but lastmein carry bach gaya
        while (carry != 0)
        {
            int sum = carry;
            int digit = sum % 10;
            insertAtTail(ansHead, ans Tail, digit);
            carry = sum / 10;
        }

        return anshead;
    }

public:
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // step 1  - reverse the input ll
        first = reverse(first);
        second = reverse(second);

        // step 2 - add two linked list

        Node *ans = add(first, second);

        // step 3 ans ko reverese karo

        ans = reverse(ans);

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n;
        Node *first = buildList(n);

        cin >> m;
        Node *second = buildList(m);
        Solution ob;
        Node *res = ob.addTwoLists(first, second);
        printList(res);
    }
    return 0;
}
