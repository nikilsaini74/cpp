// finding middle elements in a linked list

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
int middle(node *head)
{
    // node* temp = head;
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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

int main()
{
    node *he = NULL;
    insertAtTail(he, 1);
    insertAtTail(he, 2);
    insertAtTail(he, 3);
    insertAtTail(he, 4);
    display(he);
    cout << "middle element is " << middle(he);
    return 0;
}