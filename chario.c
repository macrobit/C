#include <stdio.h>

main()
{
    int c;
    printf("debug\n");
    while ((c = getchar()) != EOF) {
	putchar(c);
	printf("%d ", c);
    }
    printf("%d\n", c);
}
