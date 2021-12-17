#include <iostream>

using namespace std;
bool pali(int n);
int main()
{
    int n1=999,n2=999,na,nb;
    int res=0;
    for(n1=999;n1>=100;n1--){
        for (n2=n1;n2>=100;n2--){
            if (pali(n1*n2)){
                if(n1*n2>res){
                res=n1*n2;
                na=n1;
                nb=n2;
                }
                break;
            }
        }
    }
    cout <<na<<'*'<<nb<<'='<<res<<endl;
    return 0;
}
bool pali(int n){
    int r=0,a=n;
    while(a!=0){
        r=10*r+a%10;
        a/=10;
    }
    if (r==n){
        return true;
    }
    else{
        return false;
    }
}

