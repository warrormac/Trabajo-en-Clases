#include <iostream>

using namespace std;

int sum(int x[])
{
    int z=0;
    for (int y=0;y<5;y++)
    {
        z=z+x[y];
    }
    cout<<z;
}

int main()
{
    int a[5];
    cout<<"ingrese sus valores: \n";
    for (int x=0;x<5;x++)
    {
        cin>>a[x];
    }
    sum(a);

}
