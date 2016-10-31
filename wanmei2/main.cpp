#include <iostream>
#include <stdlib.h>

using namespace std;
int maxindex(int * a,int k)
{
    int res=0;
    int max=a[0];
    for(int i=0;i<k;i++)
    {
        if(a[i]>max)
        res=i;
    }
    return res;
}

int main()
{
    int n,k,i=0,max_index;
    int j;
    cin>>n>>k;
    int *p=(int *)malloc(n*sizeof(int));
    int *kk=(int *)malloc(k*sizeof(int));
    while(i<n)
    {
        cin>>p[i];
        i++;
    }
    for(i=0;i<n;i++)
    {
        if(i<k)
        {
            kk[i]=p[i];
            continue;
        }
        max_index=maxindex(kk,k);
        if(p[i]<p[max_index])
        {
            for(j=max_index;j<k;j++)
            {
                kk[j]=kk[j+1];
            }
            kk[k]=p[i];
        }
    }
    for(i=0;i<k;i++)

    cout << kk[i]<< endl;
    free(kk);
    free(p);
    return 0;
}
