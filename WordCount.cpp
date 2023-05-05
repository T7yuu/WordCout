#include<stdio.h>
#include<string.h>
int main()
{
	char jud[3];
	char text[20];
	int countStr=0;
	int countWord=1;
	char ch;
	scanf("%s %s",jud,text);
	FILE * f = fopen (text, "r+");
	if(f == NULL)
		perror("fopen");
		
	while((ch=fgetc(f))!=EOF)
	{
		countStr++;
		if(strcmp(ch," ")==0||strcmp(ch,",")==0)
			countWord++;
	}

	if(strcmp(jud,"-c")==0)
	{
		printf("%d",countStr);
	}
	else if(strcmp(jud,"-w")==0)
		printf("%d",countWord);
	
	fclose(f);
	f=NULL;
}
