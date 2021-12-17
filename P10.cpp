#include <iostream>

using namespace std;
bool primo(int n);
int main()
{
    int n,num=0,c=1,primocontador=0;
    cout << "Ingrese numero limite: ";cin>>n;
    primocontador=n;
    cout<<"El primo numero "<<n;
    for (int i=1;primocontador>0;i++){//Error
        if (primo(i)){
            primocontador--;
            num=i;
            c++;
        }
    }


    cout<<" es: "<<num;
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
