#include <iostream>
#include <ctime>
#include <time.h>

#define DAY_SECONDS 3600*24;
//����������ò�˳����еȼ۵ģ������������κ�һ�����л��������������ǵ�����

using namespace std;
void x3plus1(const int n)//ֻ���������ɸı���ֵ���Ժ�ֻҪ���ı�ʵ�ξ����������
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
                   // continue;//���任Ϊ1��ʱ�������ѭ������ʾ�����ֵı任һ��д�ڳ����ĺ���
                //cout<<tmp<<"->";
            else
                tmp=tmp*3+1;
                //cout<<tmp<<"->";
        }
        if(tmp==1)
            cout<<tmp<<endl;
    }
    else cout<<tmp<<"����һ��������"<<endl;
}
void time_of_now()
{
    time_t t = time(NULL);
    time_t timeDayNow =  t%DAY_SECONDS;
    int hour = timeDayNow/3600;
    int min = (timeDayNow%3600)/60;
    int sec = timeDayNow%60;
    cout<<"����ʱ���ǣ�"<<hour<<"ʱ"<<min<<"��"<<sec<<"��"<<endl;
}
int main()
{
    time_t t1,t2,t3,t4;
    t1=clock();
    t3=time(NULL);//�˴�NULL�Ǳ���ģ���Ȼ�һ���֪��Ϊʲô
    for(int i=4;i<200;i++)
    {
        x3plus1(i);
    }
    t4=time(NULL);
    t2=clock();
    cout<<"����������"<<t2-t1<<"ʱ�Ӽ�ʱ��"<<endl;
    cout<<"����������"<<(t2-t1+0.0)/CLOCKS_PER_SEC<<"��"<<endl;
    cout<<"����������"<<t4-t3<<"��"<<endl;
    cout<<"ʱ�Ӽ�ʱ��ÿ�����Ϊ"<<CLOCKS_PER_SEC<<endl;
    cout<<"ʱ�Ӽ�ʱ��ÿ�����Ϊ"<<CLK_TCK<<endl;
    time_of_now();
    return 0;
}