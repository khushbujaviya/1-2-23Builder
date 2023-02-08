//13. WAP to make Bank Management System. (like shown in below images)
#include<iostream>
using namespace std;
class bank{
	private:
		char name[20];
		char Tname[20];
		char N;
	public:
		int A;
		int S;
		int a;
		int ac;
		public:
			void setdata();
			void getdata();
			void Aministrator();
			void info();
			
	
	};

	
	void bank::getdata(){
		cout<<"-:Bank Managment System:-"<<endl;
		cout<<"-:Designed N Programed By:-"<<endl;
		cout<<"khushi G"<<endl;
		cout<<"-:Trainer:-"<<endl;
		cout<<"Ashish solanki"<<endl;
		
	}
	void bank::Aministrator(){
				cout<<"Pressa  enter to continue..."<<'n'<<endl;
				cin>>N;
				cout<<endl<<endl;
				cout<<":-Press 1 to login Aministrat or 2 to log in staff:- ";
			
				cout<<endl;
				cin>>a;
				
			switch(a){
				case 1:
						cout<<" enter name";
						cin>>name;
						cout<<"account no";
						cin>>ac;
						cout<<"name:         "<<name<<endl;
						cout<<"account no:   "<<ac;
					break;
				case 2:
			}
		
		}
	
	main(){
		bank b;
		
		b.getdata();
		b.Aministrator();
	}
