#include <iostream>
using namespace std;

void select_sort(int array[],int n);
void swap(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
} //��������

int main( )
{

   int a[10],i;
   cout<<"enter the originl array��"<<endl;
   for(i=0;i<10;i++)  //����10����
      a[i]=9-i;
   cout<<endl;
   select_sort(a,10);//��������,��������ʵ��
   cout<<"the sorted array��"<<endl;
   for(i=0;i<10;i++) //���10�����ź������
      cout<<a[i]<<"  ";
   cout<<endl;
   return 0;
}
void select_sort(int array[],int n)  //�β�array��������
{
   int i,j;
   //int k;
   for(i=0;i<n-1;i++)
   {
     // k=i;
      for(j=i+1;j<n;j++)
         if(array[j]<array[i]) //k=j;
      swap(array[j],array[i]);//t=array[k];array[k]=array[i];array[i]=t;
   }
}