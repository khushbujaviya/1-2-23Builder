//9. WAP to create a class which Set values of data members using default and parameterized constructor.
#include<iostream>
using namespace std;

class student{
	private:
		int stu_id;
		char *stu_name;
		char *stu_add;
		int stu_contact;
	public:
		student (int stu_id, char *stu_name,char *stu_add,int stu_contact){
		this->stu_id=stu_id;
		strcpy(this->stu_name,stu_name)	
		strcpy(this->stu_add,stu_add)
		this->stu_contact=stu_contact;
		}
		void getter();

};
void student::getter(){
	cout<<stu_id<<endl;
	cout<<stu_name<<endl;
	cout<<stu_add<<endl;
	cout<<stu_contact<<endl;
}
main(){
	int stu_id;
	char stu_name[50]="abc";
	char stu_add[50]="xyz";
	int stu_contact;
	
	cout<<"enter id";
	cin>>stu_id;
	cout<<"enter name";
	cin>>stu_name;
	cout<<"enter add";
	cin>>stu_add;
	cout<<"enter contact";
	cin>>stu_contact;
	
	student obj(stu_id,stu_name,stu_add,stu_contact);
	obj.getter();
}
