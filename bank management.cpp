//13. WAP to make Bank Management System. (like shown in below images)
#include<iostream>
using namespace std;
class bank{
	private:
		char name[20];
		char Tname[20];
		char N;
		public:
			
			void setdata();
			void getdata();
	};
	void bank::setdata(){
			cin>>name;
			cin>>Tname;
			
		}
	
	void bank::getdata(){
		cout<<"-:Bank Managment System:-"<<endl;
		cout<<"-:Designed N Programed By:-"<<endl;
		cout<<name<<endl;
		cout<<"-:Trainer:-"<<endl;
		cout<<Tname<<endl;
		cout<<"Press any key  enter to continue..."<<'n'<<endl;
		cin>>N;
		cout<<"hellow";
		
	}
	main(){
		bank b;
		b.setdata();
		b.getdata();
	}
