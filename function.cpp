#include<iostream>
#include<ctime>
#include <fstream>
#include<string>
#include<stdlib.h>
#include "head.h"
using namespace std;

int Interaction::getright()			//�û������� 
{
	return right;
}
int Interaction::getwrong()
{
	return wrong;
}
Interaction::Interaction()
{
	right=0;
	wrong=0;
}
void Interaction::setlanguage()
{
	cin>>language;
}
void Interaction::Statistics(int j)
{
	if(j==1)
		right++;
	else
		wrong++;
}

void Random::RandomNumber()		//�����ʽ��
{
	srand(time(0));
	int j;
	for(j=1;j<=4;j++)
	{
		num[j]=rand()%10;
	}
}
void Random::Randomoperation()
{
	srand(time(0));
	int choose,j;
	for(j=1;j<=3;j++)
	{
		choose=rand()%4;
    	switch(choose)
		{
          	case 0:operation[j]='+';break;
        	case 1:operation[j]='-';break;
			case 2:operation[j]='*';break;
			default:operation[j]='/';
		}
	}
}
int Random::Randomexpression()
{
	srand(time(0));
	type=rand()%5;
}

void Calculate::calculateresult(int j)			//������
{
    switch(j)
	{
       	case 0:result=1;break;
      	case 1:result=1;break;
		case 2:result=1;break;		//�����㷨���֣����ݲ�ͬ���������м���
	}
	
}

bool Judge::Judgeend(int j,int n)			//�ж���
{
	if(j==n)
		return false;
	else
		return true;
}
bool Judge::Judgeresult(float res)
{
	int test;
	test=res;
	if(test==res)
		return true;
	else
		return false;
}
bool Judge::Judgeanswer(int ans,float result)
{
	if(ans==result)
		return true;
	else
		return false;
}

//�ļ���д��
void File::Language()		//���������ļ�
{
	int i=0;
	ifstream icin;
	icin.open("(inter.language).txt");
	for(i=0;i<=4;i++)
	{
		icin>>s[i];
	}
	infile.close(); 
}

void File::WriteFile(int n)			//����Ϣ����ָ���ļ�
{
	ofstream ocout;
	ocout.open("out.txt",ios::app);
	ocout<<n<<endl; 
	ocout.close();
}
