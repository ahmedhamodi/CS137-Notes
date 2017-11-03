#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

struct vector{
  	int *a;
  	int size, length;
};

struct vector *vectorCreate(void){
	struct vector * ans = malloc(sizeof(struct vector));
	assert(ans);
	ans->size = 1;
	ans->length = 0;
	ans->a = malloc(1*sizeof(int));
	assert((*ans).a); //(*ans).a == ans->a
	return ans;
}

struct vector *vectorDelete(struct vector *v){
	if (v) {
		free(v->a); //must be freed first
		free(v);
	}
	return NULL;
}

void vectorSet(struct vector *v, int index, int value){
	assert(v && index >= 0);
	//grow the array if necessary
	if (index >= v->size) {
		do {
			v->size *= 2;
		} while (index >= v->size);
		v->a = (int *)realloc(v->a, v->size*sizeof(int));
	}
	//setting undefined values
	while (index >= v->length) {
		v->a[v->length] = 0;
		v->length++;
	}
	v->a[index] = value;
}

int vectorGet(struct vector *v, int index){
	assert(v);
	assert(index >= 0);
	assert(index < (*v).length);
	return v->a[index];
}

int vectorLength(struct vector *v){
	assert(v);
	return v->length;
}

int main() {
  	struct vector *v = vectorCreate();
  	vectorSet(v, 10, 2); //sets the 10th index to 2, aka 11 elements
  	printf("%d\n", vectorLength(v)); //11
  	printf("%d\n", vectorGet(v, 10)); //2
  	printf("%d\n", vectorGet(v, 0)); //0
  	printf("%d\n", vectorGet(v, 9)); //0
	v = vectorDelete(v);
	return 0;
}