#include <iostream>

using namespace std;

int main()
{
    int mes,dia;
    cout << "Ingrese el mes:";cin>>mes;
    cout<<"Ingrese el dia:";cin>>dia;
    if(mes<=12 && mes>=1 && dia<=31 && dia>=1){
        if(mes==4||mes==6||mes==9||mes==11){
            if(dia==31){
                cout<<dia<<"/"<<mes<<" Es una fecha invalida."<<endl;
            }
            else if(mes!=2){
                 cout<<dia<<"/"<<mes<<" Es una fecha valida."<<endl;
            }
        }
        else if(mes!=2){
            cout<<dia<<"/"<<mes<<" Es una fecha valida."<<endl;
        }
        if(mes==2){
            if(dia==29){
                 cout<<dia<<"/"<<mes<<" Valida en bisiesto."<<endl;
        }
        else if(dia<=28){
            cout<<dia<<"/"<<mes<<" Es una fecha valida."<<endl;
        }
        else{
        cout<<dia<<"/"<<mes<<" Es una fecha invalida."<<endl;
        }
        }
    }

    else{
        cout<<dia<<"/"<<mes<<" Es una fecha invalida"<<endl;
    }
    return 0;
}
