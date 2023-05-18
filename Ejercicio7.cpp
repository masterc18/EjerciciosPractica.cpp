#include <iostream>
#include <algorithm>

using namespace std;

void MCDDosNumeros()
{
    int num1, num2, a, b, res;
    cout << "Dime el primer numero " << endl;
    cin >> num1;
    cout << "Dime el otro numero " << endl;
    cin >> num2;

    a = max(num1, num2);
    b = min(num1, num2);

    do
    {
        res = b;
        b = a % b;
        a = res;
    } while (b != 0);
    cout << "El MCD de " << num1 << " y " << num2 << " es " << res;
}

int main(int argc, char const *argv[])
{
    MCDDosNumeros();
    return 0;
}
