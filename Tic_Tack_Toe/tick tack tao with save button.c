#include <stdio.h>


void initialize(int values[][3]);
void printboard(int values[][3]);
int invalidinput(int values[][3],int r,int c);
int checkWin(int values[][3], int sign);
void savegame(int values[][3],int sign);
int gamecontinue(int values[][3]);
void play(void);

int main(){
	
	char quit;
	printf("Tick Tack Toe\n");
	
	do{
		play();
		printf("\n\nDo you want to play again? Press Q to Quit any letter to Play again");
		scanf(" %c",&quit);
	}while(quit!='Q' && quit!='q');
	return 0;
	
}
void initialize(int values[3][3]){
	
	int temp=49,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			values[i][j]=temp;
	        temp++;
		}
	}
}

void printboard(int values[3][3]){
	
	//system("cls");
	printf("\n     |     |     |");
	for(int i=0;i<3;i++){
		printf("\n");
		
		for(int j=0;j<3;j++){
			printf("  %c  |",values[i][j]);
		}
		if(i!=2){
			printf("\n_____|_____|_____|");
		}
		printf("\n     |     |     |");
	}
	
}

int invalidinput(int values[][3],int r,int c){
	
		if(r>2 || r<0 || c>2 || c<0 || values[r][c]>64)
		return 1;
		else
		return 0;
}

int checkWin(int values[][3], int sign){
	
	if ( values[0][0] == sign && values[0][1] == sign && values[0][2] == sign)
		return 1;
	else if ( values[1][0] == sign && values[1][1] == sign && values[1][2] == sign)
		return 1;
	else if ( values[2][0] == sign && values[2][1] == sign && values[2][2] == sign)
		return 1;
	else if ( values[0][0] == sign && values[1][0] == sign && values[2][0] == sign)
		return 1;
	else if ( values[0][1] == sign && values[1][1] == sign && values[2][1] == sign)
		return 1;
	else if ( values[0][2] == sign && values[1][2] == sign && values[2][2] == sign)
		return 1;
	else if ( values[0][0] == sign && values[1][1] == sign && values[2][2] == sign)
		return 1;
	else if ( values[0][2] == sign && values[1][1] == sign && values[2][0] == sign)
		return 1;
	else
		return 0;
}

void play(void){
	
	int count=1,turn,player,values[3][3];
	char continuegame;
	
	printf("\n\nDo you want to continue the previous game? press C to continue or any letter for new game");
	scanf("%c",&continuegame);
	
	if(continuegame=='C' || continuegame=='c')
	count=gamecontinue(values);
	
	else initialize(values);
	
	printf("\n\nPress 0 anywhere in the program to save the game");
	
	for(int i=count;i<10;i++){
		printboard(values);
		if(count%2==1)
		player='A';
		else
		player='B';
		printf("\n\nEnter input for %c player",player);
		scanf("%d",&turn);
		
		if(turn==0){
			savegame(values,count);
			break;
		}
		
		int row = (turn - 1) / 3;
		int column = (turn - 1) % 3;
		count++;
		
		if(invalidinput(values,row,column)){
			printf("\nInvalid Input |-_-|\n");
			count--;
			continue;
		}
		
		values[row][column] = player;
		if(checkWin(values,player)){
			printf("Player %c Win",player);
			printboard(values);
			break;
		}
	}
	
	    if ( count == 10){
	    	printf("\nMatch is Draw");
		    printboard(values);
		}
}

void savegame(int values[][3],int position){
	
	FILE *save;
	save=fopen("SavedGame.txt","w");
	fprintf(save,"%d\n",position);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			fprintf(save,"%d ",values[i][j]);
		}
	}
	
	printf("\nYour game has been saved");
	fclose(save);
}

int gamecontinue(int values[][3]){
	FILE *saved;
	int position;
	
	saved = fopen("SavedGame.txt", "r" );
	if ( saved == NULL )
	{
		printf("\nSave any Game First");
		return 11;
	}
	
	fscanf(saved,"%d",&position);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			fscanf(saved,"%d",&values[i][j]);
		}
	}
	return position;
	
	fclose(saved);
}

