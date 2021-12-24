#include<stdio.h>
main()
{
	char x;
	printf("enter x");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    case 'A':
	    case 'E':
	    case 'I':
	    case 'O':
	    case 'U':
	    	     printf("vowel");
        break;
	default: printf("x is a consonant");
}
}
