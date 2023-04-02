#include<iostream>
using namespace std;
//single inheritence
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
// multiple inheritence
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
// multilevel inheritence
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
	seven(){
		this->hotel=" ";
		this->personid=0;
		this->year=0;
	}
};
// hybrid constructor
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
	five hot5;
	hot5.gethotel();
	six hot6;
	hot6.getpersonid();
	seven hot7;
	hot7.getyear();
	eight hot8;
	hot8.gethotel();
	nine hot9;
	hot9.getpersonid();
	ten hot10;
	hot10.getyear();
	eleven hot11;
	hot11.gethotel();
	hot11.getpersonid();
	hot11.getyear();
	twelve hot12;
	hot12.getyear();
	thirteen hot13;
	hot13.getpersonid();
}
