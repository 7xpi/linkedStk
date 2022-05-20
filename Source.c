#include <windows.h>
#include <malloc.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include "stk.h"
//FILENAME_MAX strcpy_s
//do on strings
struct stk* stkT = NULL;

int main(void) {

	int n;
	printf_s("data_t - int\n\n");
	printf_s("Input N: ");
	scanf_s("%d", &n);

	data_t tmp;

	forn(i, 0, n) {
		printf_s("Enter a value: ");
		scanf_s("%d", &tmp);
		push(tmp);
	}

	printf_s("\nstk:\n");
	prntfStk(stkT);

	printf_s("\nPop: %d\n", pop());
	
	printf_s("\nstk:\n");
	prntfStk(stkT);

	printf_s("\n\n\tPress any key to exit: ");
	system("pause>nul");
	return 0;
}

void push(data_t a) {
	struct stk* tmp = (struct stk*)malloc(sizeof(struct stk));
	if (!tmp) {
		me99;
	}
	if (stkT == NULL) {
		tmp->next = NULL;
	}
	else {
		tmp->next = stkT;
	}
	tmp->data = a;
	stkT = tmp;
}
data_t pop(void) {
	if (stkT == NULL) {
		printf_s("\n\nstk is empty\n\n");
		exit(3221225477);
	}

	struct stk* tmp = stkT;
	data_t rvalue = stkT->data;
	stkT = tmp->next;
	return rvalue;
}
void prntfStk(void) {
	struct stk* tmp = stkT;
	if (stkT == NULL) {
		printf_s("stk is empty\n");
		return;
	}
	while (tmp->next != NULL) {
		printf_s("%d\n", tmp->data);
		tmp = tmp->next;
	}
	printf_s("%d\n", tmp->data);
}