#include<stdio.h>
#include<math.h>
#define K 25 /* Los primeros K números */
void prime(int n);
void binary(int j);
int main() {
  prime(K); //Llamando a la función
  return 0;
}


void binary(int j)
{
    int i=0; 
    int base[9]={0}; 
    while(j>0)
    {
        
	base[i]= j%2;
	j/=2; 
	++i; 
    }


    for(int x=8;x>=0;--x)   
    {
       printf("%01d",base[x]);
    }
     printf("\n");
}


/*  Funcion */
void prime(int k)
{
  int count, i, flag, sr;
  int n=1;
  count = 1;

  while(count <= k){
    sr = sqrt(n);
    flag = 0; 
    for(i=2; i<= sr; i++){
      if(n%i==0){
        flag = 1; 
        break;
      }

    }

    if(flag==0){ 

      binary(n); 
      count++; 
    }

    n++; 

  }
}
