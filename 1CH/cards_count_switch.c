#include <stdio.h>
#include <stdlib.h>
int main()
{
char card_name[3];
puts ("Enter the card_name: ");
scanf("%2s", card_name);
int val = 0 ;
switch (card_name[0]){
case 'J':
case 'Q':
case 'k':
val = 10;
    break;
case 'A':
val = 11;
    break;
default:
   val = atoi(card_name);
}
/* Chack if the value is 3 to 6 */
 if ((val > 2)&&(val < 7))
  puts("Count has gone up");
/* Otherwise cheak if the cards was 10,J,Q or K */
  else if (val == 10)
  puts("Count han gone down");
return 0;
}
