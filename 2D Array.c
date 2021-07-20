#include<stdio.h>
main()
{
	int arr[3][3],i,j,count;
	count=0;
	int *p;
	p=&arr;
	printf("Enter The Elements of the 3x3 array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			
		}
	}
	printf("HERE IS YOUR MATRIX:\n");
	for(i=0;i<9;i++)
	{
		count++;
		count%3==0?printf("%d\n",*(p+i)):printf("%d\t",*(p+i));
	}
	printf("SUM OF DIAGONAL ELEMENTS: %d+ %d+ %d: %d",*p,*(p+4),*(p+8),(*p+*(p+4)+*(p+8)));
}
