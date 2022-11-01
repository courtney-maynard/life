#include <stdio.h>
#include <stdlib.h>

int array_func_sh(int, int, int);

main()
{
        /* creating variables that will be found in the data segment*/
        int i;
        int x;
        x = 24;
        int y;
        y = 36;

        int z = x+y;

        /*creating a pointer to allocate heapspace */
        void *w = malloc(24);

	/* making the stack grow by calling functions */
	int arrayfuncoutput = array_func_sh(x, y, z);
       
	/* printing the locations of all the components */
        printf("The stack top is near %p\n", &i);
        printf("\nThe value of z is %d\n", z);
        printf("\nThe location of x is %p\n", &x);
        printf("\nThe location of y is %p\n", &y);
        printf("\nThe location of z is %p\n", &z);
        printf("\nThe location of main, part of the text segment, is %p\n", main);
        printf("\nThe location of w, which provides heap space, is %p\n", w);
	
	printf("\nThe value outputted from the function array_func_sh is %d\n", arrayfuncoutput);
        
	/*return statement to end the main */
        return 0;
}

int array_func_sh(int x, int y, int z)
{
	/*declaring some large local arrays*/
	int large_array_one[10000];
        int large_array_two[1000];

	return x + y + z;	
}
