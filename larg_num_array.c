/*
 * larg_num_array.c
 *
 *  Created on: Dec 16, 2019
 *      Author: navya
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
int loadarr[]={5,10,-32,78,256,1093,234,-22};
size_t L=sizeof(loadarr)/sizeof(int);
printf(" elements of array are");

int iLargest(int *arr,size_t L)
{
int i;
for(i=1;i!=L;++i)
{
if(arr[0]<arr[i])
{
arr[0]=arr[i];
}
}
return arr[0];
}
for(int i=0;i!=L;++i)
{
printf("\n%d",loadarr[i]);
}
int largest=iLargest(loadarr,L);

printf(" \nlargest element of array is %d",largest);
return 0;
}
