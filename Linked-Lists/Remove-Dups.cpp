#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class list
{
private:
    node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void createnode(int x)
    {
        node *temp = new node;
        temp->data = x;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void removeDuplicates(int x)
    {
        node *temp = new node;
        temp = head;
        int count = 0;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->data == x)
            {
                found = true;
                count ++;
            }
            temp = temp->next;
        }
        if (found)
        {
            cout << "found the duplicate"
                 << "\n";
        }
    }

    void display()
    {
        node *temp = new node;
        temp = head;
        while (temp)
        {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }
};

int main()
{
    list l;
    l.createnode(5);
    l.createnode(10);
    l.createnode(15);
    l.createnode(5);
    l.removeDuplicates(15);
    l.display();
    return 0;
}