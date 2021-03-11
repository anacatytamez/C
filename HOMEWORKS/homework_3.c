/*https://www.youtube.com/watch?v=9xLRPrX42uk  -> para entender mejor como funciona la sentencia "switch"*/
/*Raul me explico la parte del default*/
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int
main ()
{
  int c, numero = FALSE, comillas = FALSE, parentesis = FALSE;	/*contadores */
  while ((c = getchar ()) != EOF)
    {
      switch (c)		/*sentencia de la variable tipo int*/
	{
          case '(':
	  parentesis = TRUE;
	  putchar (c);
          break;
      
	case '[':
	  parentesis = TRUE;
	  putchar (c);

	case '{':
	  parentesis = TRUE;
	  putchar (c);

	case '<':
	  parentesis = TRUE;
	  putchar (c);
      
	case ')':
	  parentesis = FALSE;
	  putchar (c);
          break;
      
	case ']':
	  parentesis = FALSE;
	  putchar (c);

	case '}':
	  parentesis = FALSE;
	  putchar (c);

	case '>':
	  parentesis = FALSE;
	  putchar (c);


	default:
	  if (c != '.' && c != ';' && c != ':' && c != '!' && c != '?')
	    {
	      if (parentesis == TRUE || comillas == TRUE)
		{
		  putchar (c);
		}
	      else
		{
		  if (comillas == 2)
		    {
		      comillas = 0;
		    }
		  if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
		    {
		      numero++;
		    }
		  else
		    {
		      numero = 0;
		    }
		  if (numero == 1)
		    {
		      putchar ('X');
		    }
		  if (numero == 0)
		    {
		      putchar (c);
		    }
		}
	    }
	}
    }
  return 0;
}
