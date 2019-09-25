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
    void display(int k)
    {
        node *temp = new node;
        temp = head;
        int count = 0;
        while (temp)
        {
            cout << temp->data << "\n";
            temp = temp->next;
            count++;
        }
        int pos = count - k + 1;
        cout << pos << "\n";
        temp = head;
        int h = 1;
        while (temp)
        {
            if (h == pos)
            {
                cout << temp->data << "\n";
            }
            temp = temp->next;
            h++;
        }
    }
};

int main()
{
    list l;
    l.createnode(10);
    l.createnode(15);
    l.createnode(20);
    l.createnode(25);
    l.display(2);
    return 0;
}