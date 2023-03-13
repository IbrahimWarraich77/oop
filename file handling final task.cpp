#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
struct studentsdata
{
		int sapId;
		string name;
		string department;
		float cgpa;		
};
   studentsdata st;
   
void AddData()
{
	system("CLS");
	cout<<"Enter Sap Id : ";
	cin>>st.sapId;
	cout<<"Enter Name : ";
	cin>>st.name;
	cout<<"Enter Department : ";
	cin>>st.department;
	cout<<"Enter Cgpa : ";
	cin>>st.cgpa;
	fstream studentsdata;
	studentsdata.open("studentsdata.txt",ios :: app);
    studentsdata<<st.sapId;
    studentsdata<<"\t "<<st.name;
    studentsdata<<"\t "<<st.department;
    studentsdata<<"\t "<<st.cgpa<<endl;
    studentsdata.close(); 
}

void display()
{
	    system("CLS");
		fstream studentsdata;
	    studentsdata.open("studentsdata.txt", ios::in);
        string details; 
	    while(getline(studentsdata,details,' ')) {
        cout <<details<<endl; 
	}
}
int main()
{
	int ch;
	do{
	cout<<"\n============ STUDENT PORTAL ============\n";	
	cout<<"1. ADD DETAILS \n"; 
	cout<<"2. READ DATA \n";
	cout<<"3. EXIT \n";
	cout<<"option: ";
	cin>>ch;
	switch(ch){
		case 1:
		    AddData();	
			break;
		case 2 : 
		   display();
			break;
		case 3:
			system("cls");
			cout<<"\nThank You For Using ! \n";
			break;
		default:
			cout<<"Enter a valid option";
		}
	}while(ch < 3);

	return 0;
	
}
