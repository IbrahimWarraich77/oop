#include<iostream>
using namespace std;
class duration{
	public:
	int days;
	int hours;
	int minutes;
	int sec;
	duration(){
		days=0;
		hours=0;
		minutes=0;
		sec=0;		
	}
	duration(int d,int h,int m,int s)
	{
	days= d;
	hours=h;
	minutes=m;
	sec=s; 
}
    duration(int sec){

            days=sec/86400;
            sec=sec%86400;
            hours=sec/3600;
            sec=sec%3600;
            minutes=sec/60;
            sec=sec%60;    
}

   void display() {

  cout<<"days:"<<days<<endl;
  cout<<"hours:"<<hours<<endl;
  cout<<"minutes:"<<minutes<<endl;
  cout<<"sec:"<<sec;
}
  int durationofSec()
		{
            return days*86400+hours*3600+minutes*60+sec;
        }
      
    };
int main(){
  duration d1;
  duration d2(12,24,36,48);
  duration d3(3600);
  d1.display();
    cout<<"Total duration of sec = "<<d1.durationofSec()<<endl;
    d2.display();
    cout<<"Total duration of sec = "<<d2.durationofSec()<<endl;
    d3.display();
    cout<<"Total duration of sec = "<<d3.durationofSec()<<endl;
    return 0;
}  

  
