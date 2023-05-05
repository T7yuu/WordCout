#include<stdio.h>
#include<string.h>
int main()
{
	char jud[3];
	char text[20];
	int countStr=0; //字符数 
	int countWord=1; //单词数 
	char ch;
	scanf("%s %s",jud,text);
	FILE * f = fopen (text, "r+");
	if(f == NULL)
		perror("fopen");
		
	while((ch=fgetc(f))!=EOF)  //逐个读取文件内字符 
	{
		countStr++;  //字符数+1 
		//if((*ch==" ")||(*ch==","))
		if((ch==32)||(ch==44))    //判断到有空格或者逗号的时候，就即将读取到一个单词，单词数+1 
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

