#include<stdio.h>
#include<string.h>
#include <math.h>

void reverse_sentence(char name[],int num);
int main() {
	char name[25];
	printf("Enter a sentece : ");
	fgets(name,25,stdin);
	printf("senten reverse : ");
	reverse_sentence(name, strlen(name));
}

void reverse_sentence(char name[], int num) {
	if (num == -1)
		return;
	printf("%c", name[num]);
	reverse_sentence(name, num - 1);

}
