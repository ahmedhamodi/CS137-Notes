#include <stdio.h>

struct link {
	int src, dst;
};

void pageRank(struct link links[], int numLinks, double ranks[], int numPages, double delta, int iters) {
	int out[numPages];
	double tempRanks[numPages];

	//declare all values of out array to 0
	for (int i=0; i < numPages; i++) {
		out[i] = 0;
	}

	//counts all the links between a source and it's destination
	for (int j=0; j < numLinks; j++) {
		out[links[j].src] ++;
	}

	//sets up the default value for the page rank of each element in the r array
	for (int i=0; i < numPages; i++) {
		ranks[i] = 1.0/numPages;
	}

	//readjusts the ranking values
	for (int k=0; k < iters; k++) {
		//first term in sum
		for (int i=0; i < numPages; i++) {
			tempRanks[i] = (1.0-delta)/numPages;
		}
		//summation term
		for (int j=0; j < numLinks; j++) {
			tempRanks[links[j].dst] += delta * ranks[links[j].src]/out[links[j].src];
		}
		//update r value
		for (int i=0; i < numPages; i++) {
			ranks[i] = tempRanks[i];
		}
	}
}

int main (void) {
	struct link l[] = {{0,1}, {0,2}, {1,2}, {2,0}};
	double r[3] = {0.0};
	pageRank(l, 4, r, 3, 0.8, 20);
	for (int i=0; i<3; i++) {
		printf("%g\n", r[i]);
	}
}