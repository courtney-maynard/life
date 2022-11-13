char ga[] = "abcdefghijklmnopqrstuvwxyz";

void one (char ca[24] )
{
	printf(" addr of array param = %#x \n", &ca);
	printf(" addr of (ca[0]) = %#x \n", & (ca[0]));
	printf(" addr of (ca[1]) = %#x \n", &(ca[1]));
	printf(" ++ca = %#x \n\n", ++ca);
}

void two (char *pa )
{
	printf(" addr of pointer param = %#x \n", &pa);
	printf(" addr of (pa[0]) = %#x \n", &(pa[0]));
	printf(" addr of (pa[1]) = %#x \n", &(pa[1]));
	printf(" ++pa = %#x \n", ++pa);
}

main() 
{
	char ca[24];
	char *pa;

	one(ca);
	two(pa);
	
	one(ga);
	two(ga);
	
	printf(" addr of global array = %#x \n", &ga);
        printf(" addr (ga[0]) = %#x \n", &(ga[0]));
        printf( " addr (ga[1]) = %#x \n\n", &(ga[1]));
}
