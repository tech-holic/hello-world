#include <iostream>
#include <ctime>
#include <time.h>

#define DAY_SECONDS 3600*24;
//上面这两句貌此程序中等价的，可以用其中任何一个，有机会再来讨论他们的区别。

using namespace std;
void x3plus1(const int n)//只读变量不可改变数值，以后只要不改变实参就用这个声明
{
    int tmp=n;
    if (tmp>=1)
    {
        while(tmp!=1)
        {
            cout<<tmp<<"->";
            if(tmp%2==0)
                tmp/=2;
                //if (tmp==1)
                   // continue;//当变换为1的时候就跳出循环。启示：数字的变换一般写在程序块的后面
                //cout<<tmp<<"->";
            else
                tmp=tmp*3+1;
                //cout<<tmp<<"->";
        }
        if(tmp==1)
            cout<<tmp<<endl;
    }
    else cout<<tmp<<"不是一个正整数"<<endl;
}
void time_of_now()
{
    time_t t = time(NULL);
    time_t timeDayNow =  t%DAY_SECONDS;
    int hour = timeDayNow/3600;
    int min = (timeDayNow%3600)/60;
    int sec = timeDayNow%60;
    cout<<"现在时间是："<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl;
}
int main()
{
    time_t t1,t2,t3,t4;
    t1=clock();
    t3=time(NULL);//此处NULL是必须的，虽然我还不知道为什么
    for(int i=4;i<200;i++)
    {
        x3plus1(i);
    }
    t4=time(NULL);
    t2=clock();
    cout<<"程序运行了"<<t2-t1<<"时钟计时点"<<endl;
    cout<<"程序运行了"<<(t2-t1+0.0)/CLOCKS_PER_SEC<<"秒"<<endl;
    cout<<"程序运行了"<<t4-t3<<"秒"<<endl;
    cout<<"时钟计时器每秒点数为"<<CLOCKS_PER_SEC<<endl;
    cout<<"时钟计时器每秒点数为"<<CLK_TCK<<endl;
    time_of_now();
    return 0;
}
