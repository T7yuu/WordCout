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

FILE* fp;//����Ҫ�����ָ��

int i=0��counter=0��

int ch;

char str[14];//����.txt�ļ����ʶ�ȡ�����ݴ���

fp = fopen(filename, "r");//���ļ���

do{

//������

do

{

ch=fgetc(fp);

if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))//ֻ��chΪ��ĸʱ��¼��

{

str[counter]=(char)ch;

counter++;

} }while(ch!='.'&&ch!='{'&&ch!='}'&&ch!='('&&ch!=')'&&ch!='['&&ch!=']'&&ch!=32&&ch!=59&&ch!=-1); //��Ϊ�ж��Ƿ�¼��һ�����ʵ��ж���������

printf("str:%s\n",str);

/*

���м���Ա�дһЩ���ڴ����ַ����Ĳ���

*/

//����ݴ������
/*
for(i=0;i<14;j++)

str[i]=0;

counter=0;

}while(ch!=EOF);//���ļ�����ʱ����

}

void main()

{

char filename1[12];

printf("��������ļ���");

scanf("%s",&filename1);

FileRead(filename1);

}*/
