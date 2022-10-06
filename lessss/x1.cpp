#include<stdio.h>
int main()
{
	void fun(int b[3][3]);
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	printf("转前:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
			if(j==2)
		printf("\n");
		}
		fun(a);
		return 0;
}
void fun(int b[3][3])
{
	int y,k,t;
	for(y=0;y<3;y++)
		for(k=0;k<y;k++)
		{
			t=b[y][k];
			b[y][k]=b[k][y];
			b[k][y]=t;
		}
		printf("转后:\n");
for(y=0;y<3;y++)
		for(k=0;k<3;k++)
			printf("%4d",b[y][k]);
		if(k==2)
			printf("\n");
}

