#include <iostream>

using namespace std;

void SumarDigitosPares(){
    int num, n=0;
    cout << "Ingrese el numero " << endl;
    cin >> num ;

    while(num>0){
        if((num % 10) % 2 == 0){
            n += num % 10;
        }

        num = num / 10;
    }

    cout << n << endl;

}

int main(int argc, char const *argv[])
{
    SumarDigitosPares();
    return 0;
}
