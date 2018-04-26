#include <iostream>

using namespace std;


void con(char x[], char y[])
{
    int l=0;
    int *a=&l;
    int q=0;
    int *b=&q;
    while (x[*a]!='\0')
        *a=*a+1;
        while (y[*b]!='\0'){
            x[*a]=y[*b];
            *b=*b+1;
            *a=*a+1;
        }

    cout<<x;
}


int main()
{
    char a[20]={'h','o','l','a','\0'};
    char b[]={'a','n','d','r','e','\0'};
    con(a,b);
}
