#include <stdio.h>
main()
{
    float c,f;
    printf ("Digite uma temperatura em Fahrenheit:");
    scanf ("%f",&f);
    c=(f-32)*(5.0/9);
    printf ("A temperatura em graus Celsius e %f ",c);
    if (c<17)
    {
        printf ("Frio");
    }
    else if (c>=17 && c<=28)
    {
        printf ("Agradavel");
    }
    else
    {
        printf ("Calor");
    }
}

