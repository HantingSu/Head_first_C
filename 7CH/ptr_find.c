#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void find();
int sport_no_bieber(char *s);
int sport_or_workout(char *s);
int ns_theater(char *s);
int arts_theater_or_dining(char* s);


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


    find(sport_no_bieber);
    find(sport_or_workout);
    find(ns_theater);
    find(arts_theater_or_dining);
    return 0;
}

void find( int (*match )(char* ) ){     //match是個指標變數的名稱，所以*要加在變數前面
    int i;
    puts("Search results:");
    puts("-----------------------------------");

    for(i=0;i<NUM_ADS;i++){
        if (match(ADS[i])){
        printf("%s\n",ADS[i]);
        }
    }
        puts("-------------------------------------");

}

int sport_no_bieber(char *s){
    return strstr(s,"sport") && ! strstr(s,"bieber");
}

int sport_or_workout(char *s){
    return strstr(s,"sport") || strstr(s,"workout");
}

int ns_theater(char *s){
    return strstr(s,"theater") && ! strstr(s,"NS");
}

int arts_theater_or_dining(char* s){        //*
    return strstr(s,"arts") || strstr(s,"theater") || strstr(s,"dining");
}
