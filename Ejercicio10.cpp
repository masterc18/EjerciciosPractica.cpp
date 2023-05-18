#include <iostream>

using namespace std;

void PrimerosNumerosPrimos()
{
    int i,j,primo;

i=1; //Inicializacion de la variable i en 1

while(i<=100){ //Mientras i sea menor o igual a 100

 primo=0; //Inicializacion de primo en 0

 j=1; //Inicializacion de la variable i en 1

 while(j<=i){ //Mientras j sea menor o igual a i

  if(i%j==0){ //Si el residuo o resto de i y j es cero Entonces

   primo=primo+1; //Almancena en la variable primo

  }

  j=j+1;//Incremento de j de 1 en 1

 }

 if(primo==2){ //Si el número tiene dos divisiones exactas, Entonces

  cout<<i<<endl; //Es primo

 }

 

 i=i+1; //Incremento de i de 1 en 1

}
    
}

int main(int argc, char const *argv[])
{
    PrimerosNumerosPrimos();
    return 0;
}

    

