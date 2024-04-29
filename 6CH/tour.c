#include<stdio.h>

typedef struct island{
    char *name;
    char *open;
    char *close;
    struct island *next;
} island;

void display(island *start)
{
    island *i = start;

    for (;i != NULL;i =i->next){
    printf("Name: %s\n open: %s-%s\n", i->name, i->open, i->close);
    }
}

int main()
{
    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla nublar", "09:00","17:00", NULL};
    island shutter = {"Shutter","09:00", "17:00",NULL};
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;
    island skull = {"Skull", "09:00", "17:00", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;
    display(&amity);  //打什麼就是從哪裡開始//
    return 0;

}
