/*
 * letters.h
 *
 * Created: 28-3-2019 13:25:06
 *  Author: rickw
 */ 
#ifndef LETTERS_H
#define LETTERS_H

typedef struct {
	char c;
	int size;
	int structure[8];
} letter;

letter getLetter(char ch);
#endif
