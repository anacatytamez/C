#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main() 
{
  int c, numero= FALSE, comillas = FALSE, parentesis = FALSE;/*contadores*/ 
  while ((c = getchar()) != EOF) 
  {
      switch(c)/*sentencia*/
      {
      
      case '[':
          parentesis = TRUE;
          putchar(c);
          break;
      case '(':
          parentesis = TRUE;
          putchar(c);
          break;
      case '{':
          parentesis = TRUE;
          putchar(c);
          break;
      case '<':
          parentesis = TRUE;
          putchar(c);
          break;
      case ')':
          parentesis = FALSE;
          putchar(c);
          break;
      case ']':
          parentesis = FALSE;
          putchar(c);
          break;
      case '}':
          parentesis = FALSE;
          putchar(c);
          break;
      case '>':
          parentesis = FALSE;
          putchar(c);
          break;
      
      default:
        if(c!='.'&&c!=';'&&c!=':'&&c!='!'&&c!='?'&&c!='-'&&c!='_')
        {
            if (parentesis == TRUE||comillas == TRUE) /*me ayudo raul*/
            {
            putchar(c);
            }
            else
            {
                if (comillas == 2)
                {
                    comillas = 0;
                }
                if (c =='1'||c =='2'||c =='3'||c =='4'||c =='5'||c =='6'||c =='7'||c =='8'||c =='9'||c =='0')
                {
                    numero++;
                }else
                {
                  numero = 0;
                }
                if (numero == 1)
                {
                    putchar('X');
                }
                if (numero == 0)
                {
                    putchar(c);
                }
            }
        }




        }
    }


    return 0;
  }
