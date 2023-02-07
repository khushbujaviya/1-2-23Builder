//6. WAP to demonstrate example of default constructor or no argument constructor.

#include<iostream>
using namespace std;

class student{
	private:
		int id;
		char name[20];
		int stander;
		char address[20];
		int contact;
	public:
		void setter();
		void getter();
		};
	void student::setter(){
		cout<<"enter id: ";
		cin>>id;
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter stander: ";
		cin>>stander;
		cout<<"enter address: ";
		cin>>address;
		cout<<"enter contact: ";
		cin>>contact;
	}
	void student::getter(){
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<stander<<endl;
		cout<<address<<endl;
		cout<<contact<<endl<<endl;
		
	}
	main(){
		int n,i;
		cout<<"enter object: ";
		cin>>n;
		 student obj[n];
		for(i=0;i<n;i++)
		{
		obj[i].setter();
		obj[i].getter();
		}
		
		
	}
