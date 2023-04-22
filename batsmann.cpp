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

