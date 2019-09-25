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
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void deletenode(int x)
    {
        node *prev = new node;
        node *temp = new node;
        prev = head;
        prev->next = temp;
        while (prev)
        {
            if (prev->data == x)
            {
                prev->next = temp->next;
                free(temp);
            }
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
    l.createnode(15);
    l.createnode(25);
    l.createnode(35);
    l.createnode(45);
    l.deletenode(25);
    l.display();
    return 0;
}