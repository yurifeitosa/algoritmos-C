#include <stdio.h>
int main()
{
    int n,r,i;
    for (n=1;n<=10;n++)
    {
	printf ("\nTabuada do: %d\n",n);
	for (i=1;i<=10;i++)
    {
        r=n*i;
        printf ("%d x %d = %d\n",n,i,r);
    }
 }
}
