#include <iostream>
#include <time.h>
//#include <string.h>
using namespace std;

void print1_Nbyloop(int N)
{
    for(int i=1;i<=N;i++)
        cout<<i<<endl;
}
void print1_Nbyre(int N)
{
    if(N!=1)
    {
        print1_Nbyre(N-1);
        cout<<N<<endl;
    }
    else if(N==1)
        cout<<N<<endl;
}
int main()
{
    time_t t1[14],t2[14],t3[14];
    int N,j;

    for(j=1;j<15;j++)
    {
        N=600*j;
        t1[j-1]=clock();
        print1_Nbyloop(N);
        t2[j-1]=clock();
        print1_Nbyre(N);
        t3[j-1]=clock();
    }
    for(j=1;j<15;j++)
    {
        cout<<"循环法打印"<<600*j<<"个整数用时"<<t2[j-1]-t1[j-1]<<"毫秒"<<endl;
        cout<<"递归法打印"<<600*j<<"个整数用时"<<t3[j-1]-t2[j-1]<<"毫秒"<<endl;
    }
    return 0;
}
