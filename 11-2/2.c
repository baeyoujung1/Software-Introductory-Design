#include <stdio.h>

typedef struct
{
	char name[7];
	int score;
}Person;
void printScoreStars(Person* persons, int len) {
	for (int i = 0; i < len; i++) {
		printf("%-8s", persons[i].name);
		for (int j = 0; j < persons[i].score / 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	Person student[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", student[i].name,&student[i].score);
	}
	printScoreStars(student,3);
	return 0;
}