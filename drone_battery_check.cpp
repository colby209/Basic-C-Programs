#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int battery[size];

    cout << "Battery Inputs: " << endl;
    for (int index = 0; index < size; index++) 
    {
        cin >> battery[index];
    }

    cout << "Battery: ";
    for (int index = 0; index < size; index++)
    {
        cout << battery[index] << " ";
    }
    cout << endl;

    int low_count = 0;
    for (int index = 0; index < size; index++) 
    {
        if (battery[index] < 20)
            low_count++;
    }
    cout << "Low readings (<20%): " << low_count << endl;
    return 0;

}

