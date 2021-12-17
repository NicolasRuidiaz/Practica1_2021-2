#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese el número impar que determina cantidad maxima de asteriscos: " << endl;cin>>n;
    n=(n+1)/2;//Cantidad de filas mitad rombo
    for(int j=1;j<=n;j++){
       for(int i=1;i<=n-j;i++){
           cout<<" ";
       }
       for(int k=1;k<=2*j-1;k++){
           cout<<"*";
       }
       cout<<endl;
    }
    for(int j=n-1 ;j>0;j--){
       for(int i=0;i<n-j;i++){
           cout<<" ";
       }
      for(int i=0;i<2*j-1;i++){
            cout<<"*";
      }
       cout<<endl;
    }

    return 0;
}
