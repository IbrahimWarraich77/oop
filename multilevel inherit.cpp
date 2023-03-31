#include<iostream>
using namespace std;
class five{
	public:
		string hotel;
		void gethotel(){
			cout<<"enter the name of hotel:"<<endl;
			cin>>hotel;
		}
	private:
		int personid;
		void getpersonid(){
			cout<<"enter the id of person";
			cin>>personid;
		}
	protected:
		int year ;
		void getyear(){
			cout<<"enter the year of person";
			cin>>year;
		}
	//null constructor
	public:
	five(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class six:public five{
	public:
		int personid;
		void getpersonid(){
			cout<<"enter the id of person:"<<endl;
			cin>>personid;
		}
	private:
		string hotel;
		void gethotel(){
			cout<<"enter the name of hotel:"<<endl;
			cin>>hotel;
		}
	protected:
		int year ;
		void getyear(){
			cout<<"enter the year of person:"<<endl;
			cin>>year;
		}
	//null constructor
	public:
	six(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class seven:public six{
	public:
		int year ;
		void getyear(){
			cout<<"enter the year of person:"<<endl;
			cin>>year;
		}
	protected:
		string hotel;
		void gethotel(){
			cout<<"enter the name of hotel:"<<endl;
			cin>>hotel;
		}
	private:
		int personid;
		void getpersonid(){
			cout<<"enter the id of person"<<endl;
			cin>>personid;
		}
	
	//null constructor
	public:
	three(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
int main(){
	five hot1;
	hot1.gethotel();
	six hot2;
	hot2.getpersonid();
	seven hot3;
	hot3.getyear();
}
