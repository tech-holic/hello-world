#include <iostream>

using namespace std;
int binaryFind(int a[],int target,int maxlenth)
{
	int left=0;
	int right=maxlenth-1;
	int mid;
	while(left<right)
	{
		mid=(left+right)/2;
		if(a[mid]==target)
			return mid;
		else if(a[mid]>target)
			right=mid;
		else if(a[mid]<target)
			left=mid;
	}
	if(left==right)
	{
	    if(a[left]==target)
            return left;
	}
    return -1;
}
int main()
{
    int N[20];
    for(int i=0;i<20;i++)
        N[i]=i+1;
 //    cout << "结果是" <<binaryFind(N,0,20)<<endl;
     for(int i=0;i<20;i++)
        cout << "结果是" <<binaryFind(N,i,20)<<endl;
    return 0;
}
