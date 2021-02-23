#include<stdio.h>
#include<stdlib.h>

int arr[2][2];
int main(void)
{
	FILE *fp;
	int i,j;
	fp=fopen("santhosh", "r");
	if(fp==NULL)
	{
		printf("ERROR IN FILE \n");
		exit(1);
	}

while(fread(&arr,sizeof(arr),1,fp)==1)
{
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t\n",arr[i][j]);
		}
	}
fclose(fp);
return 0;
}
}


