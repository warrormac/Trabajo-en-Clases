#include <iostream>

using namespace std;


void con(char x[], char y[])
{
    int l=0;
    int q=0;
    while (x[l]!='\0')
        l++;
    //if (x[l]=='\0'){
        while (y[q]!='\0'){
            x[l]=y[q];
            q++;
            l++;
        }
    //}
    l=0;
    cout<<x;
}


int main()
{
    char a[20]={'h','o','l','a','\0'};
    char b[]={'a','n','d','r','e','\0'};
    con(a,b);
}








