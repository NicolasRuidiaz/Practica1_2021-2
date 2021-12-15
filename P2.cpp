#include <iostream>

using namespace std;

int main()
{
    int dinero,resto=0;
    cout << "Ingrese la cantidad de dinero" << endl;cin>>dinero;

         resto=dinero/50000;
         dinero=dinero%50000;


        cout<<"$50.000: "<<resto<<endl;
        resto=dinero/20000;
        dinero=dinero%20000;

        cout<<"$20.000: "<<resto<<endl;
        resto=dinero/10000;
        dinero=dinero%10000;

        cout<<"$10.000: "<<resto<<endl;
        resto=dinero/5000;
        dinero=dinero%5000;

        cout<<"$5.000: "<<resto<<endl;
        resto=dinero/2000;
        dinero=dinero%2000;

        cout<<"$2.000: "<<resto<<endl;
        resto=dinero/1000;
        dinero=dinero%1000;

        cout<<"$1.000: "<<resto<<endl;
        resto=dinero/500;
        dinero=dinero%500;

        cout<<"$500: "<<resto<<endl;
        resto=dinero/200;
        dinero=dinero%200;

        cout<<"$200: "<<resto<<endl;
        resto=dinero/100;
        dinero=dinero%100;

        cout<<"$100: "<<resto<<endl;
        resto=dinero/50;
        dinero=dinero%50;

        cout<<"$50: "<<resto<<endl;
        cout<<"Faltante: "<<dinero<<endl;
    return 0;
}
