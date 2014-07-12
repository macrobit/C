/* Copy all the input message to the output message, meanwhile substituting the tab with '\t', the backspace with '\b', the backslash with '\\'. That means the output will show all the information including the listed operators.*/

#include <stdio.h>
main()
{
    int c;
    c == 0;
    while ((c = getchar()) != EOF )
    {
	if (c == '\t')
	{
   	    putchar('\\');
	    putchar('t');
	}
	else if (c == '\b')
        {
	    putchar('\\');
	    putchar('b');
	}
        else if (c== '\\')
	    putchar('\\');
        else 
     	    putchar(c);
    }
}
