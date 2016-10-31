#include <iostream>

using namespace std;

int main()
{
    short a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    for(int i=0;i<3;i++)
         for(int j=0;j<4;j++)
    {
        cout<<&a[i][j]<<endl;
    }
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<sizeof (*(a+0)+1)<<endl;
}
