#include<iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;


int balls = 120;
int score = 0;
int wickets = 10;
int team1_score = 0;

const double Const_distanceV = 22.12; // in meters
double Entered_distanceV = 0; // no ball when 2.55+
const double Const_distanceH = 3.05;  // in meters
double Entered_distanceH = 0; // wide when 0.34+
const double Const_height = 1.72; // in meters
double Entered_height = 0; // bouncer when 1.73+
double Entered_angle_of_deviation = 0; 

bool CPU_Bat = false;
bool CPU_ball = false;
bool Bat = false;
bool Ball = false;
bool match_win;
bool match_draw;
bool isStrike = false;

char BatOrBall = 'N';



void DecisionOfGame() {


	cout << "**************  => SCORE: " << score << " ************** BALLS REMAINING: " << balls << "************** WICKETS REMAINING: " << wickets << " <= **************" << endl;

	if (team1_score == score && balls == 0) {
		cout << " => MATCH DRAW. " << endl;
		match_draw = true;
	}

	else if (team1_score > score&& Bat == false && balls == 0 || wickets == 0) {

		cout << " => Congratulations, YOU HAVE WON THE MATCH. " << endl;
		match_win = true;

	}

	else if (score > team1_score&& CPU_Bat == true) {

		cout << " => Bad Luck, YOU HAVE LOST THE MATCH, CPU WON. " << endl;
		match_win = true;

	}

	else if (score > team1_score && Bat == true) {

		cout << " => Congratulations, YOU HAVE WON THE MATCH. " << endl;
		match_win = true;
	}

	else if (team1_score > score && CPU_Bat == false && balls == 0 || wickets == 0 ) {

		cout << " => Bad Luck, YOU HAVE LOST THE MATCH, CPU WON. " << endl;
		match_win = true;

	}


}

void DecisionOfToss() {

	char Toss;
	int random = 0;

	cout << " => Toss time, Choose: Press H if Heads or T if Tails. ";
	cin >> Toss;
	
	srand(time(NULL));
	random = rand();

	if (random % 2 == 0)

		if (Toss == 'H' || Toss == 'h') {

			cout << " => Congratulations, You have won the toss. What would you like to do? " <<endl;
			cout << " => a) Batting or b) Bowling? Choose: Press A if you wants to Bat first or Press B if you wants to Ball first. ";
			cin >> BatOrBall;

			if (BatOrBall == 'a' || BatOrBall == 'A') {
				Bat = true;
				CPU_ball = true;
			}

			else if (BatOrBall == 'b' || BatOrBall == 'B') {
				Ball = true;
				CPU_Bat = true;
			}
		}

		else {

			cout << " => You have lost the toss, Opponent team has decided to Bat first. " << endl;
			CPU_Bat = true;
			Ball = true;
		}

	else {

		if (Toss == 'T' || Toss == 't') {

			cout << " => Congratulations, You have won the toss. What would you like to do? " << endl;
			cout << " => a) Batting or b) Bowling? Choose: Press A if you wants to Bat first or Press B if you wants to Ball first. ";
			cin >> BatOrBall;

			if (BatOrBall == 'a' || BatOrBall == 'A') {
				Bat = true;
				CPU_ball = true;
			}

			else if (BatOrBall == 'b' || BatOrBall == 'B') {
				Ball = true;
				CPU_Bat = true;
			}

		}

		else {

			cout << " => You have lost the toss, Opponent team has decided to Bat first. " << endl;
			CPU_Bat = true;
			Ball = true;

		}
	}

	system("pause");
	system("CLS");
}

void Batting() {

	int rscore;

	if (CPU_Bat == true) {

		srand(time(NULL));
		if (rand() % 2 == 0)
			isStrike = true;
		else
			isStrike = false;

		if (Entered_distanceV > Const_distanceV - 19.68) {

			score++;

			if (isStrike == true) {
				srand(time(NULL));
				rscore = rand();
				if (rscore % 2 == 0) {
					score += 4;
				}

				else {
					score += 6;
				}
			}

			else if (isStrike == false) {
				score = score + 0;
			}
		}

		else if (Entered_distanceH > Const_distanceH - 2.72) {

			if (isStrike == true) {
				score += 4;
				balls--;
			}

			else {

				score++;

			}
		}

		else if (Entered_height > Const_height) {

			balls--;

			if (isStrike == true)
				score += 6;
			else
				score += 0;
		}

		else if (Entered_angle_of_deviation > 5 || Entered_angle_of_deviation < -5) {

			balls--;

			if (isStrike == true) {
				srand(time(NULL));
				rscore = (rand() % 7);

				if (rscore == 0) {

					score += 0;

				}

				if (rscore == 1) {

					score += 1;

				}

				if (rscore == 2) {

					score += 2;

				}

				if (rscore == 3 || rscore == 4) {

					score += 4;

				}

				if (rscore == 5 || rscore == 6) {

					score += 6;

				}
			}

			else {
				score += 0;
			}
		}

		else {
			balls--;
			srand(time(NULL));
			rscore = rand();
			if (rscore % 2 == 0) {
				cout << " => Batsman Got out. " << endl;
				wickets--;
				system("pause");

			}
		}
	}

	else if (Bat == true) {

	int Ball_strike;
	int loop_check = 0;
	while (loop_check == 0)
	{
		cout << " => Do you wants to strike the ball? Type 1 if Yes or Type 0 if No. ";
		cin >> Ball_strike;
		if (Ball_strike == 1) {
			isStrike = true;
			loop_check = 1;
		}
		else if (Ball_strike == 0) {
			isStrike = false;
			loop_check = 1;
		}
		else
		{
			cout << " => Wrong Option. Enter Input again. " << endl;
			loop_check = 0;
		}
	}
		

		if (Entered_distanceV > Const_distanceV - 19.68) {

			score++;

			if (isStrike == true) {
				srand(time(NULL));
				rscore = rand();
				if (rscore % 2 == 0) {
					score += 4;
				}

				else {
					score += 6;
				}
			}

			else if (isStrike == false) {
				score = score + 0;
			}
		}

		else if (Entered_distanceH > Const_distanceH - 2.72) {

			if (isStrike == true) {
				score += 4;
				balls--;
			}
			else {
				score++;

			}
		}

		else if (Entered_height > Const_height) {

			balls--;
			if (isStrike == true)
				score += 6;
			else
				score += 0;
		}

		else if (Entered_angle_of_deviation > 5 || Entered_angle_of_deviation < -5) {

			balls--;
			if (isStrike == true) {
				srand(time(NULL));
				rscore = (rand() % 7);

				if (rscore == 0) {

					score += 0;

				}

				if (rscore == 1) {

					score += 1;

				}

				if (rscore == 2) {

					score += 2;

				}

				if (rscore == 3 || rscore == 4) {

					score += 4;

				}

				if (rscore == 5 || rscore == 6) {

					score += 6;

				}
			}

			else {
				score += 0;
			}
		}

		else {
			balls--;
			srand(time(NULL));
			rscore = rand();
			if (rscore % 2 == 0) {
				cout << " => Batsman Got out. " << endl;
				wickets--;
				system("pause");
			}
		}

	}
}

void Bowling() {

	int rball;

	if (CPU_ball == true) {

		srand(time(NULL));
		rball = (rand() % 6);

		if (rball == 0)
		{
		
			Entered_distanceV = 5;
			Entered_distanceH = 0.10;
			Entered_height = 1;
			Entered_angle_of_deviation = 0;

		}

		if (rball == 1)
		{

			Entered_distanceV = 1;
			Entered_distanceH = 1;
			Entered_height = 1;
			Entered_angle_of_deviation = 0;
		}

		if (rball == 2)
		{
			Entered_distanceV = 1;
			Entered_distanceH = 0.10;
			Entered_height = 2;
			Entered_angle_of_deviation = 0;
		}

		if (rball == 3)
		{
			Entered_distanceV = 1;
			Entered_distanceH = 0.10;
			Entered_height = 1;
			Entered_angle_of_deviation = 10;
		}

		if (rball == 4)
		{

			Entered_distanceV = 1;
			Entered_distanceH = 0.10;
			Entered_height = 1;
			Entered_angle_of_deviation = 0;
		}

	}

	else if (Ball == true) {

		

			
			cout << " => Tell characteristics of the ball being bowled. " << endl;
			cout << " => Tell where the bowler will step in the pitch. Anything above 2.45 (in meters) will be considered a NO BALL. " ;
			cin >> Entered_distanceV;
			cout << " => Tell how wide the ball would be pitched. Anything above 0.33 (in meters) will be considered as WIDE BALL. ";
			cin >> Entered_distanceH;
			cout << " => Tell how high the ball would be pitched. Anything above 1.72 (in meters) will be considered as BOUNCER. ";
			cin >> Entered_height;
			cout << " => Tell how much the ball will deviate. Anything above 5 or less than -5 (in degrees) will be considered as a SPIN BALL ";
			cin >> Entered_angle_of_deviation;


		
		
	}
	
}


int main() {

	cout << " => WE ARE LIVE ON THE T20 MATCH BETWEEN YOU AND CPU. " << endl;
	DecisionOfToss();
	cout << "**************  => SCORE: " << score << " ************** BALLS REMAINING: " << balls << " ************** WICKETS REMAINING: " << wickets << " <= **************" << endl;
	while (balls > 0 && wickets > 0) {

		Bowling();
		Batting();
		system("CLS");
		cout << "**************  => SCORE: " << score << " ************** BALLS REMAINING: " << balls << " ************** WICKETS REMAINING: " << wickets << " <= **************" << endl;

	}

	team1_score = score;
	balls = 120;
	score = 0;
	wickets = 10;
	CPU_Bat = !CPU_Bat;
	CPU_ball = !CPU_ball;
	Bat = !Bat;
	Ball = !Ball;

	cout << "   **************  WE ARE LIVE ON THE T20 MATCH BETWEEN YOU AND CPU. THIS IS SECOND INNINGS NOW.  **************  " << endl;

	while (balls > 0 && wickets > 0  && match_draw == false && match_win == false ) {

		Bowling();
		Batting();
		system("CLS");
		DecisionOfGame();
	}

	return 0;
}
