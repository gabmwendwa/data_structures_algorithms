#include <iostream>
using namespace std;

void traverse()
{
    cout << "----------- TRAVERSE FUNCTION -----------\n\n";
    int a[] = {8, 6, 7, 9, 4};
    int count = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < count; i++)
    {
        cout << a[i];
        cout << "\n";
    }
    cout << "----------- TRAVERSE FUNCTION -----------\n\n";
}

void insertion()
{
    cout << "----------- INSERTION FUNCTION -----------\n\n";
    int a[] = {8, 6, 7, 9, 4};
    int count = sizeof(a) / sizeof(a[0]);
    int last = count;
    a[last] = 5;
    count += 1;
    for (int i = 0; i < count; i++)
    {
        cout << a[i];
        cout << "\n";
    }
    cout << "----------- INSERTION FUNCTION -----------\n\n";
}

void update()
{
    cout << "----------- UPDATE FUNCTION -----------\n\n";
    int a[] = {8, 6, 7, 9, 4};
    int count = sizeof(a) / sizeof(a[0]);
    a[3] = 11;
    for (int i = 0; i < count; i++)
    {
        cout << a[i];
        cout << "\n";
    }
    cout << "----------- UPDATE FUNCTION -----------\n\n";
}

void searching()
{
    cout << "----------- SEARCHING FUNCTION -----------\n\n";
    int a[] = {8, 6, 7, 9, 4};
    int count = sizeof(a) / sizeof(a[0]);
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (a[i] == 7)
        {
            found = true;
            break;
        }
    }
    string ans = (found) ? "Value found\n" : "Value not found\n";
    cout << ans + "\n";
    cout << "----------- SEARCHING FUNCTION -----------\n\n";
}

main()
{
    traverse();
    insertion();
    update();
    searching();
}
