/*1. WAP to create a class Employee with setter and getter. Which have fields 
like id, name, role, salary, experience, address, email and contact. Get 5 records.*/
#include<iostream>
using namespace std;

class employee
{
	private:
		int id;
		char name[20];
		char role[20];
		int salary;
		char experience[20];
		char address[20];
		char email[20];
	    int contact;
	public:
		void setter()
		{
			cout<<"enter id: ";
			cin>>id;
			
			cout<<"enter name: ";
			cin>>name;
			
			cout<<"enter role: ";
			cin>>role;
			
			cout<<"enter salary: ";
			cin>>salary;
			
			cout<<"enter experience: ";
			cin>>experience;
			
			cout<<"enter address: ";
			cin>>address;
			
			cout<<"enter email: ";
			cin>>email;
			
			cout<<"enter contace: ";
			cin>>contact;
			cout<<endl;
		}
		void getter()
		{
			cout<<"employee id: "<<id<<endl;
			cout<<"employee name: "<<name<<endl;
			cout<<"employee role "<<role<<endl;
			cout<<"employee salary: "<<salary<<endl;
			cout<<"employee experience: "<<experience<<endl;
			cout<<"employee address: "<<address<<endl;
			cout<<"employee email: "<<email<<endl;
			cout<<"employee contact: "<<contact<<endl<<endl;

		}		
};
main()
{
	int i,n;
	cout<<"enter record: ";
	cin>>n;
		employee obj[n];

	for(i=0;i<n;i++){
		
		obj[i].setter();
		obj[i].getter();

	}
	
	
}
