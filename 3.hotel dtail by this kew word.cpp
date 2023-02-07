/*3. WAP to create a class Hotel with fields like
 id, name, type, staff_size, room_size, establish_year, address, rating_type and website. 
 Illustrate the use of encapsulation (strict encapsulation) with this keyword.*/
#include<iostream>
#include<string.h>
using namespace std;
class hotel
{
	private: 
		int id;
		char *name;
		char *type;
		int staff_size;
		int room_size;
		int establish_year;
		char *rating_type;
		char *websit;
	public:
		void setter(int id,char *name,char *type,int staff_size,int room_size,int establish_year,char *rating_type,char *websit);
		void getter();
};

void hotel::setter(int id,char *name,char *type,int staff_size,int room_size,int establish_year,char *rating_type,char *websit)
{
	this->id=id;
	this->name=name;
	this->type=type;
	this->staff_size=staff_size;
	this->room_size=room_size;
	this->establish_year=establish_year;
	this->rating_type=rating_type;
	this->websit=websit;
}
void hotel::getter()
	{
		cout<<"hotel id: "<<id<<endl;
		cout<<"hotel name: "<<name<<endl;
		cout<<"hotel type: "<<type<<endl;
		cout<<"hotel staff_size: "<<staff_size<<endl;
		cout<<"hotel room_size: "<<room_size<<endl;
		cout<<"hotel establish_year: "<<establish_year<<endl;
		cout<<"hotel rating_type: "<<rating_type<<endl;
		cout<<"hotel websit: "<<websit<<endl<<endl;
	}
	main()
	{ 	int id=1;
		char name[20]="name";
		char type[20]="2 star";
		int staff_size=1;
		int room_size=2;
		int establish_year=2020;
		char rating_type[20]="hotel";
		char websit[20]="websit";
	
		int i,n;
		cout<<"enter object: ";
		cin>>n;
		hotel obj[n];
		for(i=0;i<n;i++)
		{
			cout<<"hotel id: ";
			cin>>id;
			cout<<"hotel name: ";
			cin>>name;
			cout<<"hotel type: ";
			cin>>type;
			cout<<"hotel staff_size: ";
			cin>>staff_size;
			cout<<"hotel room_size: ";
			cin>>room_size;
			cout<<"hotel establish_year: ";
			cin>>establish_year;
			cout<<"hotel rating_type: ";
			cin>>rating_type;
			cout<<"hotel websit: ";
			cin>>websit;
			cout<<endl;
			
		obj[i].setter(id, name,type,staff_size,room_size,establish_year,rating_type,websit);
		obj[i].getter();
		}
		
		
	}
