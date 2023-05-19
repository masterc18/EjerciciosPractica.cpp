#include <iostream>

using namespace std;

void NumeroAmstrom(){
    int num, check, sum, rem;
  
  sum = 0;
   
   cout<<"Ingrese un numero positivo: "<<endl;
   cin>>num;
   check = num;
   
   while(check != 0){
       rem = check % 10;
       sum = sum + (rem*rem*rem);
       check = check / 10;
   }
   
   if(sum == num){
       cout<<num<<" es un número Armstrong"<<endl;
   }else{
       cout<<num<<" no es un número Armstrong"<<endl;
   }
}