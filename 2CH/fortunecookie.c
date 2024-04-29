#include <stdio.h>
int  main ()
{fortune_cookie();
}
void fortune_cookie(char msg[])
{
printf("Message reads: %s\n",msg);
printf("msg occcupies %i bytes\n", sizeof(msg));
}
