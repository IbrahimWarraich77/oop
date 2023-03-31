#include<iostream>
using namespace std;
class one{
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
	one(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class two: public one {
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
			cout<<"enter the year of person";
			cin>>year;
		}
	//null constructor
	public:
	two(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};	
class three{
		protected:
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
	public:
		int year ;
		void getyear(){
			cout<<"enter the year of person";
			cin>>year;
		}
	//null constructor
	public:
	three(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class four:public three,two,one{
	public:
		string hotel;
		void gethotel(){
			cout<<"enter the name of hotel:"<<endl;
			cin>>hotel;
		}
	public:
		int personid;
		void getpersonid(){
			cout<<"enter the id of person";
			cin>>personid;
		}
	public:
		int year ;
		void getyear(){
			cout<<"enter the year of person";
			cin>>year;
		}
};

int main(){
	one hot1;
	hot1.gethotel();
	two hot2;
	hot2.getpersonid();
	three hot3;
	hot3.getyear();
	four hot4;
	hot4.gethotel();
	hot4.getpersonid();
	hot4.getyear();
}
