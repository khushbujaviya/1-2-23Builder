/*2. WAP to create a class which Read and print Class, Student details using Two Classes. 
(Make two classes, create one classe's obj in another class.)*/
#include<iostream>
using namespace std;
class read{
	private:
		int id;
		char name[20];
		char add[50];
	public:
		void setdata(){
				cout<<"enter id: ";
				cin>>id;
				cout<<"enter name: ";
				cin>>name;
				cout<<"enter address: ";
				cin>>add;
		}
		void getdata(){
			cout<<"id:"<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"address: "<<add<<endl;
		}
};
class print:public read{
	private:
		int contact;
		char email[30];
	public:
		void setdata(){
			read::setdata();
			cout<<"enter contact:";
			cin>>contact;
			cout<<"enter email:";
			cin>>email;
			cout<<endl;
			}
		void getdata(){
			read::getdata();
			cout<<"contact:"<<contact<<endl;
			cout<<"email:"<<email<<endl<<endl;
		}
};
main(){
	int i,n;
	cout<<"enter obj;";
	cin>>n;
	print obj;
	for(i=0;i<n;i++){
		obj.setdata();
	}
	for(i=0;i<n;i++){
	obj.getdata();
	}
}

