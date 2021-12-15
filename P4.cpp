#include <iostream>

using namespace std;

int minutos1,minutos2,horas1,horas2;
bool time=true;
void separador(int tiempo1,int tiempo2);

int main()
{
    int mintotal=0,horatotal=0,sumM=0,sumH=0,t1,t2;
    cout << "Ingrese la hora 1: ";cin>>t1;
    cout << "Ingrese la hora 2: ";cin>>t2;
    separador(t1,t2);
    if (time==true){
        sumH=horas1+horas2;
        sumM=minutos1+minutos2;
        if (sumM<=59){
            mintotal=sumM;
        }
        else{
            horatotal=sumM/60;//poraca
            mintotal=sumM%60;
        }

        horatotal=horatotal+(sumH%24);//Restringue el valor hora a <=24
        horatotal=horatotal*100+mintotal;
        cout<<"La hora es: "<<horatotal<<endl;
     }



    return 0;
}
void separador(int tiempo1,int tiempo2){
    horas1=tiempo1/100;

    minutos1=tiempo1%100;
    horas2=tiempo2/100;
    minutos2=tiempo2%100;
    if (minutos1<=-1 || minutos2 <=-1 || minutos1>=60 || horas1<=-1 || horas2 <=-1 || horas1>=25){
        time=false;
        cout<<"Tiempo invalido";

    }
}
