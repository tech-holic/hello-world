#include<iostream>
using namespace std;
#define MAXN 100000
int arr[MAXN+10];

int main(void)
{
    int n, i, thisSum, maxSum, begin, end, index;

    cin>>n;
    for(i = 0; i < n; i++)
        cin>>arr[i];

    thisSum = maxSum = index = 0;
    for(i = 0; i < n; i++)
    {
        thisSum += arr[i];
        if(thisSum > maxSum)
        {
            maxSum = thisSum;
            begin = index;
            end = i;
        }
        if(thisSum < 0)
        {
            thisSum = 0;
            index = i+1;
        }
    }

    if(maxSum == 0)
    {
        for(i = 0; i < n; i++)
        {
            if(arr[i] == 0)
                break;
        }
        if(i == n) // 所有元素都是负数
            cout<<"0 "<<arr[0]<<" "<<arr[n-1]<<endl;
        else
            cout<<"0 0 0"<<endl;
    }
    else
        cout<<maxSum<<" "<<arr[begin]<<" "<<arr[end]<<endl;
    return 0;
}
