#include <iostream>
using namespace std;

void input_usage(int daily_usage[], int day_count);
void display_usage(int daily_usage[], int day_count);
int total_usage(int daily_usage[], int day_count);
float average_usage(int daily_usage[], int day_count);
int highest_usage(int daily_usage[], int day_count);
int count_high_usage_days(int daily_usage[], int day_count);

int main()
{
    const int day_count = 7;
    int daily_usage[day_count];
    int menu_choice = 0;

    input_usage(daily_usage, day_count);

    while (menu_choice != 6) 
    {
        cout << "\n\n========== Electricity Usage Menu ==========";
        cout << "\n1. Display daily usage";
        cout << "\n2.Total weekly usage";
        cout << "\n3. Average daily usage";
        cout << "\n4. Highest usage";
        cout << "\n5. Count days above 10 units";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> menu_choice;

        switch (menu_choice)
        {
            case 1:
                display_usage(daily_usage, day_count);
                break;
            case 2:
                cout << "\nTotal weekly usage = " << total_usage(daily_usage, day_count);
                break;
            case 3:
                cout << "\nAverage daily usage = " << average_usage(daily_usage, day_count);
                break;
            case 4:
                cout << "\nHighest usage = " << highest_usage(daily_usage, day_count);
                break;
            case 5:
                cout << "\nDays above 10 units = " << count_high_usage_days(daily_usage, day_count);
                break;
            case 6:
                cout << "\nExiting... Goodbye!";
                break;
            default:
                cout << "\nInvalid choice. please enter 1 to 6.";
        }
    }
}

void input_usage(int daily_usage[], int day_count)
{
    cout << "Enter electricity usage for " << day_count << " days:\n";

    for (int index = 0; index < day_count; index++) 
    {
        cout << "Day " << (index + 1) << " usage (units): ";
        cin >> daily_usage[index];
    }
}

void display_usage(int daily_usage[], int day_count)
{
    cout << "\nDaily usage: ";

    for (int index = 0; index < day_count; index++) 
    {
        cout << daily_usage[index] << " ";
    }
}

int total_usage(int daily_usage[], int day_count)
{
    int total_units = 0;
    for (int index = 0; index < day_count; index++) 
    {
        total_units = +daily_usage[index];
    }
    return total_units;
}

float average_usage(int daily_usage[], int day_count)
{
    int total_units = total_usage(daily_usage, day_count);
    float average_units = (float)total_units / day_count;

    return average_units;
}

int highest_usage(int daily_usage[], int day_count)
{
    int highest_units = daily_usage[0];
    for (int index = 1; index < day_count; index++) 
    {
        if (daily_usage[index] > highest_units) 
        {
            highest_units = daily_usage[index];
        }
    }
    return highest_units;
}

int count_high_usage_days(int daily_usage[], int day_count)
{
    int high_usage_days = 0;

    for (int index = 0; index < day_count; index++) 
    {
        if (daily_usage[index] > 10) 
        {
            high_usage_days++;
        }
    }
    return high_usage_days;
}

