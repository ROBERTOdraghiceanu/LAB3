#include <iostream>

using namespace std;

int main()
{
    int seq1[100],seq2[100],seq_ord[100],contor,n_seq1,n_seq2,contor1,contor2,contor_aux;

    cout<<"Introduceti numarul de elemente din primul vector:";
    cin>>n_seq1;

    cout<<"Introduceti elementele primului vector in ordine crescatoare:";
    cout<<endl;

    cin>>seq1[0];

    for( contor=1 ; contor<n_seq1 ; contor++ ){

        do{

            cin>>seq1[contor];

            if( seq1[contor]<seq1[contor-1] ){

                cout<<"Trebuie sa introduceti elementele in ordine crescatoare!";
                cout<<endl;
                contor--;

            }

        }while( seq1[contor]<seq1[contor-1] );

    }

    cout<<endl;

    cout<<"Introduceti numarul de elemente din al doilea vector in ordine crescatoare:";
    cin>>n_seq2;

    cout<<"Introduceti elementele celui de-al doilea vector";
    cout<<endl;

    cin>>seq2[0];

    for( contor=1 ; contor<n_seq2 ; contor++){

        do{

            cin>>seq2[contor];

            if( seq2[contor]<seq2[contor-1] ){

                cout<<"Trebuie sa introduceti elementele in ordine crescatoare!";
                cout<<endl;
                contor--;

            }

        }while( seq2[contor]<seq2[contor-1] );

    }

    contor=0;
    contor1=0;
    contor2=0;

    while( ( contor1<n_seq1 ) && ( contor2<n_seq2 )){

        if( seq1[contor1]<seq2[contor2] ){

            seq_ord[contor]=seq1[contor1];
            contor1++;
            contor++;

        }

        else{

            seq_ord[contor]=seq2[contor2];
            contor2++;
            contor++;

        }

    }

    if( contor1<=n_seq1 ){

        for( contor_aux=contor1 ; contor_aux<n_seq1 ; contor_aux++ ){

                seq_ord[contor]=seq1[contor_aux];
                contor++;

        }

    }

    if( contor2<=n_seq2 ){

        for( contor_aux=contor2 ; contor_aux<n_seq2 ; contor_aux++ ){

            seq_ord[contor]=seq2[contor_aux];
            contor++;

        }

    }

    contor--;

    cout<<"Vectorul format din cei 2 vectori este:";
    cout<<endl;

    for( contor_aux=0 ; contor_aux<=contor ; contor_aux++ ){

        cout<<seq_ord[contor_aux];
        cout<<" ";

    }

    return 0;
}
