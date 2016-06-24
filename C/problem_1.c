//this code prints the sum of all multiples of 3 and 5 less than 1000
//completed 24th June 2016
//by Robin Monro

#include <stdio.h>

int main(){
   int sum = 0;
   for(int i = 3; i < 1000; i += 3){
      sum += i;
   }
   for(int j = 5; j < 1000; j += 5){
      sum += j;
   }
   
   printf("Sum of all multiples of 3 and 5 less than 1000 is: %d\n", sum);
   
   return(0);
}
