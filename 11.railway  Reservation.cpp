/*11. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.*/
#include<iostream>
using namespace std;
class railway{
	private:
		int  Train_Number;
		char Train_Name[50];
		char Source[50];
		char Destination[50];
		int Train_Time;
	public:
		void setter();
		void getter();
		int getTrainNumber(){
			return Train_Number;
		}
};
void railway::setter(){
	cout<<"enter Train_Number: ";
	cin>>Train_Number;
	cout<<"enter Train_Name: ";
	cin>>Train_Name;
	cout<<"enter Source: ";
	cin>>Source;
	cout<<"enter Destination: ";
	cin>>Destination;
	cout<<"enter Train_Time: ";
	cin>>Train_Time;
	cout<<endl;
}
void railway::getter(){
	cout<<"Train_Number: "<<Train_Number<<endl;
	cout<<"Train_Name: "<<Train_Name<<endl;
	cout<<"Source: "<<Source<<endl;
	cout<<"Destination: "<<Destination<<endl;
	cout<<"Train_Time: "<<Train_Time<<endl;
}
main(){
	int i,n,t;
	cout<<"enter obj:";
	cin>>n;
	railway obj[n];
	for(i=0;i<n;i++)
	{
		obj[i].setter();
	
	}
	
	cout<<"Enter Train Number to search:";
	cin>>t;
	for(i=0;i<n;i++)
	{
		if(t==obj[i].getTrainNumber()){
			obj[i].getter();
		}
	}
	
}
