#include<stdio.h>
#include<unistd.h>

int main (int argc, char *argv[])
{
char *delivery = "";
int thick = 0;
int count = 0;
char ch;

while ((ch = getopt(argc, argv, "d:t"))!= EOF)
switch (ch){
case 'd':
delivery = optarg ;
break;
case 't':
thick = 1;
break;
default:
fprintf(stderr, "Unknow option: '%s'\n", optarg);
return 1;
}

argc -= optind;/*optind是argv的當前索引值*/
argv += optind;/*這樣讓argc變很小，argv變很大，所以什麼都掃不到，所以就可以跳過？*/
/*argc 目前等於[5]*/

if (thick)
puts("Think crust.");
if (delivery[0])
printf("To be delivery %s.\n", delivery);
puts("Ingredients:");
for (count = 0; count < argc; count++)
puts(argv[count]);
return 0;
}
