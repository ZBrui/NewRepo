#pragma once
#include"Header.h"
#include<stdio.h>


void instructions(void);
/*void printElement(char data)

{

	printf("%c ", data);

}*/
int main()
{
	stackptr stackPtr = NULL;  /* points to stack top */
	int choice, value;

	instructions();
	printf("? ");
	scanf_s("%d", &choice);

	while (choice != 3) {

		switch (choice) {
		case 1:      /* push value onto stack */
			printf("Enter an integer: ");
			scanf_s("%d", &value);
			strack_int(&stackPtr, value);


			strack_print(stackPtr);
			break;
		case 2:      /* pop value off stack */
			if (!strack_empty(stackPtr))
				printf("The popped value is %d.\n",
					strack_out(&stackPtr));

			strack_print(stackPtr);
			break;
		default:
			printf("Invalid choice.\n\n");
			instructions();
			break;
		}

		printf("? ");
		scanf_s("%d", &choice);
	}

	printf("End of run.\n");
	return 0;
}
void instructions(void)
{
	printf("Enter choice:\n"
		"1 to push a value on the stack\n"
		"2 to pop a value off the stack\n"
		"3 to end program\n");
}
