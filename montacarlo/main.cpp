//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//
//using namespace std;
//
//int win_num(int N,double x)
//{
//
//    int j=0;
//    unsigned a=(unsigned)clock();
//    srand(a);
//    for(int i = 0; i < N;i++ )
//    {
//        if(rand()%100<100*x)
//            j++;
//    }
//    //cout<<a<<"\t";
//    Sleep(rand()%5);
//        return j;
//}
//
//int main()
//{
//    int N=2000;
//    double x=0.5;
//    int j=0;
//    int a,b;
//    for(int i = 0; i < N;i++ )
//    {
//       a=win_num(101,x);
//       b=win_num(100,x);
//       //cout<<a<<"\t"<<b<<endl;
//       if(a>b)
//        j++;
//    }
//    cout<<double(j)/N<<endl;
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//    char cmd[20]="shutdown -s -t ";
//    char t[5]="0";
//    int c;
//    system("title C���Թػ�����");  //����cmd���ڱ���
//    system("mode con cols=48 lines=25");  //���ڿ�ȸ߶�
//    system("color f0");  //����д�� red ������ɫ��
//    system("date /T");
//    system("TIME /T");
//    printf("----------- C���Թػ����� -----------\n");
//    printf("1.ʵ��10�����ڵĶ�ʱ�رռ����\n");
//    printf("2.�����رռ����\n");
//    printf("3.ע�������\n");
//    printf("0.�˳�ϵͳ\n");
//    printf("-------------------------------------\n");
//    scanf("%d",&c);
//    switch(c) {
//        case 1:
//            printf("�����ڶ�������Զ��رռ��������0~600��\n");
//            scanf("%s",t);
//            system(strcat(cmd,t));
//            break;
//        case 2:
//            system("shutdown -p");
//            break;
//        case 3:
//            system("shutdown -l");
//            break;
//        case 0:
//            break;
//        default:
//            printf("Error!\n");
//    }
//    system("pause");
//    return 0;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    int a=88;
//    int b=64;
//   int d;
//   cout<<"enter a sentence:"<<endl;
//   while((d=cin.get()))
//      cout.put(d);
//    cout<<setbase(2)<<a<<endl;
//    cout.setf(ios::showbase);
//    cout<<hex<<a<<endl;
//    cout<<b<<endl;
//    cout<<b<<endl;
//    cout<<setbase(3)<<b<<endl;
//    char *pt="China";  //ptָ���ַ���"China"
//    cout<<setw(16)<<pt<<pt<<endl;  //ָ�����Ϊ,����ַ���
//    cout<<setfill('*')<<pt<<endl;  //ָ�����,����ַ���,�հ״���'*'���   double c=22.0/7;
//    cout<<pt<<endl;
//    double c=22.0/7;
//    cout<<setprecision(5)<<c<<endl;
//    cout<<c<<endl;
//   cout.setf(ios::showbase);//��ʾ��������(0x��)
//   cout<<"dec:"<<a<<endl;         //Ĭ����ʮ������ʽ���a
//   cout.unsetf(ios::dec);         //��ֹʮ���Ƶĸ�ʽ����
//   cout.setf(ios::hex);           //������ʮ�����������״̬
//   cout<<"hex:"<<a<<endl;         //��ʮ��������ʽ���a
//   cout.unsetf(ios::hex);         //��ֹʮ�����Ƶĸ�ʽ����
//   cout.setf(ios::oct);           //�����԰˽��������״̬
//   cout<<"oct:"<<a<<endl;         //�԰˽�����ʽ���a
//   cout.unsetf(ios::oct);
//   cout.width(10);                //ָ�����Ϊ
//   cout<<pt<<endl;                //����ַ���
//   cout.width(10);                //ָ�����Ϊ
//   cout.fill('*');                //ָ���հ״���'*'���
//   cout<<pt<<endl;                //����ַ���
//   double pi=22.0/7.0;            //���piֵ
//   cout.setf(ios::scientific);    //ָ���ÿ�ѧ���������
//   cout<<"pi=";                   //���"pi="
//   cout.width(14);                //ָ�����Ϊ
//   cout<<pi<<endl;                //���piֵ
//   cout.unsetf(ios::scientific); //��ֹ��ѧ������״̬
//   cout.setf(ios::fixed);        //ָ���ö�����ʽ���
//   cout.width(12);               //ָ�����Ϊ
//   cout.setf(ios::showpos);      //���������+����
//   cout.setf(ios::internal);     //�������������
//   cout.precision(5);            //����λС��
//   cout<<pi<<endl;               //���pi,ע��������+����λ��return 0;
//   cout<<"\101\76\69\6c\63\6f\73\40\67\6d\61\69\6c\2e\63\6f\6d"<<endl;
//}
#include <stdio.h>
#include <stdlib.h>
#define N 10
void print(char *s,int a)
{
  if((*s)&&(a<9))
    {
       print(s+1,a+1);
       a++;
       printf("%c%d",*s,a);
    }
}
main()
{
    char str[]="GeneNius";
    int mN=11;
    int m10=22;
    print(str,3);
    printf("%d",mN);
    printf("%d",m10);
    printf("%s",str);
    int i = -1;
unsigned j = 1;
if (j > i)
    printf(" (j>i)����\n");
else
    printf(" (j>i)������\n");

if (i < j)
    printf(" (i<j)����\n");
else
    printf(" (i<j)������\n");
}
