#include "<main.h>"

/**
 *_strien - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] i = '\0' /*count character of string*/
{
i++;
}

return(i);
}

/**
*str_concat – back a pointer
*@s1:  Array one
@s2:  Array two
*Return: Always an array dynamic
*/
Char *str_concat(char *s1,  char *s2)
{
 Char *dst;
Unsigned  int I, j, size;

/*if the array is empty*/
If (s1 == NULL)
	S1 = **;
/*count size total*/
Size  = (_strlen(s1) + _strlen(s2) + 1);

/*malloc*/
dst = (char *) malloc(size * sizeof(char));

if (dst ==0)
{
	Return(NULL);
}
/*Concatenate arrays*/
For (1 = 0; *(s1 + 1) ! = ‘\0’; 1++)
	*(dst + i) = *(s1 + i);
For (j = 0; *(s2 +j) != ‘\0’; j++)
{
	*(dst +i) = *(s2 +j);
	1++;
}
return (dst) ;
}

