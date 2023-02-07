/*4. WAP to create two class HighSchool and College with fields 
like , stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address.
 Make suitable setter and getter with use of static data members.*/
 
#include<iostream>
using namespace std;
class highschool
{
	private:
		static	int stu_roll_no;
		
	public:
		 void setter();
		 void getter();
};
				int highschool::stu_roll_no=1;
	void highschool::setter()
		{
			cout<<"enter stu_roll_no: ";
			cin>>stu_roll_no;
			
		}
	void highschool::getter()
	{
		cout<<"stu_roll_no:"<<stu_roll_no<<endl;
	
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
	
