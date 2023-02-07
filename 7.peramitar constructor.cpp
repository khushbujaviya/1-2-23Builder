//7. WAP to demonstrate example of parameterized constructor.
#include<iostream>
using namespace std;

class student{
	private:
		int id;
		char *name;
		int standerd;
		int contact;
		char *school_name;
		char *city;
		public:
			student (int id,char *name,int standerd,int contact,char *school_name,char *city){
				this->id=id;
				strcpy(this->name,name)
				this->standerd=standerd;
				this->contact=contact;
				strcpy(this->school_name,school_name)
				strcpy(this->city,city)
		}
			void getter();
			
};
void student::getter(){
	cout<<"student id: "<<id<<endl;
	cout<<"student name: "<<name<<endl;
	cout<<"student standerd: "<<standerd<<endl;
	cout<<"student contact: "<<contact<<endl;
	cout<<"school name: "<<name<<endl;
	cout<<"city: "<<city<<endl;
	
}
main (){

	int id;
	char name[20]="abc";
	int standerd;
	int contact;
	char school[20]="xyz";
	char city[20]="ccc";
	

	int i,n;
	 cout<<"enter obj";
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	cout<<"enter id: ";
	 	cin>>id;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter standerd: ";
		cin>>standerd;
		cout<<"enter contact: ";
		cin>>contact;
		cout<<"enter school: ";
		cin>>school;
		cout<<"enter city: ";
		cin>>city;
	 	
		student obj(id,name,standerd,contact,school,city);
		  obj.getter();
	}
}
