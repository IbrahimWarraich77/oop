
#include<iostream>
#include"player.h"
#include"player.cpp"
#include"Batsman.h"
using namespace std;
class Batsman :public Player 
{
	string batting_style;
	int batting_no;
	int total_score;
	float batting_avg;
	int BTstrike_rate;

public:
	Batsman(string batting_style, int batting_no, float batting_avg, int strike_rate, string name, int jersey_no, int odi, int T20, int test) :Player(name, jersey_no, odi, T20, test) 
	{
		this->batting_style = batting_style;
		this->batting_no = batting_no;
		this->batting_no = batting_no;
		this->batting_avg = batting_avg;
		this->BTstrike_rate = BTstrike_rate;

	}
	void getBatsman() 
	{
		get_player();
		cout << " your batting style is: " << batting_style << endl;
		cout << " your average of batting is: " << batting_avg << endl;
		cout << " your total score is: " << total_score << endl;
		cout << " your batting number is: " << batting_no << endl;
		cout << " your strike rate is: " << BTstrike_rate << endl;
	}
};
