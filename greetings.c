/*
 * greetings.c
 *
 *  Created on: Nov 25, 2019
 *      Author: navya
 */
#include<stdio.h>
#include<string.h>


int main()
{
	char str[20]="greetings,";
	char nam[20];
	int length,length1,i;
	printf("enter user name \n");
	scanf("%s",nam);
	strcat(str,nam);
	length=strlen(nam);
	length1=length+27;
	for(i=0;i<=length1;i++)
	{
		printf("*");

	}
	printf(" \n\n*\t\t\t\t *\n\n*\t");
	printf(" %s",str);
	printf("\t*\n\n*\t\t\t\t *\n\n");
	for(i=0;i<=length1;i++)
	{
		printf("*");
	}

}

