#pragma once
#ifndef __Source_h__

#define __Source_h__

#include<stdbool.h>
typedef struct stack
{
	char *data;
	int size;
	int capacity;
}stack,*stackptr;

//typedef void(*LITE_FUNC)(char);
void strack_int(stackptr*,const char data);
char strack_out(stackptr*);
bool strack_empty(stackptr);
void strack_print(stackptr);

#endif