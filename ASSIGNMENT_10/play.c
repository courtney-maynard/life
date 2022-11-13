
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

void three (){
	char ga[] = "abcdefghijklmnopqrstuvwxyz";
	one (ga);
	two (ga);
}
