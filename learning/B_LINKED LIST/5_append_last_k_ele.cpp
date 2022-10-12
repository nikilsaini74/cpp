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

int main()
{
    
    
    return 0;
}