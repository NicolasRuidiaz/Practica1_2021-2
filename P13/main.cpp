#include <iostream>

using namespace std;
bool primo(int n);
int main()
{
    int n,suma=0;
    cout << "Ingrese numero limite: ";cin>>n;
    for (int i=1;i<n;i++){
        if (primo(i)){
            suma+=i;
        }
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
    return 0;
}
bool primo (int n){
    bool condicion;
    if (n!=1 && n!=0){
        for (int i=2;i<=n;i++){
            if(n%i==0){
                if(n==i){
                condicion=true;
                }
                else{
                    condicion=false;
                    return condicion;
                }

           }

        }
    }
    else{
        condicion=false;
    }
    return condicion;
}
