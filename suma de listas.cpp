#include <iostream>

using namespace std;



int len(int x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}


int sum(int x[],int y)
{
    int z=0;
    int cont=0;
    while (cont<=y)
    {
        z+=x[cont];
        cont++;
    }
    return z;
}

int suma(int x[], int cont){
	if (cont==1){
		return x[0];
	}
	else
		return x[cont-1]+sum(x,cont-1);
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int leng=0;
    leng=len(a);
    cout<<"el tamaño de la lista es de:"<<leng<<"\n\n";
    cout<<suma(a,leng);
}

