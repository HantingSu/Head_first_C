#include<stdio.h>

typedef struct  {
  const char *name;
  const char *species;
  int teeth;
  int age;
} which_fish;

void catalog(which_fish f)
{
printf("%s is a %s with %i teeth. He is %i\n",
 f.name, f.species, f.teeth, f.age);
}

void label(which_fish f)
{
printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
f.name, f.species, f.age, f.teeth);
}

int main()
{
which_fish f = {"Snappy", "Piranha", 69, 4};
catalog(f);
label(f);
return 0;
}
