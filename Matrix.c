#include<stdio.h>
main()
{
	int a,b,c,d,i,j,k,op;
	printf("Enter size of matrix AxB , CxD\n");
	printf("A = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	printf("C = ");
	scanf("%d",&c);
	printf("D = ");
	scanf("%d",&d);
	int M1[a][b],M2[c][d];
	printf("\n*----------------------------------------*\n\nEnter Matrix 1 %dx%d\n",a,b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Enter Matrix 2 %dx%d\n",c,d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&M2[i][j]);
		}
	}
	printf("\n*----------------------------------------*\n\nSelect option\n  1 : +\n  2 : -\n  3 : *\n");
	scanf("%d",&op);
	printf("\n*----------------------------------------*\n\n");
	switch(op)
	{
		case 1 : {
					if(a!=c||b!=d)
						printf("Error matrix cannot be plus");
					else
					{
						printf("Sum of matrix is\n\n");
						for(i=0;i<a;i++)
						{
							printf("[");
							for(j=0;j<b;j++)
							{
								printf("\t%d",M1[i][j]+M2[i][j]);
							}
							printf("\t]\n");
						}
					}
					break;
				 }
		case 2 : {
					if(a!=c||b!=d)
						printf("Error matrix cannot be minus");
					else
					{
						printf("Minus of matrix is\n\n");
						for(i=0;i<a;i++)
						{
							printf("[");
							for(j=0;j<b;j++)
							{
								printf("\t%d",M1[i][j]-M2[i][j]);
							}
							printf("\t]\n");
						}
					}
					break;
				 }
		case 3 : {
					if(b!=c)
						printf("Error matrix cannot be multiply");
					else
					{
					    printf("Multiply of matrix is\n\n");
						int M3[a][d];
						for(i=0;i<a;i++)
						{
							printf("[");
							for(j=0;j<d;j++)
							{
								M3[i][j]=0;
								for(k=0;k<c;k++)
									M3[i][j]+=M1[i][k]*M2[k][j];
								printf("\t%d",M3[i][j]);
							}
							printf("\t]\n");
						}
					}
					break;
				 }
		default: {
					printf("Error");
				 }
	}
}
