#include <iostream>

using namespace std;

void Palíndromo(){
    int i=0,j=0;
    string palabra=" ";
    cout<<"ingrese palabra "<<endl;
    cin >> palabra;
    for(i=0;i<palabra.length();i++){
        for(j=palabra.length()-1;j>=0;j--){
            if(palabra[i]==palabra[j]){
                cout<<"es palindroma "<<endl;
            }
            else{
                cout<<"no lo es "<<endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Palíndromo();
    return 0;
}
