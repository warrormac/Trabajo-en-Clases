#include <iostream>

using namespace std;



int tam(char x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}

void cambio(char x[],  char y[],int p)
{
    int l=0;
    while (l<p)
    {
        x[l]=y[l];

        l++;

    }
    cout<<"la copia de la cadena x es"<<" y[";
    for (int cont=0;cont<p;cont++)
        cout<<x[cont];
    cout<<"]";
}


int main()
{
    char a[]={'h','o','l','a',' ','\0'};
    char b[]={'a','n','d','r','e','\0'};
    int leng=0;
    leng=tam(a);
    cout<<"el tamaño de la lista es de:"<<leng<<"\n\n";
    cambio(a,b,leng);
}




