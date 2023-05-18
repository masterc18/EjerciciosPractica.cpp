#include <iostream>

using namespace std;

void CalcularFactorial()
{
    long num;
    long factorial;

    factorial = 1;

    cout << "Dime un numero " << endl;
    cin >> num;

    for (long i = 1; i < num; i++)
    {
        factorial = factorial * i;
    }
    cout << factorial;
}

int main(int argc, char const *argv[])
{
    CalcularFactorial();
    return 0;
}

