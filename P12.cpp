#include <iostream>

using namespace std;

int main()
{
    int numero,aux;
    cout<<"Ingrese un numero entero";cin>>numero;
    cout<<"El mayor factor primo de "<<numero;
    for(int i = 2 ; i <= numero ; i++)
    {
        if(numero % i == 0)
        {
            aux = i;

            while(numero % i == 0)
                numero /= i;
        }
    }
    cout<< " Es "<<aux<<endl;
    return 0;
}
