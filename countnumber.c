#include <stdio.h>

main()
{
    long nc ;
    /*
    while (getchar() != EOF)
	++nc; */

    for (nc = 0; getchar() != EOF; ++nc);

    printf("\n%ld\n", nc);

} 
