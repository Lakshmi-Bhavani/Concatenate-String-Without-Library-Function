#include<stdio.h>
main()
{
	char s1[100],s2[100];
	int i,j,len=0;
	printf("Enter the string s1");
	gets(s1);
	printf("Enter a string s2");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	len++;
	for(j=0;s2[j]!='\0';len++,j++)
	{
		s1[len]=s2[j];
	}
	s1[len]='\0';
	printf("Concatenated String is %s",s1);
}
