#include <stdio.h>
//#define Mon 1
//#define Tues 2
//#define Wed 3
//#define Thurs 4
//#define Fri 5
//#define Sat 6
//#define Sun 7
int main(){
    int day;

    //enum week{ Mon, Tues, Wed, Thurs, Fri, Sat, Sun }; 从0开始定义
    //enum week{ Mon = 1, Tues = 2, Wed = 3, Thurs = 4, Fri = 5, Sat = 6, Sun = 7 };分别指定数字
    //enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };//开始定义一个，后面都是加1
    enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };

    scanf("%d", &day);
    switch(day){
        case Mon: puts("Monday"); break;
        case Tues: puts("Tuesday"); break;
        case Wed: puts("Wednesday"); break;
        case Thurs: puts("Thursday"); break;
        case Fri: puts("Friday"); break;
        case Sat: puts("Saturday"); break;
        case Sun: puts("Sunday"); break;
        default: puts("Error!");
    }
    return 0;
}
