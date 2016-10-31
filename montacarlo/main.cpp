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
//    system("title C语言关机程序");  //设置cmd窗口标题
//    system("mode con cols=48 lines=25");  //窗口宽度高度
//    system("color f0");  //可以写成 red 调出颜色组
//    system("date /T");
//    system("TIME /T");
//    printf("----------- C语言关机程序 -----------\n");
//    printf("1.实现10分钟内的定时关闭计算机\n");
//    printf("2.立即关闭计算机\n");
//    printf("3.注销计算机\n");
//    printf("0.退出系统\n");
//    printf("-------------------------------------\n");
//    scanf("%d",&c);
//    switch(c) {
//        case 1:
//            printf("您想在多少秒后自动关闭计算机？（0~600）\n");
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
//    char *pt="China";  //pt指向字符串"China"
//    cout<<setw(16)<<pt<<pt<<endl;  //指定域宽为,输出字符串
//    cout<<setfill('*')<<pt<<endl;  //指定域宽,输出字符串,空白处以'*'填充   double c=22.0/7;
//    cout<<pt<<endl;
//    double c=22.0/7;
//    cout<<setprecision(5)<<c<<endl;
//    cout<<c<<endl;
//   cout.setf(ios::showbase);//显示基数符号(0x或)
//   cout<<"dec:"<<a<<endl;         //默认以十进制形式输出a
//   cout.unsetf(ios::dec);         //终止十进制的格式设置
//   cout.setf(ios::hex);           //设置以十六进制输出的状态
//   cout<<"hex:"<<a<<endl;         //以十六进制形式输出a
//   cout.unsetf(ios::hex);         //终止十六进制的格式设置
//   cout.setf(ios::oct);           //设置以八进制输出的状态
//   cout<<"oct:"<<a<<endl;         //以八进制形式输出a
//   cout.unsetf(ios::oct);
//   cout.width(10);                //指定域宽为
//   cout<<pt<<endl;                //输出字符串
//   cout.width(10);                //指定域宽为
//   cout.fill('*');                //指定空白处以'*'填充
//   cout<<pt<<endl;                //输出字符串
//   double pi=22.0/7.0;            //输出pi值
//   cout.setf(ios::scientific);    //指定用科学记数法输出
//   cout<<"pi=";                   //输出"pi="
//   cout.width(14);                //指定域宽为
//   cout<<pi<<endl;                //输出pi值
//   cout.unsetf(ios::scientific); //终止科学记数法状态
//   cout.setf(ios::fixed);        //指定用定点形式输出
//   cout.width(12);               //指定域宽为
//   cout.setf(ios::showpos);      //正数输出“+”号
//   cout.setf(ios::internal);     //数符出现在左侧
//   cout.precision(5);            //保留位小数
//   cout<<pi<<endl;               //输出pi,注意数符“+”的位置return 0;
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
    printf(" (j>i)成立\n");
else
    printf(" (j>i)不成立\n");

if (i < j)
    printf(" (i<j)成立\n");
else
    printf(" (i<j)不成立\n");
}
