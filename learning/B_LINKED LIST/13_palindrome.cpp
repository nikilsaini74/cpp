// to check linked list is palindrome or not

#include <iostream>
using namespace std;
class node
{
public:
    char data;
    node *next;

    node(char val) // constructor
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, char val)
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
node *middle(node *head)
{
    // node* temp = head;
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
bool palindrome(node *&head)
{
    if (head == NULL)
        return true;

    node *mid = middle(head);
    node *last = recursiveReverse(mid->next);
    node *curr = head;
    while (last != NULL)
    {
        if (last->data != curr->data)
            return false;
        last = last->next;
        curr = curr->next;
    }
    return true;
}

int main()
{
    node *he = NULL;
    insertAtTail(he, 'A');
    insertAtTail(he, 'B');
    insertAtTail(he, 'B');
    insertAtTail(he, 'A');
    // insertAtTail(he, 'A');
    display(he);
    cout << palindrome(he);
    return 0;
}