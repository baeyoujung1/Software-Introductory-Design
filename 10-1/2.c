#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char word[10]="";
	scanf("%s", word);
	int len = (int)strlen(word);
	for (int i = 0; i < len; ++i) {
		if (isupper(word[i])) {
			word[i] = tolower(word[i]);
		}
		else if (islower(word[i])) {
			word[i] = toupper(word[i]);
		}
	}
	printf("%s", word);

}