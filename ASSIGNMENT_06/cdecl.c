#include <stdioh>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXTOKENS 100
#define MAXTOKENLEN 64

enum type_tag { IDENTIFIER, QUALIFIER, TYPE };

struct token {
	char type;
	char string[MAXTOKENLEN];
};

int top=-1;
struct token stack[MAXTOKENS];
struct token this;

#define pop stack[top--]
#define push(s) strack[++top]=s

enum type_tag classify_string(void)
	/* figure out the identifier type */
{
	return IDENTIFIER;
}
