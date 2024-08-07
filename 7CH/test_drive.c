#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare_scores(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a - b;
    }

int compare_scores_desc(const void* score_a, const void* score_b)
{
   // int a = *(int*)score_a;
   // int b = *(int*)score_b;
    return compare_scores(score_b,score_a);       //try to use "compare_scores" inverse
}

typedef struct {
    int width;
    int height;
} rectangle;

int compare_areas(const void* a, const void* b)
{
    rectangle* ra = (rectangle*) a;
    rectangle* rb = (rectangle*) b;
    int area_a = (ra->width) * (ra->height);
    int area_b = (rb->width) * (rb->height);
    return area_a - area_b;
}

int compare_names(const void* a,const void* b)
{
    char** sa = (char**) a;  //後面有無括弧差別,正確的做法是一定要把(char**)括起來
    char** sb = (char**) b;
    printf("strcmp is %d\n",strcmp(*sa,*sb));
    return strcmp(*sa,*sb);
}

int compare_areas_desc(const void* a,const void* b)
{
    return compare_areas(b,a);
}

int compare_names_desc(const void* a, const void* b)
{
    return compare_names(b,a);
}


int main(void)
{
    int socres[] = {543,323,32,554,11,3,112};
    int i;
    qsort(socres, 7, sizeof(int), compare_scores_desc);
    puts("There are the scores in order:");
    for(i = 0; i < 7; i++){
        printf("Score = %i\n",socres[i]);
    }
    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    qsort(names, 4, sizeof(char*), compare_names);
    puts("These are the names in order:");
    for(i = 0; i < 4; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}


