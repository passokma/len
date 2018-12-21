#include<iostream>
#include<cstring>
using namespace std;
int num;//人数 
int flag;
char yhm[100][15];
char mima[100][15];
char now_yhm[15];//用户名 
char now_mima[15];//密码 
bool check(int a) //判断重名函数 
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
			cout<<"登录请按1"<<endl<<"注册请按2"<<endl<<"退出请按3";
			cin>>flag;//操作旗帜 
			if(flag==3)break;
			if(flag==2)//注册函数 
			{
				num++;
				cout<<"请输入你要注册的用户名【十个字符内】"<<endl;
				while(1)
				{
				bool flagb=0;
				memset(now_yhm,0,sizeof(now_yhm)); 
				cin>>now_yhm;
				for(int i=1;i<=num;i++)
				{
					if(check(i))
					{
						cout<<"该用户名已被注册,请重试"<<endl;
						flagb=1;
						break; 
					}
				}
				if(flagb)continue;
				int len=strlen(now_yhm);
				for(int i=0;i<len;i++) yhm[num][i]=now_yhm[i];
				break;
				}
				cout<<"请输入你要注册的密码【十个字符内】"<<endl;
				cin>>mima[num];
				cout<<"注册成功"<<endl;
			}
			else if(flag==1)
			{
				cout<<"请输入你要登录的用户名【十个字符内】"<<endl;
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
				    		cout<<"请输入你的密码"; 
				    		flagb=1; 
				    		break;
				       	}
				    }
					if(flagb)break;
				    cout<<"查无此用户名，请重试"<<endl;    
				}
				while(1)
				{
					memset(now_mima,0,sizeof(now_mima));
					cin>>now_mima;
					if(check_b(pa))
					{
					cout<<"登陆成功"<<endl;
					break;
					} 
					 cout<<"密码有误，请重试"<<endl; 
				}
			}
	 } 
}
