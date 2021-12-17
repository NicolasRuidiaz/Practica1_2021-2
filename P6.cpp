#include <iostream>

using namespace std;

int fact(int);
int numero;
int main()
{
    cout << "Escriba el numero" << endl;cin>>numero;
    double e=0;
    for(int i=0;i<numero;i++){
        double u=fact(i);
        e+=1/u;
    }
    cout<<"El valor aproximado de e en base a "<<numero<<" es "<<e<<endl;

    return 0;
}

int fact(int f){
    int factorial=f;
    if (factorial>1){
        factorial=f*fact(f-1);
        return factorial;
    }
    else{
        return 1;
    }
}
