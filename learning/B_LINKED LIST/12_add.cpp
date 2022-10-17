// Input:
// List1: 5->6->3 // represents number 563
// List2: 8->4->2 // represents number 842
// Output:
// Resultant list: 1->4->0->5 // represents number 1405
// Explanation: 563 + 842 = 1405

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

int number(node *head)
{
    node *temp = head;
    int sum = 0;
    while (temp != NULL)
    {
        sum = (sum * 10) + temp->data;
        temp = temp->next;
    }
    return sum;
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
    int num1 = number(he);
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    int num2 = number(head);
    cout << num1 << " + " << num2 << " = " << num1 + num2;

    return 0;
}