#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{   char input,y,n,Y,N;
    string name,getkey;
    int age;
	cout<<"\t\t WELCOME TO CHATBOT\n\n";
	cout<< " to continue the chat type 'Y' and to End type 'N' -\n ";
    cout<<"-->";
	cin>>input;
	if(input =='y'||input=='y')
	{
		cout<<"welcome.....";
	}
	else
	{
		cout<<"Thanks For Coming";
	    return  0;
	}
	system("cls");
	if(getkey!="bye")
	{
		cout<<"\t HELLO USERS \n";
		cin>>getkey;
		cout<<"\nwhat is your good name ?\n";
		cout<<"-->";
		cin>>name;
		cout<<name<<" what is your age ?\n";
		cout<<"-->";
		cin>>age;
		switch (age)
		{
			case 18:
				cout<<"you are young\n";
			break;
			case 30:
				cout<<"\nyou are a man";
			break;
			default:
				cout<<"nothing to say about your age";
		}
		cout<<"\n bye bye "<<name<<"\n" ;
		cout<<"-->";
		cin>>getkey;
	}
	system("cls");
	cout<<" \t\t\t\t PROGRAM END HERE ";
	return 0;
}
