#include <iostream>

using namespace std;

void SumarDigitosNumero()
{
    int n, x = 0;
    cout << "Dime el numero " << endl;
    cin >> n;
    while (n > 0)
    {
        x = x + n % 10;
        n = n / 10;
    }

    cout << "La suma de los digitos del numero es " << x << endl;
}

int main(int argc, char const *argv[])
{
    SumarDigitosNumero();
    return 0;
}
