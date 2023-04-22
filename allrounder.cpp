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
