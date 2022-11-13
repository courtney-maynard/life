
void one (char ca[24] )
{
	printf(" addr of array param = %#x \n", &ca);
	printf(" addr of (ca[0]) = %#x \n", & (ca[0]));
	printf(" addr of (ca[1]) = %#x \n", &(ca[1]));
	printf(" ++ca = %#x \n\n", ++ca);
}
