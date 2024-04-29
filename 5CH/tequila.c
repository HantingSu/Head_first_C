#include<stdio.h>

typedef union {
  float lemon;
  int lime_pieces;
} lemon_lime;

typedef struct {
  float tequila;
  float cointreau;
  lemon_lime citrus;
} margarita;

void alhocal_c (margarita z)
{
margarita m = {2.0, 1.0, .citrus.lime_pieces=1};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n", m.tequila, m.cointreau, m.citrus.lime_pieces);
}

int main()
{
margarita m; 
alhocal_c (m);
}
