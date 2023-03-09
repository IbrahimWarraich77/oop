#include<iostream>
using namespace std;
class student
{
    private:
	int *sapid;
	int semester;
	string name;
	float cgpa;
	public:
	student()
	{
	    this->sapid=new int();
	    cout<<"null constructor is called:"<<endl;
		this->semester=0;
		this->name="";
		this->cgpa=0.0;
			
	}
	student(int sapid,string name,int smester,float cgpa)
	{
		*this->sapid=sapid;
		cout<<"parametric constructor is called";
		 this->name=name;
		 this->semester=semester;
		 this->cgpa=cgpa;
	}
	student(int sapid,string name)
	{
		*this->sapid=sapid;
		this->name=name;
	}

	student(int sapid,string name,float gpa)
	{
		*this->sapid=sapid;
		this->name=name;
		this->cgpa=cgpa;
	}
		//copy constructor
	student (student &std)
	{
		sapid=std.sapid;
		name=std.name;
		semester=std.semester;
		cgpa=std.cgpa;
		
	}
	int getsapid(){
		return *sapid;
	}
	void setsapid(int sapid){
		*this->sapid=sapid;
	}
	//destructor
	~student(){
		cout<<"destructor of student is running:"<<endl;
		 delete sapid;
	}
};
int main()
{
/*	student s1;
	s1.sapid=46935;
	s1.name="ibrahim";
	s1.semester=2;
	s1.cgpa=2.5;
	student s2(s1);
	cout<<"Details of Student 1 : "<<endl;
	cout<<"sap id:"<<*s1.sapid<<endl;
	cout<<"name:"<<s1.name<<endl;
	cout<<"semester"<<s1.semester<<endl;
*/
//	cout<<"cgpa:"<<s1.cgpa<<endl;
    student s2;
    s2.setsapid(46935);
    cout<<s2.getsapid()<<endl;
	return 0;	
}
