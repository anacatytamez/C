#include <stdio.h>
#include <stdlib.h>
#define MAX 5 /*cantidad de productos que se pueden registrar*/

struct Ficha
{
char cd;
char Snom[20];
 int cn;
 int c;
} 
 
 

      nom,Inv[MAX];

void menu1(void)
{
    
       printf("\n");
       printf("\n");
       printf("Ingrese el producto (6 caracteres):\n");
     scanf(" %[^\n]",nom.Snom);
       printf("Cantidad de producto (unidades, no por kilos):\n");
     scanf("%d",&nom.cn);
       printf("Valor del producto individual:\n");
     scanf("%d",&nom.c);
       


for(char i=0; i<MAX; i++){
    if(Inv[i].cd==0){
         
       Inv[i]=nom;
       Inv[i].cd=i+1;
         
       printf(" Codigo generado de manera automatica, es: %i \n",i+1);
       i=MAX;}
     
else if (i==MAX-1)
printf("Registro  lleno\n");}}

        

void menu2(void){
     
   char proimp=0;
    printf("\n");
     printf("\n");
      printf("Ingrese el codigo del producto a imprimir:\n");
       scanf("%d",&proimp);
   
if(proimp>0 && proimp<=10){
   proimp--;
   printf(" |--| Codigo |--| Nombre |--| Cantidad |--| Costo |--| \n");
   printf(" |--| 0000%d  |--| %s |--|   %2d     |--|  %2d   |--|\n", Inv[proimp].cd, Inv[proimp].Snom, Inv[proimp].cn, Inv[proimp].c);
   }else 
       printf("El registro no existe\n");
}

void menu3(void)
{
   printf("\n");
   printf("\n");
    printf("|--| Codigo |--| Nombre |--| Cantidad |--| Costo |--|\n");
      for(int i=0;i<MAX;i++){
        
        printf("|--| 0000%d  |--| %s |--|   %2d     |--|  %2d   |--|\n", Inv[i].cd, Inv[i].Snom, Inv[i].cn, Inv[i].c);
		 }
}

void menu4(void)
{
     char vainv;
     float Valor;
    
    printf("\n");
     printf("\n");
      printf("Ingrese el codigo del producto a imprimir su valor de inventario\n");
       scanf("%d", &vainv);
     
     if(vainv>=0 && vainv<=10){
   
    vainv--;
    
     Valor = Inv[vainv].c*Inv[vainv].cn;
       printf("El valor de inventario de dicho producto %d es %6.2f \n",vainv+1, Valor); }
       
       else
        printf("El registro no existe\n");}
        

void menu5(void){
    
    printf("\n");
     printf("\n");
      for(int i=0;i<MAX;i++){
              
        float vIn;
         vIn = Inv[i].c*Inv[i].cn;
           printf("Estos son los valores de inventario de tus productos %d es %6.2f \n",Inv[i].cd ,vIn);}
           
}

main ()
{
    char ch;
    while(true)
    {
            printf("\n");
            printf("\n");
            
            
            printf(" ----DULCES DETALLES---- \n");
             printf("\n");
            printf(" -------MENU------- \n");
             printf("\n");            
            printf("Para ingresar un producto pulse [1]\n");
             printf("\n");
            printf("Para imprimir un producto pulse [2]\n");
             printf("\n");
            printf("Para imprimir todos los productos pulse [3]\n");
             printf("\n");
            printf("Para imprimir el valor de inventario de un producto pulse[4]\n");
             printf("\n");
            printf("Para imprimir el valor del inventario total pulse [5]\n");
             printf("\n");
            printf("¿Quiere salirse?, pulse [6]\n");
            scanf( "%d", &ch );
            
        switch (ch)
        {
            case 1:
                menu1();
                break;
            case 2:
                menu2();
                break;
            case 3:
                menu3();
                break;
            case 4:
                menu4();
                break;
            case 5:
                menu5();
                break;
            case 6:
                exit(0);
                break;
        }
    }
system("PAUSE");
}
