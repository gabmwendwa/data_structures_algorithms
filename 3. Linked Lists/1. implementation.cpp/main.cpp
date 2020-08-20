#include <iostream>
#include <cstddef>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = new Node();
Node *current = new Node();

//INSERT LINK TO FIRST LOCATION
void insertLink(int data)
{
    // create link
    Node *link = (Node *)malloc(sizeof(Node));

    link->data = data;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;
}

//DISPLAY LIST
void displaylist()
{
    Node *display = head;
    cout << "\n[\n";

    //start from beginning
    while (display != NULL)
    {
        cout << "{";
        cout << display->data;
        cout << "},\n";
        display = display->next;
    }
    cout << "]\n";
}

int main()
{
    insertLink(10);
    insertLink(20);
    insertLink(30);
    insertLink(1);
    insertLink(40);
    insertLink(56);

    cout << "Original List: ";

    displaylist();

    return 0;
}
