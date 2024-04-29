#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct island{
     char *name;
     char *opens;
     char *closes;
     struct island *next;
} island; 

island* create(char *name)  //這邊加了一個*是因為他是字串的關係嗎?對！
{
    island *i = malloc(sizeof(island)); // 將他的位址存放在i的變數裡
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

void display(island *start) //呼叫island，然後幫他取一個新名字「start」
{
    island *i = start;  //這個跟create函式有什麼關係？呼叫island，然後做事的樣子，這裡我還是有點不明白

    for (;i != NULL;i=i->next){   //這邊繞行的東西是create
    printf("Name: %sopen: %s-%s\n", i->name, i->opens, i->closes);
    }
}

void release(island *start)
{
    island *i = start;
    island *next = NULL;
    for (; i != NULL;i = next){
    next = i->next;
    free(i->name);
    free(i);
    }
}

int main()
{
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;
    char name[80];
    for(; fgets(name,80,stdin) != NULL;i = next){
    next = create(name);
    if (start == NULL)
     start = next;
    if (start != NULL)
     i->next = next;
    }
    display(start); //打什麼就是從哪裡開始//
    release(start);
    return 0;

}
