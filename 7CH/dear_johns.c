#include<stdio.h>
#include<stdlib.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
typedef struct {
    char *name;
    enum response_type type;
}response;

void dump(response r)
{
    printf("Dear %s,\n", r.name);
    puts("Unforturnately your last data contacted us to");
    puts("say that they will not be seeing you again");
}

void second_chance(response r)
{
    printf("Dear %s,\n", r.name);
    puts("Good nwesL your last data has asked us to");
    puts("arrange another meeting. Please call ASAP");
}

void marriage(response r)
{
    printf("Dear %s,\n", r.name);
    puts("Congraulations! Your last data has contacted");
    puts("us with a proposal of marriage");
}

void (*replies[])(response) = {dump, second_chance, marriage};
int main()
{

response r[]={
     {"Mike", DUMP}, {"Luis", SECOND_CHANCE}, {"Matt", SECOND_CHANCE},
     {"William", MARRIAGE}
    };
    int i;
    for (i=0; i<4; i++){
        (replies[r[i].type])(r[i]);
       }
    return 0;
}
