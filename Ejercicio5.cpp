#include <iostream>

using namespace std;

void Vocales()
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char frase[50];
    cout << "Dime una frase " << endl;
    cin >> frase;

    for (int j = 0; j < 50; j++)
    {

        switch (frase[j])
        {
        case 'a':
        case 'A':
            a++;
            break;
        case 'e':
        case 'E':
            e++;
            break;
        case 'i':
        case 'I':
            i++;
            break;
        case 'o':
        case 'O':
            o++;
            break;
        case 'u':
        case 'U':
            u++;
            break;
        default:
            break;
        }
    }
    cout << "la letra a aparece: " << a << endl;
    cout << "la letra e aparece: " << e << endl;
    cout << "la letra i aparece: " << i << endl;
    cout << "la letra o aparece: " << o << endl;
    cout << "la letra u aparece: " << u << endl;
}

int main(int argc, char const *argv[])
{
    Vocales();
    return 0;
}
