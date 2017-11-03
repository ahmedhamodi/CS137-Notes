#ifndef VECTOR_H
#define VECTOR_H

//add descriptions of methods from slide, week5
struct vector;
struct vector *vectorCreate();
struct vector *vectorDelete(struct vector *v);
void vectorSet(struct vector *v, int index, int value);
int vectorGet(struct vector *v, int index);
int vectorLength(struct vector *v);
#endif