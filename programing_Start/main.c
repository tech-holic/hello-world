#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void safefree(void **pp)
{
    if (pp != NULL) {               /* safety check */
        free(*pp);                  /* deallocate chunk, note that free(NULL) is valid */
        *pp = NULL;                 /* reset original pointer */
    }
}
int fun(void){
static int count = 10; // 事实上此赋值语句从来没有执行过
 return count--;
 }
int main()
{
    //puts的用法以及与类似语句printf的异同

    int a=8;
    puts("Hello world!"); //与其他命令不同，puts只能输出字符串，而且自带换行的。
//    printf("Hello world!");//这一句好像也是自带换行
    printf("%d",a); //这个就没有换行了，难道是字符串就自带换行么？
    printf("Hello world!\n");



    //变量和数组以指针的形态转换

    int *x, y[] = {12, 22,32}, z = 100;
    //下面演示，指针既可充当变量、也可充当数组
    x=&z;      //整型变量的地址赋给x
    printf("*x=%d, x[0]=%d\n", *x, x[0]);
    x = y;     //数组的地址赋给x
    printf("*x=%d, x[ 0]=%d, x[ 1]=%d, x[2]=%d\n", *x, x[0], x[1], x[2]);
    x = y + 1; //数组的第二位地址赋给x
    printf("*x=%d, x[-1]=%d, x[ 0]=%d, x[1]=%d\n", *x, x[-1], x[0], x[1]);
    x = y + 2; //数组的第三位地址赋给x
    printf("*x=%d, x[-2]=%d, x[-1]=%d, x[0]=%d\n", *x, x[-2], x[-1], x[0]);


    //动态分配内存

    char *p , *p2;
    p=(char *)malloc(40*sizeof(char));//这里的（char *）加上的意思是明确这个指针是指向字符的指针，当然不标注也不会编译出错
    if (p == NULL) {          //这个判断是必须的
        printf("内存分配出错！");
        exit(1);
    }
    strcpy(p, "这是劝学网C语言教程。\n");
    p2=p;   //不要忘记给新内存赋值
    printf("%s", p);

    free(p);    //过河一定要拆桥
    p = NULL ;  //释放后的指针置空，这是非常好的习惯，防止野指针。
    //safefree(&p);或者使用等价的这个函数

    printf("%s\n", p2); //此时p2就可以说是悬垂指针了，并没有指向正确的对象。


    int count=1;
    printf("global\t\tlocal static\n");
    for(;count<=10; ++count)
        printf("%d\t\t%d\n", count, fun());


    return 0;
}
