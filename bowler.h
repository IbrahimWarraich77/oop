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
