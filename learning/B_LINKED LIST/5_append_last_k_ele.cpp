// Append last k nodes...last k elements ko starting me lana

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
    cout << "NULL";
}

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node *kappend(node *&head, int k)
{
    node *newhead;
    node *newtail;
    node *temp = head;

    int l = length(head);
    int count = 1;
    k = k % l;
    while (temp->next != NULL)
    {
        if (count == l - k)
            newtail = temp;
        if (count == l - k + 1)
            newhead = temp;
        temp = temp->next;
        count++;
    }
    newtail->next = NULL;
    temp->next = head;
    return newhead;
}

int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
        insertAtTail(head, arr[i]);
    display(head);
    cout << endl;
    node *newhead = kappend(head, 4);
    display(newhead);

    return 0;
}