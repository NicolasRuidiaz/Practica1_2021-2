#include <iostream>

using namespace std;

int main()
{
    char letra;

    cout <<"Ingrese la letra"<< endl;cin>>letra;
    if (letra==65||letra==97||letra==69||letra==101||letra==73||letra==105||letra==79||letra==111||letra==85||letra==117){
        cout<<letra<<" es una vocal."<<endl;
    }
    else if((letra>=65&&letra<=90)||(letra<=122&&letra>=97)){
        cout<<letra<<" es una consonante."<<endl;
    }
    else{
        cout<<letra<<"No es letra"<<endl;

   }

    return 0;
}
