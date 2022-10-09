#include<iostream>
#include<ctime>
using namespace std;

const int Const_distanceV = 55;
const int Const_distanceH = 10;
const int Const_height = 5;

void TeamNames() //setting team names
{
	string team, team_opp;
	cout << "Enter the name of your team: ";
	cin >> team;
	cout << "\nEnter the name of your opponent team: ";
	cin >> team_opp;
	cout << endl << "\t \t" << team << "  VS  " << team_opp << endl;
}

int DecisionOfToss() //for playing toss
{
	srand(static_cast <unsigned int> (time(0)));
	int chose=0, chose2=0; 
	int toss=0, toss2=0; 
	cout << "To chose head, press 0 and to chose tail, press 1 \n";
	cin >> chose;
	toss = rand() % 2;
	if (toss==chose) {
		cout << "you have won the toss \n";
		cout << "if u want to bat first, press 0. If u want to bowl first, press 1 ";
		cin >> toss2;
		return toss2;
	}
	else {
		cout << "you have lost the toss \n \t";
		chose2 = rand() % 2;
		if (chose2 == toss){
			cout << "The opponent team is bowling first\n";
			return 0; // 0 is foR batting
		}
		else {
			cout << "The opponent team is batting first\n";
			return 1; // 1 is for bowling
		}
	}
}

int bowling(int overs)
{
	srand(static_cast <unsigned int> (time(0)));
	int scoreA = 0, score_x = 0;
	bool strike = 0;
	int ball = 6 * overs;
	int wickets = 10 , select = 0, out =0;
	int Entered_distanceV = 0, entered_distanceH=0;
	int Entered_height = 0, Entered_angle_d = 0;
	cout << "The length of the pitch is: " << Const_distanceV << endl;
	cout << "Width allowed for bowling: " << Const_distanceH << endl;
	cout << "Max height allowed (above which ball is bouncer): " << Const_height << endl;

	for (ball; ball>0; --ball)
	{
		cout << "\n"  << ball << " balls and " << wickets << " wickets are left \n" ;
		do {
			cout << "Enter distance, the ball has to cover within the pitch: ";
			cin >> Entered_distanceV;
			if ((Entered_distanceV < 54) || (Entered_distanceV > 57))
				cout << "\n You have entered invalid value, enter again:\n \t";
		} while ((Entered_distanceV < 54) || (Entered_distanceV > 57));

		do {
			cout << "\n Enter width, the ball has to cover: ";
			cin >> entered_distanceH;
			if ((entered_distanceH < 0) || (entered_distanceH > 20))
				cout << "\n You have entered invalid value, enter again:\n \t";
		} while ((entered_distanceH < 0) || (entered_distanceH > 20));

		do {
			cout << "\n Enter the height of the ball at the striker's place: ";
			cin >> Entered_height;
			if ((Entered_height < 0) || (Entered_height > 7))
				cout << "\n You have entered invalid value, enter again:\n \t";
		} while ((Entered_height < 0) || (Entered_height > 7));

		do {
			cout << "\n Enter the angle of ball: ";
			cin >> Entered_angle_d;
			if ((Entered_angle_d < 0) || (Entered_angle_d > 360))
				cout << "\n You have entered invalid value, enter again:\n \t";
		} while ((Entered_angle_d < 0) || (Entered_angle_d > 360));

		if (Entered_distanceV < Const_distanceV) {//to check "no ball"
			select = 1;
		}
		else if (entered_distanceH > Const_distanceH) { // to check "wide ball"
			select = 2;
		}
		else if (Entered_height > Const_height) { // to check "bouncer ball"
			select = 3;
		}
		else if ((Entered_angle_d > 95) || (Entered_angle_d < 85)) { // to check "spin ball"
			select = 4;
		}
		else {
			select = 0;
		}
		switch (select)
		{
		   case 1:
		   {
			   cout << "\n   It was NOBALL! ";
			 ball += 1;
			 scoreA += 1;
			 strike = rand() % 2;
			 if (strike == 0) {
				 scoreA += 0;
				 cout << "\nThe batsman did not strike the ball.";
			 }
			 else {
				 scoreA += (4 + 2 * (rand() % 2));
				 cout << "\nThe batsman has strike the ball and his score is: " << scoreA ;
			 }
			 break;
		    }
		   case 2:
		   {
			   cout << "\n   It was a WIDE ball! ";
			   scoreA += 1;
			   strike = rand() % 2;
			   if (strike == 0) {
				   scoreA += 0;
				   cout << "\nThe batsman did not strike the ball.";
			   }
			   else {
				   scoreA += 4;
				   cout << "\nThe batsman has strike the ball and his score is: " << scoreA;
			   }
			   break;
		   }
		   case 3:
		   {
			   cout << "\n   It was a BOUNCER: ";
			   strike = rand() % 2;
			   if (strike == 0) {
				   scoreA += 0;
				   cout << "\nThe batsman did not strike the ball.";
			   }
			   else {
				   scoreA += 6;
				   cout << "\nThe batsman has strike the ball and his score is: " << scoreA;
			   }
			   break;
		   }
		   case 4:
		   {
			   cout << "\n   It was a SPIN ball! ";
			   strike = rand() % 2;
			   if (strike == 0) {
				   scoreA += 0;
				   cout << "\nThe batsman did not strike the ball.";
			   }
			   else {
				   score_x = rand() % 7;
				   if ((score_x == 3) || (score_x == 5))
					   score_x += 1;
				   scoreA += score_x;
				   cout << "\nThe batsman has strike the ball and his score is: " << scoreA ;
			   }
			   break;
		   }
		   default:
		   {
			   cout << "\n   It was a NORMAL ball! ";
			   strike = rand() % 2;
			   if (strike == 0) {
				   scoreA += 0;
				   cout << "\nThe batsman did not strike the ball.";
			   }
			   else {
				   score_x = rand() % 7;
				   if ((score_x == 3) || (score_x == 5))
					   score_x += 1;
				   scoreA += score_x;
				   cout << "\nThe batsman has strike the ball and his score is: " << scoreA;
			   }
		   }
		}
		out = rand() % 5;
		if (out == 3) {
			wickets -= 1;
			cout << "\n \t \tWoohoo! you have taken a wicket\n";
		}
		if (wickets == 0)
			break;
	}
	return scoreA;
}

int batting(int overs)
{
	char ball;
	bool isStrike = 0;
	srand(static_cast <unsigned int> (time(0)));
	int out = 0, wickets = 10;
	int length_p = 0, width_b = 0;
	int height = 0, angle_d = 0;
	int scoreB = 0, score_z=0;
	int ball_count = 6 * overs;
	for (ball_count; ball_count > 0; --ball_count)
	{
		length_p = 54 + rand() % 4;
		width_b = rand() % 21;
		height = rand() % 8;
		angle_d = rand() % 361;
		if (length_p < Const_distanceV) {
			cout << "The coming ball is noball\n";
			ball = 'N';
			ball_count += 1;
			scoreB += 1;
		}
		else if (width_b > Const_distanceH) {
			cout << "The coming ball is wide\n";
			ball = 'W';
			scoreB += 1;
		}
		else if (height > Const_height) {
			cout << "The coming ball is bouncer\n";
			ball = 'B';
		}
		else if ((angle_d > 95) || (angle_d < 85)) {
			cout << "The coming ball is spin\n";
			ball = 'S';
		}
		else
		{
			cout << "The coming ball is a normal ball\n";
			ball = 'R';
		}
		cout << "\t Do you want to strike the ball? press 0, if no and press 1, if yes: \t";
		cin >> isStrike;
		switch (isStrike)
		{
		case 0:
		{
			scoreB += 0;
			break;
		}
		case 1:
		{
			switch(ball)
			{
		case 'N': {
				scoreB += (4 + 2 * (rand() % 2));
				cout << "\nYou have strike the ball and your score is: " << scoreB <<endl;
				break;
			}

		case 'W':
			{
				scoreB += 4;
				cout << "\nYou have strike the ball and your score is: " << scoreB << endl;
				break;
			}
		case 'B':
			{
				scoreB += 6;
				cout << "\nYou have strike the ball and your score is: " << scoreB << endl;
				break;
			}
		case 'S':
			{
				score_z = rand() % 7;
				if ((score_z == 3) || (score_z == 5))
					score_z += 1;
				scoreB += score_z;
				cout << "\nYou have strike the ball and your score is: " << scoreB << endl;
				break;
			}
			} //end of inner switch
		} //end of case1
		}//end of outer switch
		out = rand() % 5;
		if (out == 3) {
			wickets -= 1;
			cout << "\n	You are out! welcome to the  new batsman.\n";
		}
		if (wickets == 0)
			break;
	}//end of for loop
	return scoreB;
}

void DecisionOfGame(int score3, int score4) //declare game winner team
{
	if (score4 > score3)
	{
		cout << "\nCONGRATULATIONS! You have WON the match.\n";
	}
	else if (score4 < score3)
	{
		cout << "\nALAS! You have LOST the match. Better luck next time\n";
	}
	else
	{
		cout << "\n This match is tie. You have done a great job.\n";
	}
}


int main()
{
	int score3 = 0, score4=0;
	int inning1;
	int over = 0;
	TeamNames();
	cout << "\nEnter the no. of overs you want in the match: ";
	cin >> over;
	inning1= DecisionOfToss();
	switch(inning1)
	{
	    case 0:
		{
			score4 = batting(over);
			cout << "\n The score of your team is: " << score4 << endl;
			score3 = bowling(over);
			cout << "\n The score of opponent team is: " << score3 <<endl;
			DecisionOfGame(score3, score4);
			break;
		}
	    case 1: 
		{
		    score3 = bowling(over);
		    cout << "\n The score of opponent team is: " << score3<< endl;
		    score4 = batting(over);
		    cout << "\n The score of your team is: " << score4<< endl;
			DecisionOfGame(score3, score4);
		    break;
		}
	}// end of switch
	return 0;
}