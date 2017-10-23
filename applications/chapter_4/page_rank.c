#include <stdio.h>

typedef struct {
	int src, dst;
} link;

void pageRank(link l[], int nlinks, double r[], int npages, double delta, int iters) {
	int out[npages];
	double s[npages];

	//declare all values of out array to 0
	for (int i=0; i < npages; i++) {
		out[i] = 0;
	}

	//counts all the links between a source and it's destination
	for (int j=0; j < nlinks; j++) {
		out[l[j].src] ++;
	}

	//sets up the default value for the page rank of each element in the r array
	for (int i=0; i < npages; i++) {
		r[i] = 1.0/npages;
	}

	for (int k=0; k < iters; k++) {
		//first term in sum
		for (int i=0; i < npages; i++) {
			s[i] = (1.0-delta)/npages;
		}
		//summation term
		for (int j=0; j < nlinks; j++) {
			s[l[j].dst] += delta * r[l[j].src]/out[l[j].src];
		}
		//update r value
		for (int i=0; i < npages; i++) {
			r[i] = s[i];
		}
	}
}

int main (void) {
	link l[] = {{0,1}, {0,2}, {1,2}, {2,0}};
	double r[3] = {0.0};
	pageRank(l, 4, r, 3, 0.8, 20);
	for (int i=0; i<3; i++) {
		printf("%g\n", r[i]);
	}
}