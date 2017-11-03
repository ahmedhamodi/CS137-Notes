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

// void vectorSet(struct vector *v, int index, int value){

// }

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
  	// vectorSet(v, 10, 2);
  	// printf("%d\n", vectorLength(v)); 
  	// printf("%d\n", vectorGet(v, 10));
	v = vectorDelete(v);
	return 0;
}