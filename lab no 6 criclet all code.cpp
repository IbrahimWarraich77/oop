//total code of cricket .h or .cpp file.
#include<iostream>
#include"All rounder.h"
#include"player.h"
#include"Batsman.h"
#include"Blower.h"
#include"Batsman.cpp"
#include"Bowler.cpp"
using namespace std;
class AllRounder :public Batsman, public Bowler
{
public:
	string name;
	int jersey_no;
	int arr[3];
	string batting_style;
	int batting_no;
	int total_score;
	int jersey_no;
	float batting_avg;
	int BTstrike_rate;
	AllRounder(string bating_style, int batting_no, float batting_avg, int BTstrike_rate, string Bowling_style, float avg_speed, int total_wickets, float bowling_avg, int Bstrike_rate, string name, int jersey_no, int odi, int T20, int test) :Batsman(bating_style, batting_no, batting_avg, BTstrike_rate, name, jersey_no, odi, T20, test), Bowler(Bowling_style, avg_speed, total_wickets, bowling_avg, Bstrike_rate, name, jersey_no, odi, T20, test)
	{


	}
		void get_allr() 
		{
			getBatsman();
			getBowler();
		}
};
#include<iostream>
#include <string>
#ifndef ALLROUNDER_H
#define ALLROUNDER_H
class allrounder
{
public:
	int jersyno;
	string name;
	int arr[3];
	~allrounder();
};
#endif // ALLROUNDER_H
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
#include<iostream>
#ifndef BATSMAN_H
#define BATSMAN_H
class Batsman 
{
	public:
		string batting_style;
		int batting_no;
		int total_score;
		float batting_avg;
		int BTstrike_rate;
		~Batsman();
};
#endif // BATSMAN_H
#include<iostream>
#include<string>
#include<string.h>
#ifndef BOWLER_H
#define BOWLER_H
class Bowler
{
public:
	string Bowling_style;
	float avg_speed;
	int total_wickets;
	float bowling_avg;
	int Bstrike_rate;
	~Bowler();
};
#endif // BOWLER_H
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
#include<iostream>
#include<string>
#include<string.h>
#include"All rounder.cpp"
#include"Player.cpp"
#include"Batsman.cpp"
#include"Bowler.cpp"
#include"Wicket kepper.cpp"
using namespace std;

int main()
{
	Batsman obj1("Right", 5, 15, 20, "asad", 55, 10, 50, 30);
	obj1.getBatsman();
	Bowler obj2("Fast", 57, 40, 70, 20, "zubair", 55, 10, 50, 30);
	obj2.getBowler();
	AllRounder r1("Right", 5, 15, 20, "Fast", 57, 40, 70, 20, "zubair", 55, 10, 50, 30);
	r1.get_allr();
	WicketKeeper w1("right", 45, 3, 5, "asad", 55, 10, 50, 30);
	w1.getWicketKeeper();
}
#include<string.h>
#ifndef PLAYER_H
#define PLAYER_H
class Player
{
public:
	int jersyno;
	string name;
	int arr[3];
	~Player();
};
#endif // PLAYER_H
#include<iostream>
#include<string>
#include<string.h>
#include"Player.h"
#include"Player.cpp"
#include"Wicket kepper.h"
using namespace std;
class WicketKeeper :public Player 
{
	string Batting_style;
	int total_score;
	int total_catches;
	int total_stumps;

public:
	WicketKeeper(string Batting_style, int total_score, int total_catches, int total_stumps, string name, int jersey_no, int odi, int T20, int test) :Player(name, jersey_no, odi, T20, test) 
	{
		this->Batting_style = Batting_style;
		this->total_score = total_score;
		this->total_catches = total_catches;
		this->total_stumps = total_stumps;
	}

	void getWicketKeeper() 
	{
		get_player();
		cout << "your Batting style is: " << endl;
		cin >> Batting_style;
		cout << "your total score is: " << endl;
		cin >> total_score;
		cout << "your total cathces is: " << endl;
		cin >> total_catches;
		cout << "your total stumps is: " << endl;
		cin >> total_stumps;
	}
};
#include<iostream>
#include<string>
#include<string.h>
#ifndef WICKETKEPPER_H
#define WICKETKEPPER_H
class Wicketkepper
{
public:
	string Batting_style;
	int total_score;
	int total_catches;
	int total_stumps;
	~Wicketkepper();
};
#endif // WICKETKEPPER_H
