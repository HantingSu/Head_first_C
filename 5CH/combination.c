#include<stdio.h>

typedef struct {
  const char *description;
  float value;
} swag;

typedef struct {
  swag *swag;
  const char *sequence;
} combination;

typedef struct {
  combination numbers;
  const char *make;
} safe;

void password (safe s)
{
printf("contens = %s\n",s.numbers.swag->description);
}

void test (safe s)
{
printf("A = %s\n", s.numbers.sequence);
}

int main()
{
swag gold = {"GOID!", 1000000.0};
combination numbers = {&gold, "6502"};
safe s = {numbers , "RAMACON250"};
password(s);
test (s);
return 0;
}
