#include <stdio.h>
#include <conio.h>
#include <string.h>

main (void)
{
 int k=0, j=0;
 char str[50];

 puts ("Vvedite Vash text:");
 gets (str);
 puts ("Kolichestvo bukv 'i' v texte sledujushee:");
 while (str[k] != NULL)
 {
  if (str[k]=='i')
  j++;
  k++;
 }
 printf ("%d", j);

getch ();
return 0;
}