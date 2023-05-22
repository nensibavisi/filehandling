#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p =fopen("nensi bavisi-c.txt","w");
	
	if(p==NULL)
	{
	     printf("coude not open file");
	}
	else
	{
		printf("i like to learn c languge:-");
		gets(data);
		fputs(data,p);
		printf("data enter succesfully");
		
	}
	fclose(p);
}
