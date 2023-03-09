#include<iostream>
#include<fstream>
using namespace std;
class student{
	private:
	int *sapid;
	int semester;
	float cgpa;
	string name;
	public:
		//null constructor
	student(){
		this->sapid=new int();
		cout<<"null constructor is called:"<<endl;
		*this->sapid=0;
		this->semester=0;
		this->cgpa=0.0;
		this->name=" ";
	}
	//parameterized constructor
	student(int sapid,int semester,float cgpa,string name)
	{
		this->sapid=new int();
		cout<<"parameterized constructor is called:";
		*this->sapid=sapid;
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
	//encapsulation of getter and setter
		int getsapid()
	{
		return *sapid;
	}
	void setsapid(int sapid)
	{
		*this->sapid=sapid;
	}
	//destructor
	~student()
	{
		cout<<"destructor starts running \n";
		delete this->sapid;
	}
    void display()
    {
    	cout<<"SAPID \n"<<*sapid;
    	cout<<"SEMESTER \n"<<semester;
    	cout<<"CGPA \n"<<cgpa;
    	cout<<"NAME \n"<<name;
	}
};
 int main()
 {
 	string line;
/* 	cout<<"ENTER DATA TO STORE IN FILE :";
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
 */
 //to read the file
  fstream fin;
  fin.open("sample.txt");
  int sapid;
  int semester;
  float cgpa;
  string name;
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
