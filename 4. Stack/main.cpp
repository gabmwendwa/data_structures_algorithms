#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;

//PUSH TO STACK
void push(int value)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow!"
             << " Sorry!" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

//POP FROM STACK
void pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow!"
             << " Sorry!" << endl;
    }
    else
    {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

//DISPLAY STACK ITEMS
void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "Stack is empty!" << endl;
    }
}

// MAIN

int main()
{
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop in stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value to be pushed: " << endl;
            cin >> val;
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Program exited" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

    } while (ch != 4);

    return 0;
}