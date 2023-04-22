#include<iostream>
#include<string>
#include<string.h>
#include"Blower.h"
#include"Player.h"
#include"Bowler.cpp"
#include"Player.cpp"
using namespace std;
class Bowler :public Player
{

	string Bowling_style;
	float avg_speed;
	int total_wickets;
	float bowling_avg;
	int Bstrike_rate;

public:
	Bowler(string Bowling_style, float avg_speed, int total_wickets, float bowling_avg, int Bstrike_rate, string name, int jersey_no, int odi, int T20, int test) :Player(name, jersey_no, odi, T20, test)
	{
		this->Bowling_style = Bowling_style;
		this->avg_speed = avg_speed;
		this->total_wickets = total_wickets;
		this->bowling_avg = bowling_avg;
		this->Bstrike_rate = Bstrike_rate;
	}

	void getBowler() 
	{
		get_player();
		cout << " your bowling style is: " << Bowling_style << endl;
		cout << " your average of speed is: " << avg_speed << endl;
		cout << " your total wikets are: " << total_wickets << endl;
		cout << " your average of bowling is: " << bowling_avg << endl;
		cout << " your strike rate is: " << Bstrike_rate << endl;
	}
};
