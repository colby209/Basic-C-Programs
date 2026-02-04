#include <iostream>
using namespace std;

void print_array(int marks[], int size);

int main()
{
    const int size = 5;
    int marks[size] = { 10,15,20,25,30 };

    print_array(marks, size);

    return 0;
}

void print_array(int marks[], int size)
{
    for (int index = 0; index < size; index++) 
    {
        if (marks[index] % 2 == 0) 
        {
            cout << marks[index] << " ";
        }
    }
}
