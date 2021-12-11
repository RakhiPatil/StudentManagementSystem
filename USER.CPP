#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l1;
	char user[20], pass[10];
	clrscr();
	cout<<"\n Enter the Username: ";
	cin>>user;
	cout<<"\n Enter the Password: ";
	cin>>pass;
	l1=strlen(pass);
	if(l1<8)
	{
		cout<<"\nPassword should be atleast 8 Char long..";
	}
	else
	{
		if(strcmp(user,"Admin")==0)
		{
			if(strcmp(pass,"admin1234")==0)
			{
				cout<<"\n Welcome Admin..";
			}
			else
			{
				cout<<"\n Wrong Password..";
			}
		}
		else
		{
			cout<<"\nWrong Credentials..";
		}
	}
       getch();
}

