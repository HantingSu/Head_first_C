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
 
void alhocal_a (margarita x)
{
margarita m = {2.0, 1.0, .citrus.lemon=2};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measure of juice\n", m.tequila, m.cointreau, m.citrus.lemon);
}

void alhocal_b (margarita y)
{
margarita m = {2.0, 1.0, {0.5}};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measure of juice\n", m.tequila, m.cointreau, m.citrus.lemon);
}

void alhocal_c (margarita z)
{
margarita m = {2.0, 1.0, {.lime_pieces=1}};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n", m.tequila, m.cointreau, m.citrus.lime_pieces);
}

void alhocal_d (margarita d)
{
margarita m = {2.0, 1.0, {.lime_pieces=2}};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n", m.tequila, m.cointreau, m.citrus.lime_pieces);
}

int main()
{
margarita  m; 
alhocal_a (m);
alhocal_b (m);
alhocal_c (m);
alhocal_d (m);
return 0;
}
