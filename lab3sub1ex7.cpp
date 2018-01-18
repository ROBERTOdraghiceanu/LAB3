#include <iostream>

using namespace std;

int main()
{
    int grade,ok;

    do{

        cout<<"Introduceti gradele unghiului(valoarea trebuie sa se afle intre 0 si 90):";
        cin>>grade;

        if( (grade>=0) && (grade<=90)){

            ok=1;
            cout<<endl;
            cout<<"Ati introdus corect";

        }

        else{

            ok=0;
            cout<<endl;
            cout<<"Eroare!";
            cout<<endl;
            cout<<"Va rog sa introduceti o valoare care se afla intre 0 si 90";
            cout<<endl;
            cout<<endl;

        }

    }while(ok==0);

    return 0;
}
