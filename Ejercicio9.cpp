#include <iostream>

using namespace std;

void NumeroPerfecto()
{
    int num;
    int div = 0;

    cout << "Dime un numero para determinar si es perfecto o no " << endl;
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            div += i;
    }
    if (num == div)
    {
        cout << "El numero es perfecto " << endl;
    }
    else
    {
        cout << "El numero no es perfecto " << endl;
    }
}

int main(int argc, char const *argv[])
{
    NumeroPerfecto();

    
    return 0;
}

    