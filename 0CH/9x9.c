#include<stdio.h>
int main ()
{
int  A , B , ans;
while(ans < 100 || ans > -100){
printf("Enter your first number.\n");
scanf("%i", &A);
printf("Enter your second number.\n");
scanf("%i", &B);
ans = (A * B);
if(ans < 100)
printf("Ans is %i\n", ans);
else if (ans > 100 || ans < - 100)
printf("ans is %i\n", ans );
}
return 0;
}
