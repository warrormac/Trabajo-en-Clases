#include <iostream>

using namespace std;

int copia(int x[], int y)
{
    int r[y];
    for (int z=0;z<y;z++)
    {
        r[z]=x[z];
        cout<<r[z];
    }

}
int main()
{
    int b=5;
    int a[b];
    cout<<"ingrese sus valores: \n";
    for (int x=0;x<b;x++)
    {
        cin>>a[x];
    }
    copia(a,b);
}
