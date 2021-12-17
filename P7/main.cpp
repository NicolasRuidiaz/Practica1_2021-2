#include <iostream>

using namespace std;

int main()
{
    int n,x=0,y=1,z=0,pares=0;
    cout << "Ingrese el numero de elementos: ";cin>>n;
    while(z<n){
        int i=1;//contador
        z=x+y;
        if(z%2==0){
            pares+=z;
        }
        x=y;
        y=z;
        i++;
    }
    cout<<"El resultado de la suma es: "<<pares<<endl;
    return 0;
}
