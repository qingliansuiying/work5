#ifndef CIRCLE_H
#define CIRCLE_H

class Interaction	//�û�������
{
private:
	int right;      //��ȷ����
    int wrong;      //��������
public:  
    int language;   //����ѡ��
	int getright();		
	int getwrong();
	Interaction();
    void setlanguage();   //�û���������ѡ��
    void Statistics(int j);    //ͳ����������
};

class Random		//�����ʽ��
{
public:
	int type;
    int num[5];
    int operation[4];
    void RandomNumber();
    void Randomoperation();
    int Randomexpression();  //�������ʽ��
	void put();		//���ʽ��
};

class Calculate		//������
{
private:
    float result;             //����ʽ�ӵĴ�
public:
    void calculateresult(int j);   //�����
    float getresult();
};

class Judge			//�ж���
{ 
public:
	int answer;				//�����û������
    bool Judgeresult(float res);     //�ж�����ʽ���Ƿ����Ҫ��
    bool Judgeend(int j,int n);         //�ж��û��Ƿ���Ҫ����ֹͣ����
    bool Judgeanswer(int ans,float result);     //�ж��û��ش��Ƿ���ȷ
};

class File			//�ļ���д��
{
public:
	string s[5];						 //�洢���ļ��ж�ȡ������
    void Language();        //���������ļ�
    void WriteFile(int n);      //����Ϣ����ָ���ļ�
};
#endif
