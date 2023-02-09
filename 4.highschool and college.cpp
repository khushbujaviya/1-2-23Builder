/*4. WAP to create two class HighSchool and College with fields 
like , stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address.
 Make suitable setter and getter with use of static data members.*/

#include<iostream>
using namespace std;
class highschool
{
	private:
			   int stu_roll_no;
		static char stu_name[20];
			   int stu_standard;
			   int stu_age;
	   	static int stu_contact;
			   char stu_edu_institute_name[20];
		static char stu_address[20];

	public:
		 void setter();
		 void getter();
};
			char highschool::stu_name[20]="raj";
			int highschool::stu_contact=1212121212;
			char highschool::stu_address[20]="surat";
			
	void highschool::setter()
		{	cout<<"highschool informetion"<<endl;
			cout<<"enter stu_roll_no: ";
			cin>>stu_roll_no;
			
			cout<<"enter std_standard: ";
			cin>>stu_standard;

			cout<<"enter std_age: ";
			cin>>stu_age;

	
			cout<<"enter std_edu_institute_name: ";
			cin>>stu_edu_institute_name;

			cout<<endl;
		}
	void highschool::getter()
	{	cout<<"highschool detail"<<endl;
		cout<<"stu_roll_no: "<<stu_roll_no<<endl;
		cout<<"std_name: "<<stu_name<<endl;
		cout<<"stu_standard: "<<stu_standard<<endl;
		cout<<"stu_age: "<<stu_age<<endl;
		cout<<"stu_contact: "<<stu_contact<<endl;
		cout<<"stu_edu_institute_name: "<<stu_edu_institute_name<<endl;
		cout<<"stu_address: "<<stu_address<<endl;
		cout<<endl;
	}
	class collage
{
	private:
			   int stu_roll_no;
		static char stu_name[20];
			   int stu_standard;
			   int stu_age;
	   	static int stu_contact;
			   char stu_edu_institute_name[20];
		static char stu_address[20];
		highschool hischool;

	public:
		 void setter();
		 void getter();
};
			char collage::stu_name[20]="raj";
			int collage::stu_contact=1212121212;
			char collage::stu_address[20]="surat";
			
	void collage::setter()
		{		
			hischool.setter();	
			cout<<"collage informetion:"<<endl;
			cout<<"enter stu_roll_no: ";
			cin>>stu_roll_no;
			
			cout<<"enter std_standard: ";
			cin>>stu_standard;

			cout<<"enter std_age: ";
			cin>>stu_age;

	
			cout<<"enter std_edu_institute_name: ";
			cin>>stu_edu_institute_name;
			

			cout<<endl;
	}
	void collage::getter()
	{
		hischool.getter();	
	
		cout<<"collage ditail"<<endl;
		cout<<"stu_roll_no: "<<stu_roll_no<<endl;
		cout<<"std_name: "<<stu_name<<endl;
		cout<<"stu_standard: "<<stu_standard<<endl;
		cout<<"stu_age: "<<stu_age<<endl;
		cout<<"stu_contact: "<<stu_contact<<endl;
		cout<<"stu_edu_institute_name: "<<stu_edu_institute_name<<endl;
		cout<<"stu_address: "<<stu_address<<endl;
	
		cout<<endl;
	}
	main()
	{
		collage obj;
		obj.setter();
		obj.getter();
		}

	

