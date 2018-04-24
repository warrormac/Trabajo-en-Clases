#include <iostream>

using namespace std;



int tam(char x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}

int cambio(char x[],  int p)
{
    int l=0;
    char y[p];
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
    char a[]={'h','o','l','a','\0'};
    int leng=0;
    leng=tam(a);
    cout<<"el tamaño de la lista es de:"<<leng<<"\n\n";
    cambio(a,leng);
}



