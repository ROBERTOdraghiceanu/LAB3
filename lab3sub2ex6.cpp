#include <iostream>

using namespace std;

int main()
{
    int sum,ultim_nr,contor;

    cout<<"Introduceti pana la ce numar vreti sa calculati suma:";
    cin>>ultim_nr;

    sum=0;

    for( contor=1 ; contor<=ultim_nr ; contor++){

        sum=sum+contor*contor;

    }

    cout<<"Suma este:";
    cout<<sum;

    return 0;
}
