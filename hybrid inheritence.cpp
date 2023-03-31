#include<iostream>
using namespace std;
class eight{
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
	eight(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class nine:public eight{
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
	nine(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class ten:public nine{
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
	ten(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
class eleven:public eight,nine,ten{
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
 class twelve:public eight,nine,ten{
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
	
 };
 class thirteen:public eight,nine,ten{
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
 };

int main(){
	eight hot1;
	hot1.gethotel();
	nine hot2;
	hot2.getpersonid();
	ten hot3;
	hot3.getyear();
	eleven hot4;
	hot4.gethotel();
	hot4.getpersonid();
	hot4.getyear();
	twelve hot5;
	hot5.getyear();
	thirteen hot6;
	hot6.getpersonid();
}
