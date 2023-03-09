#include<iostream>
#include<fstream>
using namespace std;
class student{
	private:
		int *sapid;
		float cgpa;
		string name;
		int semester;
	public:
	//null constructor
		student(){
			this->sapid=new int();
			cout<<"null constructor is called:"<<endl;
			*this->sapid=0;
			this->cgpa=0.0;
			this->name=" ";
			this->semester=0;
		}
	//parametric constructor
		student(int sapid,float cgpa,string name,int semester){
			this->sapid=new int();
			cout<<"parametric constructor is called: \n";
			*this->sapid=sapid;
			this->cgpa=cgpa;
			this->name=name;
			this->semester=semester;
		}
	//overloading of constructor
		student(int sapid,float cgpa)
		{
		    *this->sapid=sapid;
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
	// encapsulation of getter and setter
		int getsapid(){
			return *sapid;
		}
		void setsapid(int sapid)
		{
			*this->sapid=sapid;
		}
    void display() 
		{
			cout<<"Sapid: \t"<<*sapid;
			cout<<"\nName: \t\t"<<name;
			cout<<"\nCGPA: \t\t"<<cgpa;
			cout<<"\nSemester: \t"<<semester;
		}
};
    int main(){
    	
    	string line;

    	ifstream fin;
    	fin.open("sample.txt");
    	int sapid;
    	int semester;
    	float cgpa;
    	string name;
    	while(fin>>sapid){
    		fin>>cgpa;
    		fin>>name;
    		fin>>semester;
    	student std(sapid,cgpa,name,semester);
		std.display();
		cout<<"\n\n\n";
	}
	    fin.close();
	    return 0;
	}
