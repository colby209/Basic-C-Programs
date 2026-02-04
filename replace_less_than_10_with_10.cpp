#include <iostream>
using namespace std;

void print_array(int numbers[], int size);

int main()
{
    const int size = 5;
    int numbers[size] = { 5,12,8,20,3 };

    print_array(numbers, size);

    return 0;
}

void print_array(int numbers[], int size)
{
    for (int index = 0; index < size; index++) 
    {
        if (numbers[index] < 10) 
        {
            numbers[index] = 10;
        }
        cout << numbers[index] << " ";
    }
}
