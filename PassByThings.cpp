#include <iostream>

using namespace std;

void passByValue(int value);
void passByReference(int & reference);
void passByPointer(int * pointer);

int main()
{
    int x = 0;
    int *xptr = &x;
    cout << "x = " << x << endl;
    passByValue(x);
    cout << "x = " << x << endl;
    passByReference(x);
    cout << "x = " << x << endl;
    passByPointer(xptr);
    cout << "x = " << x << endl;
    cout << "pointers value = " << xptr << endl;
    return 0;
}

void passByValue(int value)
{
    value = 10;
    cout << "value = " << value << endl; 
}

void passByReference(int & reference)
{
    reference = 20;
    cout << "reference = " << reference << endl;
}

void passByPointer(int *pointer)
{
    *pointer = 30;
    cout << "pointer = " << *pointer << endl;
}