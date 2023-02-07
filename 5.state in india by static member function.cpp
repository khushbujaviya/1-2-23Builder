/*5. WAP to create a class which have both static data member and static member function.
 That class gives details of all states in India.*/

#include<iostream>
#include<string>
using namespace std;
class  state
{
	private:
		 char name[20];
	public:
		 void setter()
		{
			cout<<"enter state name: ";
			cin>>name;
		}
		 void getter(){
			cout<<name<<endl;
		}
};
class city
{
	private:
		 char name[20];
		state sts;
	public:
		 void setter()
		{
			cout<<"enter city name: ";
			cin>>name;
			sts.setter();
		}
		 void getter(){
			cout<<name<<endl;
			sts.getter();
				}
 };
main()
{
	city obj;
	obj.setter();
	obj.getter();
}





