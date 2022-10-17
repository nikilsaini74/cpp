// to rotate a linked list
// Input: linked list = 10->20->30->40->50->60, k = 4
// Output: 50->60->10->20->30->40.

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
node *rotate(node *&head, int k)
{
    int count = 1;
    node *temp = head;
    node *newTail;
    node *newHead;
    while (temp->next != NULL)
    {
        if (count == k)
            newTail = temp;
        if (count == k + 1)
            newHead = temp;

        count++;
        temp = temp->next;
    }
    temp->next = head;
    newTail->next = NULL;
    return newHead;
}
int main()
{
    node *he = NULL;
    insertAtTail(he, 1);
    insertAtTail(he, 2);
    insertAtTail(he, 3);
    insertAtTail(he, 4);
    insertAtTail(he, 5);
    display(he);
    rotate(he, 3);
    node *newhead = rotate(he, 3);
    display(newhead);

    return 0;
}