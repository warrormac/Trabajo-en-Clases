#include <iostream>

using namespace std;



int len(char x[])
{
    int cont=0;
    for (int y=0;x[y]!='\0';y++)
        cont=cont+1;
    return cont;
}


int main()
{
    char a[]={'a','b','c','d','e','f'};
    int leng=0;
    leng=strlen(a);
    cout<<"el tamaño de la lista es de: "<<leng;

}
