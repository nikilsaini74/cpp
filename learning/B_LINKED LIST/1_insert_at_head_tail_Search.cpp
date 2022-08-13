// To insert at head and tail in a linked list and search an element

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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;
    head = n;
}

bool search(node *head, int key)
{
    node *temp = head;
    // int i = 1;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            //    cout << i;
            return true;
        }
        temp = temp->next;
        // i++;
    }
    return false;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    node *he = NULL;
    insertAtTail(he, 1);
    insertAtTail(he, 2);
    insertAtTail(he, 3);
    insertAtHead(he, 4);
    display(he);
    cout << endl;
    cout << search(he, 3);

    return 0;
}