#include <iostream>

using namespace std;

void SumaNumerosPares()
{
    int suma = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            suma += i;
    }
    cout << "La suma de los numeros es pares desde 1 a 100 es " << suma << endl;
}

int main(int argc, char const *argv[])
{
    SumaNumerosPares();
    return 0;
}
