#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int decode(string a);
int encode(char * a);
int charToInt(char c);
int main(int argc,char **argv)
{
	decode("/tmpdata/Workspace/path_encryption");
	encode("47_116_109_112_100_97_116_97_47_87_111_114_107_115_112_97_99_101_47_112_97_116_104_95_101_110_99_114_121_112_116_105_111_110_");

	return 0;
}

int decode(string a)
{

	string b="";
	for(int i=0;i<a.length();i++)
	{
		b+=to_string((int)a[i]);
		b+="_";
	}
	//123_123_34_34_45_56_45
	printf("decoded_path=%s\n",b.c_str());
	printf("length is =%d\n",b.length());
	//cout<<b<<endl;



}


int charToInt(char c)
{
	int num=0;
	num= c - '0';
	return num;
}

int encode(char *a)
{
	char new_str[1024]="";
	int val=0;
	string pass="";
	char c;
	for(int i=0;i<strlen(a);i++)
	{


		int k=charToInt(a[i]);
		if(k<=9 && k>=0)
		{
			val=val*10+k;
		}
		else
		{
			pass+=(char)val;
			val=0;
		}



	}
	printf("encoded_path=%s\n",pass.c_str());

}
