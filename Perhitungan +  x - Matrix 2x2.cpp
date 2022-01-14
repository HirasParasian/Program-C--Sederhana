/*
Nama ; Hiras Parasian Doloksaribu
NIM  ; 1881011
Teknik Informatika
*/
#include <iostream>
using namespace std;

int main()
{
    int A[2][2],B[2][2],C[2][2],D[2][2],E[2][2];
    int m,n;
//Matriks A
    cout<<"Matriks A : "<<endl;

    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
            {   
			cout<<"matriks - A . Ke "<<m+1<<" . "<<n+1<<" = ";
            cin>>A[m][n];
			}
    }
    cout<<endl;
//Matriks B
    cout<<"Matriks B: "<<endl;

    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
        {
        	cout<<"matriks - B . Ke "<<m+1<<" . "<<n+1<<" = ";
            cin>>B[m][n];
        }
    }
    cout<<endl;
//Rumus Matriks A + Matriks B
    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
        {
            C[m][n]=A[m][n]+B[m][n];
        }
    }
//Rumus Matriks A - Matriks B
    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
        {
            D[m][n]=A[m][n]-B[m][n];
        }
    }
//Rumus Matriks A * Matriks B
    for(m=0;m<2;m++)
    {
       for(n=0;n<2;n++)
       {
       E[m][n]=(A[m][0]*B[0][n])+(A[m][1]*B[1][n]);
       }
    }
//Output Matriks A + Matriks B
    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
        {
            cout<<" "<<A[m][n];
        }
        if(m==1)
        {
            cout<<" |+|";
        }
        else
        cout<<" | |";
        for(n=0; n<2; n++)
        {
            cout<<" "<<B[m][n];
        }
        if(m==1)
        {
            cout<<" |=|";
        }
        else
        cout<<" | |";
        for(n=0; n<2; n++)
        {
            cout<<" "<<C[m][n];
        
        }
        
    cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    //Output Matriks A - Matriks 
    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
        {
            cout<<" "<<A[m][n];
        }
        if(m==1)
        {
            cout<<" |-|";
        }
        else
        cout<<" | |";
        for(n=0; n<2; n++)
        {
            cout<<" "<<B[m][n];
        }
        if(m==1)
        {
            cout<<" |=|";
        }
        else
        cout<<" | |";
        for(n=0; n<2; n++)
        {
            cout<<" "<<D[m][n];
        }
    cout<<endl;
    }
    cout<<endl;
    cout<<endl;
//Output Matriks A x Matriks B
    for(m=0; m<2; m++)
    {
        for(n=0; n<2; n++)
        {
            cout<<" "<<A[m][n];
        }
        if(m==1)
        {
            cout<<" |x|";
        }
        else
        cout<<" | |";
        for(n=0; n<2; n++)
        {
            cout<<" "<<B[m][n];
        }
        if(m==1)
        {
            cout<<" |=|";
        }
        else
        cout<<" | |";
        for(n=0; n<2; n++)
        {
            cout<<" "<<E[m][n];
        }
    cout<<endl;
    }

}