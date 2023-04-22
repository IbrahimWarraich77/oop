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
