#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

enum drink {
    MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price (enum drink d)
{
    switch(d) {
        case MUDSLIDE:
            return 6.79;
        case FUZZY_NAVEL:
            return 5.31;
        case MONKEY_GLAND:
            return 4.82;
        case ZOMBIE:
            return 5.89;
    }
 return 0;
}

double total(int args,  ...)  //must add ... when you don't know how many arg you want to use
{
    double total=0;
    va_list ap;
    va_start(ap,args);
    int i;
    printf("va is %d\n",*ap);  //I want to know what is ap?
    for(i=0; i<args; i++){
    enum drink d = va_arg(ap, enum drink);  //第二個參數位置是放資料型
    total += price(d);      //要去呼叫已經成為資料型態的drink中，將資料放在switch中的數值
    }
    va_end(ap);         //結束這個ap,如果我不寫這個，會怎麼樣？
    return total;
}

int main()
{
    printf("main test  %d\n", MUDSLIDE);
    printf("Price is %.2f\n", total(2, MONKEY_GLAND, MUDSLIDE));
    printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
    printf("Price is %.2f\n", total(1, ZOMBIE)); 
    /*
     * 因為透過了enum的功能，使得MONKEY_GLAND, MUDSLIDE...等東西，都會
     * 變成數值，然後在下面使用的時候，他就是以數值的方式去呼叫，但我想知道他的工作流程與走向
     * 這個我想造在問問
     */
    return 0;
}
