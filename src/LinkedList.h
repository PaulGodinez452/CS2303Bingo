/*
 * LinkedList.h
 *
 *  Created on: Nov 4, 2019
 *      Author: Therese
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdbool.h>
#include "cardCell.h"
//typedef struct
//{
//	int row;
//	int col;
//	char letter;
//	char digit;
//	bool matched;
//}cardCellContent2;

typedef struct
{
	int roomNumber;
	float treasure;
}SearchResults;
typedef cardCellContent Payload;
typedef SearchResults Payload2;
struct LLNode;
typedef struct
{
	struct LLNode* next;
	struct LLNode* prev;
	Payload* payP;
}LLNode;
typedef struct
{
	struct LLNode2* next;
	struct LLNode2* prev;
	Payload2* payP;
}LLNode2;

typedef struct
{
	Payload* mp;
	LLNode* newQHead;
}backFromDQFIFO;

LLNode* makeEmptyLinkedList();
LLNode2* makeEmptyLinkedList2();
LLNode* removeFromList(LLNode* hp, Payload* pP);
void savePayload(LLNode* lp, Payload* mp);
void savePayload2(LLNode2* lp, Payload2* mp);
bool isEmpty(LLNode* lp);
Payload* dequeueLIFO(LLNode* lp);
backFromDQFIFO* dequeueFIFO(LLNode* lp);
void printHistory(LLNode2* hp);

#endif /* LINKEDLIST_H_ */
