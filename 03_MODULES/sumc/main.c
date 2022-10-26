// compute sum of consecutive integers from 1 to N (inclusive)
// git will track everything else!

#include <stdio.h>
#include "mylib.h"

int main(int argc, char *argv[])
{
 int N;
 long result;

 //ask for number
 printf("Enter a number:\n");
 scanf("%d", &N);
 
 //compute result
 result = cumulative_sum(N);

 //display the result
 printf("The sum from 1 to %d (inclusive) is %ld\n", N, result);
 
 return 0;
}
