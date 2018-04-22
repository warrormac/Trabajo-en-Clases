#include <iostream>

using namespace std;



int len(int x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}


int cambio(int x[],  int p)
{
    int l=0;
    int y[p];
    while (l<p)
    {
        y[l]=x[l];

        l++;

    }
    cout<<"la copia de la cadena x es"<<" y[";
    for (int cont=0;cont<p;cont++)
        cout<<y[cont];
    cout<<"]";
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int leng=0;
    leng=len(a);
    cout<<"el tamaño de la lista es de:"<<leng<<"\n\n";
    cambio(a,leng);
}

