// inserting at head and tail and deletion in circular linked list

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void deleteAtHead(node *&head)
{
    node *todelete = head;
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;

    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    n->next = head;
    temp->next = n;
    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    display(head);
    deletion(head, 1);
    display(head);

    return 0;
}