#include <iostream>

using namespace std;

int main()
{
    int a,b,c,conta=1,suma=0;
    cout << "Ingrese numero a: ";cin>>a;
    cout << "Ingrese numero b: ";cin>>b;
    cout << "Ingrese numero c: ";cin>>c;
    while (conta<c){
        if(conta%a==0){
            suma+=conta;
            if((conta+a)>=c) {
                cout<<conta<<"=";
            }
            else{
                cout<<conta<<"+";
            }
        }
        else if(conta%b==0){
            suma+=conta;
            if((conta+b)>=c) {
                cout<<conta<<"=";
            }
            else{
                cout<<conta<<"+";
            }

        }
        conta++;
    }
    cout<<suma<<endl;


    return 0;
}
