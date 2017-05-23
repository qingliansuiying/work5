#include<iostream>
#include<ctime>
#include <fstream>
#include<string>
#include<stdlib.h>
#include "head.h"
using namespace std;

int main()
{
	int i=0,sum=0;
	Interaction inter;
	File file;
	Calculate caculate;
	Random random;
	Judge judge;
	cout<<"Welcom!"<<"Please choose the language you need:"<<endl;		//进行语言选择
	cout<<"1.中文"<<"2.英文"<<endl;
	inter.setlanguage();
	file.Language;	
	cout<<s[0];
	cin>>sum;
	file.WriteFile(sum);
	while(judge.Judgeend(i++,sum))
	{
		random.RandomNumber();
		random.Randomoperation();
		random.Randomexpression();
		caculate.calculateresult(type);
		if(judge.Judgeresult(caculate.getresult())
		{
			random.put();
			cin>>answer;
			if(judge.Judgeanswer(answer,caculate.getresult())==1)
			{
				cout<<s[1];
				inter.Statistics(1);
			}
			else
			{
				cout<<s[2]<<resullt;
				inter.Statistics(0);
			}
		}
	}
	cout<<s[3]<<inter.getright()<<endl;
	cout<<s[4]<<inter.getwrong()<<endl;
	return 0;
}









