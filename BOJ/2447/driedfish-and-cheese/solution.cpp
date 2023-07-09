#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string>
#include <vector>
#include <iostream>

void solution(int i, int j, int num);

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			solution(i, j, num);
		}
		puts("");
	}
}

void solution(int i, int j, int num) {
	if (num == 0) {
		return;
	}
	if (i/(num/3)%3==1&& j / (num / 3)%3 == 1 && 0<=i/(num/3) % 3 && i / (num / 3) % 3 <= 2 && 0 <= j / (num / 3) % 3 && j / (num / 3) % 3 <= 2) {
		printf(" ");
	}
	else if(num==3) {
		printf("*");
	}
	else {
		solution(i, j, num/3);
	}

}