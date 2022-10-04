// to reverse a linked list iteratively and recursively.
// to reverse k nodes by iteratively till k and then recursively.

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val) // constructor
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
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
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *reverse(node *&head) // iteratively
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr; // newhead = prevptr, currptr = NULL
}

node *recursiveReverse(node *&head) // recursively
{
    if (head == NULL || head->next == NULL) // base case
        return head;

    node *newhead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node *reverse_k(node *&head, int k) // k node
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverse_k(nextptr, k);
    }
    return prevptr;
}

int main()
{
    node *he = NULL;
    insertAtTail(he, 1);
    insertAtTail(he, 2);
    insertAtTail(he, 3);
    insertAtTail(he, 4);
    display(he);

    // node *newhead = reverse(he);
    // display(newhead);

    // node *newhead = recursiveReverse(he);
    // display(newhead);

    int k = 2;
    node *newhead = reverse_k(he, k);
    display(newhead);

    return 0;
}