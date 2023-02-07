/*12. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
(C) Display All Record In Ascending order (by item Number)*/

#include<iostream>
#include<string.h>
using namespace std;
class input{
	private:
		int  Item_Number;
		char Item_Name[100];
		float Quantity;
		float Tax;
		float Discount;
	public:
		void setdata();
		void getdata();
		
			
		
};
void input::setdata()
	{
		cout<<"Enter Item Number: ";
		cin>>Item_Number;
		cout<<"Enter Item Name: ";
		cin>>Item_Name;
		cout<<"Enter Quantity: ";
		cin>>Quantity;
		cout<<"Enter Tax: ";
		cin>>Tax;
		cout<<"Enter Discount: ";
		cin>>Discount;
		cout<<endl;
	}
void input::getdata()
{
	cout<<Item_Number<<endl;
	cout<<Item_Name<<endl;
	cout<<Quantity<<endl;
	cout<<Tax<<endl;
	cout<<Discount<<endl<<endl;
}

main(){
	char email[100]="abc";
	char password[50]="101";
	char re_email[100];
	char re_password[50];
	int i=0;
	int j=0;
	int r,n;
	
	cout<<"enter re_email";
	cin>>re_email;
	i=strcmp(email,re_email);
	if(i==0)
		{
		cout<<"enter re_password";
		cin>>re_password;
		j=strcmp(password,re_password);
			if(j==0)
			{
			cout<<"enter obj: ";
		cin>>n;
		input obj[n];
		for(r=0;r<n;r++)
		{
		obj[r].setdata();
		}
		for(r=0;r<n;i++)
		{
			obj[r].getdata();
		}
			}
			else
			{
				cout<<"incorrect password"<<endl<<"try again";
			}
		}
		else
		{
			cout<<"incorect re_email"<<endl<<"try again";
		}
		
}
			
		
		
