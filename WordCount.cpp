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
		//if((*ch==" ")||(*ch==","))
		if((ch!=32)||(ch!=44))
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
/*
void FileRead(char filename[]){

FILE* fp;//必须要定义的指针

int i=0，counter=0；

int ch;

char str[14];//用于.txt文件按词读取，即暂存器

fp = fopen(filename, "r");//打开文件夹

do{

//读出词

do

{

ch=fgetc(fp);

if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))//只有ch为字母时才录入

{

str[counter]=(char)ch;

counter++;

} }while(ch!='.'&&ch!='{'&&ch!='}'&&ch!='('&&ch!=')'&&ch!='['&&ch!=']'&&ch!=32&&ch!=59&&ch!=-1); //上为判定是否录入一完整词的判定结束条件

printf("str:%s\n",str);

/*

这中间可以编写一些关于处理字符串的操作

*/

//清空暂存的数组
/*
for(i=0;i<14;j++)

str[i]=0;

counter=0;

}while(ch!=EOF);//当文件读完时结束

}

void main()

{

char filename1[12];

printf("请输入该文件名");

scanf("%s",&filename1);

FileRead(filename1);

}*/
