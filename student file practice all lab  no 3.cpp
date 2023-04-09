#include<iostream>
#include<fstream>
using namespace std;
class student{
	private:
	int sapid;
	int semester;
	float cgpa;
	string name;
	public:
		//null constructor
	student(){
	
		cout<<"null constructor is called:"<<endl;
		this->sapid=0;
		this->semester=0;
		this->cgpa=0.0;
		this->name=" ";
	}
	//parameterized constructor
	student(int sapid,int semester,float cgpa,string name)
	{
		cout<<"parameterized constructor is called:";
		this->sapid=sapid;
		this->semester=semester;
		this->cgpa=cgpa;
		this->name=name;
	}
	//overloading of constructor
	student(int semestrer,float cgpa)
	{
		this->semester=semester;
		this->cgpa=cgpa;
	}
	//copy constructor
	student (student &std)
	{
		sapid=std.sapid;
		semester=std.semester;
		cgpa=std.cgpa;
		name=std.name;
	}

	
    void display()
    {
    	cout<<"SAPID \n"<<sapid;
    	cout<<"SEMESTER \n"<<semester;
    	cout<<"CGPA \n"<<cgpa;
    	cout<<"NAME \n"<<name;
	}
};
 int main()
 {
 		string line;
 		int sapid;
 		int semester;
 		float cgpa;
 		string name;
 	int opt=0;
 	cout<<"\n 1) add the student file:";
 	cout<<"\n 2) total record of student:";
 	cout<<"\n 3) exit function:";
 	cin>>opt;
 	if (opt==1){
 		
	 m:
	
		cout<<"add a menue of student :";
		cout<<"sapid:"<<endl;
		cin>>sapid;
		cout<<"semester:"<<endl;
		cin>>semester;
		cout<<"cgpa:";
		cin>>cgpa;
		cout<<"name:"<<endl;
		cin>>name;
		goto m;
	system("pause");
    
    	
	else (opt==2)
{
		cout<<"total record of student :";
		cout<<"sapid:"<<endl;
		cin>>sapid;
		cout<<"semester:"<<endl;
		cin>>semester;
		cout<<"cgpa:";
		cin>>cgpa;
		cout<<"name:"<<endl;
		cin>>name;
 	
// to write the file
 	ofstream fout;
 	fout.open("sample.txt");
 	while(fout){
	 
 	getline(cin,line);
 	if(line=="-1")
 	{
	 
 		break;
}
	 fout<<line<<endl;

}
 
   fout.close();

 //to read the file
 cout<<"read all files of students:\n";
        cin>>sapid;
		cin>>semester;
		cin>>cgpa;
		cin>>name;
  fstream fin;
  fin.open("sample.txt");

  while(fin>>sapid){
  	fin>>semester;
  	fin>>cgpa;
  	fin>>name;
  	student s1(sapid,semester,cgpa,name);
  	s1.display();
  	cout<<"\n\n";
  }
  fin.close();
  return 0;
}

}
