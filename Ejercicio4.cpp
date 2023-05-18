#include <iostream>

using namespace std;

void NumeroPrimo()
{
    int num;
    cout << "Dime un numero " << endl;
    cin >> num;
    if (num % num == 0)
    {
        cout << "El numero es primo " << endl;
    }
    else
    {
        cout << "No es numero primo " << endl;
    }
}

int main()
{
    NumeroPrimo();
    return 0;
}
