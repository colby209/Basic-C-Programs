#include <iostream>
using namespace std;

void print_array(int number[], int size, int user_input);

int main()
{
    const int size = 5;
    int numbers[size] = { 4,7,9,12,15 };

    int user_input;

    cout << "Enter the number: ";
    cin >> user_input;

    print_array(numbers, size, user_input);
    return 0;
}

void print_array(int number[], int size, int user_input)
{
    bool found = false;

    for (int index = 0; index < size; index++) 
    {
        if (number[index] == user_input) 
        {
            found = true;
            break;
        }
    }
    if (found) 
    {
        cout << "Found" << endl;
    }
    else 
    {
        cout << "Not Found" << endl;
    }
}
