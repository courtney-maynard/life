// compute sum of consecutive integers from 1 to N (inclusive)
// git will track everything else!

#include <stdio.h>

long cumulative_sum(int N); /* function prototype */

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

long cumulative_sum(int N)
{
 long accumulator;

 if (N == 0)
	 accumulator = 0;
 else
	 accumulator = N + cumulative_sum(N-1);


 return accumulator;
}
