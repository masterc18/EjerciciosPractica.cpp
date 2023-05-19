#include <iostream>

using namespace std;

void TablaMultiplicar(){
    int num;
    cout << "Dime el numero del que quieres saber la tabla " << endl;
    cin >> num;

    for(int i=1; i <=12; i++){
        cout << num << " * " << i << " = " << num*i << endl;
    }
}

int main(int argc, char const *argv[])
{
    TablaMultiplicar();
    return 0;
}
