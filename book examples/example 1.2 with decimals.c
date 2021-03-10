#include <stdio.h> 

int main() {
  float fahr, celsius; 
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  while (fahr <= upper) {
    celsius = 5.0 * (fahr - 32) / 9.0;
    printf("%3.1fF\t=\t%6.2fC\n", fahr, celsius);
    fahr += step;
  }
 
}
