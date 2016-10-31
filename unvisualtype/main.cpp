//#include<iostream>
// using namespace std;
// class B
// {
// public:
//     B()
//     {
//         cout << "default constructor" << " ";
//     }
//     ~B()
//     {
//         cout << "destructed" << " ";
//     }
//     B(int i): data(i)
//     {
//         cout << "constructed by parameter" << data << " ";
//     }
//     private: int data;
// };
// B Play( B b)
// {
//     return b;
// }
// int main(int argc, char *argv[])
// {
//     B temp = Play(5);
//     return 0;
// }

//const变量在编译优化的时候会被替换成相应的常量值。
//#include <iostream>
//using namespace std;
//int main(void)
//{
//    const int a = 10;
//    int * p = (int *)(&a);
//    *p = 20;
//    cout<<"a = "<<a<<", *p = "<<*p<<endl;
//    return 0;
//}

//当判断语句是赋值语句时候，按照赋值后变量的值判断
//#include <iostream>
//using namespace std;
//int main(void)
//{
//    int m,n;
//    for(m=0,n=-1;m<5&(n=1)|n==0;m++,n++)
//        cout<<"hello"<<endl;
//    n++;
//}

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main(void)
//{
//    char *p1= "123";
//    char *p2="ABC";
//    char str[50]= "xyz";
//    strcpy(str+2,strcat(p1,p2));
//    cout << str;
//}

#include<stdio.h>
int inc(int a)
{
   return (++a);
}
int multi(int *a,int *b,int *c)
{
  return (*c=*a* *b);
}
typedef int (*FUNC1)(int*);
typedef int (FUNC2)(int*,int*,int*);
void show(FUNC2 fun,int arg1,int *arg2)
{
  FUNC1 *p=&inc;
  int temp=p(arg1);
  fun(&temp,&arg1,arg2);
  printf("%d\n",*arg2);
}
int main()
{
   int a;
   show(multi,10,&a);
   return 0;
}
