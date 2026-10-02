#include <iostream>
#include <string>
using namespace std;

void task1()
{
    string input;
    cout << "Task 1. Enter n: ";
    getline(cin, input);

    int number = stoi(input);
    int n_sum = number * (number + 1) / 2;

    cout << "Answer for task 1: " << n_sum << "!\n\n";
}

void task2()
{
    int a, b;
    cout << "Task 2. Enter two integers: ";
    cin >> a >> b;

    double average = (static_cast<double>(a) + b) / 2;

    cout << "Average: " << average << "\n\n";
}

void task3()
{
    double stipend, extraIncome, expenses;
    cout << "Task 3. Enter stipend, extra income, and expenses: ";
    cin >> stipend >> extraIncome >> expenses;

    double balance = stipend + extraIncome - expenses;

    cout << "Balance: " << balance << "\n";

    if (balance > 0)
    {
        cout << "surplus\n";
    }
    else if (balance == 0)
    {
        cout << "exactly 0\n";
    }
    else
    {
        cout << "deficit\n";
    }
}

int main()
{
    task1();
    task2();
    task3();
}
