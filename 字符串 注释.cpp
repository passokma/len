#include<iostream>
#include<cstring>
using namespace std;
int num;//���� 
int flag;
char yhm[100][15];
char mima[100][15];
char now_yhm[15];//�û��� 
char now_mima[15];//���� 
bool check(int a) //�ж��������� 
{
	int len=strlen(now_yhm);
	int leb=strlen(yhm[a]);
	if(len!=leb)return false;
	int top=0;
	while(yhm[a][top]==now_yhm[top])
	{
		top++;
		if(top==len)return true;
	}
	return false;
 }  
 bool check_b(int a)
{
	int len=strlen(now_mima);
	int leb=strlen(mima[a]);
	if(len!=leb)return false;
	int top=0;
	while(mima[a][top]==now_mima[top])
	{
		top++;
		if(top==len)return true;
	}
	return false;
 }  
int main()
{
	while(1)
	{
			cout<<"��¼�밴1"<<endl<<"ע���밴2"<<endl<<"�˳��밴3";
			cin>>flag;//�������� 
			if(flag==3)break;
			if(flag==2)//ע�ắ�� 
			{
				num++;
				cout<<"��������Ҫע����û�����ʮ���ַ��ڡ�"<<endl;
				while(1)
				{
				bool flagb=0;
				memset(now_yhm,0,sizeof(now_yhm)); 
				cin>>now_yhm;
				for(int i=1;i<=num;i++)
				{
					if(check(i))
					{
						cout<<"���û����ѱ�ע��,������"<<endl;
						flagb=1;
						break; 
					}
				}
				if(flagb)continue;
				int len=strlen(now_yhm);
				for(int i=0;i<len;i++) yhm[num][i]=now_yhm[i];
				break;
				}
				cout<<"��������Ҫע������롾ʮ���ַ��ڡ�"<<endl;
				cin>>mima[num];
				cout<<"ע��ɹ�"<<endl;
			}
			else if(flag==1)
			{
				cout<<"��������Ҫ��¼���û�����ʮ���ַ��ڡ�"<<endl;
				int pa;
			
				while(1)
				{	bool flagb=0;
					memset(now_yhm,0,sizeof(now_yhm)); 
					cin>>now_yhm;
				    for(int i=1;i<=num;i++)
				    {
				    	if(check(i))
				    	{
				    		pa=i;
				    		cout<<"�������������"; 
				    		flagb=1; 
				    		break;
				       	}
				    }
					if(flagb)break;
				    cout<<"���޴��û�����������"<<endl;    
				}
				while(1)
				{
					memset(now_mima,0,sizeof(now_mima));
					cin>>now_mima;
					if(check_b(pa))
					{
					cout<<"��½�ɹ�"<<endl;
					break;
					} 
					 cout<<"��������������"<<endl; 
				}
			}
	 } 
}
