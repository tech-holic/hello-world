#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

#define MAXN 200
#define MAX 2000

clock_t start,stop;
double f1(int N,double a[],double x);
double f2(int N,double a[],double x);

int main()
{
    int i;
    double a[MAXN];
    double res;
    for(i=0;i<MAXN;i++) a[i]=(double)i;

    start = clock();
    for(i=0;i<MAX;i++)
        res=f1(MAXN,a,1.01);
    stop = clock();
    cout<<"普通算法计算出结果"<<res<<"用时"<<(stop-start+0.0)/CLK_TCK/MAX<<"秒"<<endl;

    start = clock();
    for(i=0;i<MAX;i++)
        res=f2(MAXN,a,1.01);
    stop = clock();
    cout<<"改进算法计算出结果"<<res<<"用时"<<(stop-start+0.0)/CLK_TCK/MAX<<"秒"<<endl;
    return 0;
}
double f1(int N,double a[],double x)
{
    double r=0.0;
    for(int i=0;i<N;i++)
    {
        r=r+pow(x,i)*a[i];
    }
    return r;
}
double f2(int N,double a[],double x)
{
    double r=a[N-1];
    for(int i=N-2;i>=0;i--)
    {
        r=a[i]+r*x;
    }
    return r;
}
