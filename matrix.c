#include<stdio.h>
main()
{
	int matrix[3][3];
	int i,j;
	int l,m,sum;
	
	for(i=0;i<3;i++)
	
	
	for(j=0;j<3;j++)
	{
		printf("Enter element at %d%d position", i+1,j+1);
		scanf("%d", &matrix[i][j]);
	}
	for(i=0;i<3;i++){
	
	for(j=0;j<3;j++)
	{
		printf("%d",matrix[i][j]);
	}



	printf("\n");
	
	}
	for(l=0;l<i;l++)
	{
		for(m=0;m<j;m++)
		{
			if (l==m)
			{
				sum=sum+matrix[l][m];
			}
		}
	}
	printf("The sum of diagonal elements of the matrix is %d\n", sum);
	return 0;
}
