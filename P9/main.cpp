#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int numero,ultimo,total;
cout<<"Ingrese el numero: ";
cin>>numero;

while(numero>0){

 ultimo=numero%10;
 numero=numero/10;
 ultimo=pow(ultimo,ultimo);
 total+=ultimo;

}

cout<<"El resultado de la suma es: "<<total<<endl;
return 0;
}
