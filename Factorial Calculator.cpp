#include <iostream>
using namespace std;

int calculateFactorial (int);


int main()
{
    int pos_int;
    
    cout << "Enter a positive integer: " << endl;
    cin >> pos_int;
    while (pos_int < 0)
    {
        cout << "Error. It is impossible to calculate factorial with a negative number." << endl;
        cin >> pos_int;
    }
    cout << "The factorial of " << pos_int << " is " << calculateFactorial(pos_int) << "." << endl;
    return 0;
}

int calculateFactorial(int pos_int)
{
    long int factorial = 1;
    
    if (pos_int > 1)
    {
        for (int i = 1; i <= pos_int; i++)
        {
            factorial *= i;
        }
        
    }
    else
    {
        return 1;
    }
    return factorial;
}

