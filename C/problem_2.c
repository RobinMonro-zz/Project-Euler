//This prints the sum of all even values of the Fibonacci sequence that do not exceed 4 million
//completed 24th June 2016
//by Robin Monro

#include <stdio.h>

int main(){
   int fibValue = 2;
   int lastVal = 1;
   int holder;
   int sum = 0;
   
   while(fibValue < 4000000){
      if(fibValue % 2 == 0){
         sum += fibValue;
      }
      holder = fibValue;
      fibValue = fibValue + lastVal;
      lastVal = holder;
   }
   
   printf("The sum of all even values in the Fibonacci sequence less than 4 million is: %d\n", sum);   
   
   return(0);
}
