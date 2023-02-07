/*4. WAP to create two class HighSchool and College with fields 
like , stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address.
 Make suitable setter and getter with use of static data members.*/
 
#include<iostream>
using namespace std;
class highschool
{
	private:
		static	int stu_roll_no;
		static	char stu_name[20];
		static	int stu_standard;
		static	int stu_age;
		static	int stu_contact;
		static	char stu_edu_institute_name[20];
		static	char stu_address[20];
		
	public:
		 void setter();
		 void getter();
};
			int highschool::stu_roll_no=1;
			char highschool::stu_name[20]="raj";
			int highschool::stu_standard=1;
			int highschool::stu_age=1;
			int highschool::stu_contact=1212121212;
			char highschool::stu_edu_institute_name[20]="h.l.patel";
			char highschool::stu_address[20]="surat";
			
	void highschool::setter()
		{
			cout<<"enter stu_roll_no: ";
			cin>>stu_roll_no;
			
			cout<<"enter stu_name: ";
			cin>>stu_name;
			
			cout<<"enter std_standard: ";
			cin>>stu_standard;
			
			cout<<"enter std_age: ";
			cin>>stu_age;
			
			cout<<"enter std_contact: ";
			cin>>stu_contact;
			
			cout<<"enter std_edu_institute_name: ";
			cin>>stu_edu_institute_name;
			
			cout<<"enter stu_address: ";
			cin>>stu_address;
			cout<<endl;
			
		}
	void highschool::getter()
	{
		cout<<"stu_roll_no:"<<stu_roll_no<<endl;
		cout<<"std_name:"<<stu_name<<endl;
		cout<<"stu_standard:"<<stu_standard<<endl;
		cout<<"stu_age:"<<stu_age<<endl;
		cout<<"stu_contact:"<<stu_contact<<endl;
		cout<<"stu_edu_institute_name:"<<stu_edu_institute_name<<endl;
		cout<<"stu_address:"<<stu_address<<endl;
		cout<<endl;

	}
	main()
	{
		int i,n;
		cout<<"enter total obj: ";
		cin>>n;
		
		highschool obj[n];
		for(i=0;i<n;i++)
		{
			obj[i].setter();
			//obj[i].getter();
		}
		for(i=0;i<n;i++)
		{
			//obj[i].setter();
			obj[i].getter();
		}

	}
	
