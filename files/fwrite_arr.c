#include<stdio.h>
#include<stdlib.h>

int arr[2][2];

int main(void)
{
	FILE *fp;
	int i,j;
	if((fp=fopen("santhosh","w"))==NULL)
	{
		printf("Error in santhosh file and notopening file\n");
		exit(1);
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("enter the elements in array\n");
			scanf("%d",&arr[i][j]);
	
		}
		
	}

	 fwrite(arr,sizeof(arr),1,fp);
	fclose(fp);
	return 0;
}


