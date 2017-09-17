#include <stdio.h>

int main()
{
	int row=0,inc=0;
	for(int i=1; i<11; i++)
	{
		if(row>inc++)
			printf("%d",i);
		else
		{
			row++;
			inc=0;
			printf("%d\n",i);
		}
	}
}


