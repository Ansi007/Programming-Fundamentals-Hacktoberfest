


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int guess(char my[], int s, char user[], int s2) {

	//	int flag = 0;

	for (int i = 0;my[i] != '\0';i++) {

		for (int j = 0;user[j] != '\0';j++) {

			if (my[i] == user[j]){

				return 1;

			}
			else {
				return 0;
			}






		}






	}





}
int main() {


	char letter[10] = "abcdefgh";

	char letter2[10];

	printf("enter a letter:");
	scanf("%9s", letter2);

	int ans = guess(letter, 10, letter2, 10);


	if (ans == 1) {
		printf(" the %s letter is match:", letter2);
	}
	else {

		printf(" the %s letter NOT is match:", letter2);
	}


	return 0;
}