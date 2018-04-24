#include <iostream>

using namespace std;



int tam(char x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}

void itrcambio(char x[],  int p)
{
    int r,q,m;
    int n;
    m=0;
    q=0;
    n=p-1;

    if (p%2==0)
    {
        r=p/2;
        while (r>m)
        {
            q=x[m];
            x[m]=x[n];
            x[n]=q;
            m++;
            n--;

        }
    }
    else
        r=(p/2)+1;
        while (r>m)
        {
            q=x[m];
            x[m]=x[n];
            x[n]=q;
            m++;
            n--;

        }

    for (int cont=0;cont<p;cont++)
        cout<<x[cont];

}

int main()
{
    char a[]={'h','o','l','a','\0'};
    int leng=0;
    leng=tam(a);
    cout<<"el tamaño de la lista es de:"<<leng<<"\n\n";
    itrcambio(a,leng);
}





