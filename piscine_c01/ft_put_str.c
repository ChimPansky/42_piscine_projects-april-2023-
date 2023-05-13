#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *p_str)
{
	char *mystr;
	
	mystr = p_str;
	//char c;
	int i = 0;
	//while (i < 20)
	while(mystr[i] != '\0')
	{
		
		printf("%c", mystr[i]);
		//write(1, *mystr, 1);
		//mystr++;
		i++;
	}
/*
	mystr = p_str;
	if(&mystr == 0)
		printf("ascii zero detected\n");
	write(1, mystr, 1);
	printf("ascii: %d\n",*mystr);
	mystr++;
	write(1, mystr, 1);
	mystr++;
	write(1, mystr, 1);
	
	if(&mystr == 0)
		printf("ascii zero detected\n");
		*/
}

int main()
{
	//char *x_str;

	//x_str = "abcdefg";

	char *x_str;

	*x_str = "abcde";
	
	ft_putstr(x_str);
	/*
	char *ptrx_str;
	
	ptrx_str = 
	x_str2 = "abcde";

	ft_putstr(x_str2);
	char c;
	char *cptr;
	int i;
	float f;
	char str[5];
	int *intptr;
	char *strptr;

	c = 'A';
	i = 5;
	f = 6,03;
	str[0] = 'H';
	str[1] = 'E';
	str[2] = 'L';
	str[3] = 'L';
	str[4] = 'O';
	intptr = &i;
	strptr = &str;

	printf("val of c: %c\n", c);
	printf("intval (ascii) of c: %d\n", c);
	printf("val of cptr (address): %p\n", cptr);
	printf("val of i: %d\n", i);
	printf("val of i: %d\n", i);
	printf("val of f: %f\n", f);
	printf("val of str: %s\n", str);
	printf("val of intptr: %p\n", intptr);
	printf("val of int pointed to: %d\n", *intptr);
	printf("val of strtptr: %p\n", strptr);
	printf("val of str pointed to: %c\n", *strptr);
	printf("str[1] %d\n", str[1]);
	printf("str[2] %d\n", str[2]);
	printf("str[3] %d\n", str[3]);
	printf("str[4] %d\n", str[4]);
	printf("str[5] %d\n", str[5]);
	printf("str[5] == backslash-zero %d\n",str[5]=='\0');	
	printf("str[4] == backslash-zero %d\n",str[4]=='\0');	
	strptr++;
	printf("val of str pointed to: %c\n", *strptr);	
	*/
	
	
	
}
