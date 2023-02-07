//10. WAP to create a class for student to get and print details of N students. (with use of array of objects)
#include<iostream>
using namespace std;

	class student{
		private:
			int id;
			char name[50];
			int stander;
			char add[50];
			
		public:
			void getdata();
			void printdata();
	};
	void student::getdata(){
		cout<<"enter id:";
		cin>>id;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter stander:";
		cin>>stander;
		cout<<"enter add:";
		cin>>add;
	}
	void student::printdata(){
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<stander<<endl;
		cout<<add<<endl;
	}
	main(){
		int n;
		int i;
		cout<<"enter obj";
		cin>>n;
		student obj[n];
		for(i=0;i<n;i++)
		{
			obj[i].getdata();
			obj[i].printdata();
		}
	}
