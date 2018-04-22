#include <iostream>

using namespace std;



int len(int x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}


int itrcambio(int x[],  int p)
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
    int a[]={1,2,3,4,5,6,7,8};
    int leng=0;
    leng=len(a);
    cout<<"el tamaño de la lista es de:"<<leng<<"\n\n";
    itrcambio(a,leng);
}



