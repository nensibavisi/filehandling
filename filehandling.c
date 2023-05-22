#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p =fopen("nensi bavisi-c.txt","r");
	
	if(p== NULL)
	{
		printf("Coude not open file");
	}
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
