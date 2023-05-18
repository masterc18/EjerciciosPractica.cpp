#include <iostream>

using namespace std;

void ContarNumerosImpares()
{
    int a[100], i, cont = 100;

    for (i = 100; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            a[cont] = i;
            cont--;
        }
    }

    for (i = 100; i >= cont; i--)
    {
        cout << a[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    ContarNumerosImpares();
    return 0;
}
