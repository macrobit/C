#include <stdio.h>

main() 
{
    int c, nl, nb, nt;

    nl = 0;
    nb = 0;
    nt = 0;

    while ((c = getchar()) != EOF)
    {
	if (c == '\n') //Count the number of lines 
	    ++nl;
	if (c == ' ')  //Count the number of spaces
	    ++nb;
	if (c == '\t') //Count the number of table symbols
	    ++nt;
     }    
    printf("\n%d\n%d\n%d\n", nb, nt, nl);
}
