#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	int ch;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	fp2=fopen("output.txt","r");
	int ft,i=0;
	fseek(fp2,0,SEEK_END);
	ft=ftell(fp2);
	while(i<ft)
	{
		i++;
		fseek(fp2,-i,SEEK_END);
		printf("%c",fgetc(fp2));
	}
	fclose(fp2);
	return 0;
}
