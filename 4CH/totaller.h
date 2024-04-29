#include <stdio.h>
short tax_percent;
float total;
short count;
float add_with_tax(float f)
{
float tax_rate = 1 + tax_percent / 100.0;
/* And what about the tip? Voice lessons ain't free */
total = total + (f * tax_rate);
count = count + 1;
return total;
}
