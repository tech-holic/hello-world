#include <iostream>
using namespace std;

int countone(int x)
{
    int countx=0;
    while(x){
        countx++;
        x=x&(x-1);
    }
    return countx;
}

int main()
{
    int I,r,m,i;
    int num=0;
    cin>>I>>r>>m;
    for(i=I;i<=r;i++)
    {
        if(countone(i)==m)
            num++;
    }
    if(num==0)
        cout << "-1" << endl;
    else
        cout<<num<<endl;
    return 0;
}
