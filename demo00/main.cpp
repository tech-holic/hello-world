#include<iostream>
#include<math.h>
using namespace std;
//���ڴ�ͷ�б�����д�Ŀ���ֱ����#include "std_lib_facilities.h"���������ﲻ��

int main()
{
    int n=0;
    int sum;
    while(cin>>n)
    {
        sum=n-2*(ceil(((sqrt(9+8*n))-3)/2)-1);
        cout <<sum<< endl;
    }
    return 0;
}
