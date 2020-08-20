#include <iostream>
using namespace std;

int queue[5], top = 5, n = 0, m = 0;

//ENQUEUE
void enqueue(int value)
{
    if (top <= n)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        queue[n] = value;
        n++;
    }
}

//DEQUEUE
void dequeue()
{
    if (n <= 0)
    {
        cout << "Queue Underflow" << endl;
    }
    else if (m != n)
    {
        cout << "Dequeued element is " << queue[m] << endl;
        m++;
    }
}

//DISPLAY
void display()
{
    if (n >= 0)
    {
        cout << "Queue elements: ";
        for (int i = m; i < n; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "Queue is empty!" << endl;
    }
}

//MAIN
int main()
{
    int ch, val;
    cout << "1) Enqueue element" << endl;
    cout << "2) Dequeue element" << endl;
    cout << "3) Display queue" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "What would you like to do? ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Program exited" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (ch != 4);

    return 0;
}