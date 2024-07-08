#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void find();

    int NUM_ADS=7;
    char *ADS[]={
    "William: SBM GSOH likes sports, TV, dining",
    "Matt: SWM NS likes art, movie, theater",
    "Luis: SLM ND likes books, theater, art",
    "Mike: DWN DS likes trucks, sports and bieber",
    "Peter: SAM like chess, working out and art",
    "John: SJM likes sports, Movies and theater",
    "Jed: DBM likes theater, books and dining"
    };
int main(void){
    find();
    return 0;
}

void find(){
    int i;
    puts("Search results:");
    puts("-----------------------------------");

    for(i=0;i<NUM_ADS;i++){
        if (strstr(ADS[i],"spo") && ! strstr(ADS[i],"bieber")){
        printf("%s\n",ADS[i]);
        }
    }
        puts("-------------------------------------");

}
