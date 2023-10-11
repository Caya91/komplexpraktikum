#include <stdlib.h>
#include <stdio.h>

void sieve(int max)
{
	/*
		1. Create a list of consecutive integers from 2 to n:
		   (2, 3, 4, ..., n).
		2. Initially, let p equal 2, the first prime number.
		3. Starting from p, count up in increments of p and
		   mark each of these numbers greater than p itself
		   in the list. These numbers will be 2p, 3p, 4p, etc.;
		   note that some of them may have already been marked.
		4. Find the first number greater than p in the list
		   that is not marked. If there was no such number,
		   stop. Otherwise, let p now equal this number (which
		   is the next prime), and repeat from step 3.
	 */
	if (max < 2)
		return;

	/* List creation */
	int *array = new int[max];

	array[0] = 1;
	array[1] = 1;
	for (int i = 2; i < max; ++i) {
		array[i] = 0;
	}


	/* Initial candidate = 2 */
	int candidate = 2;

	while (candidate < max) {
		for (int x = 2*candidate; x < max; x += candidate) {
			array[x] = 1;
		}

		do {
			candidate++;
		} while ((array[candidate] == 1) && (candidate != max));
	}

	for (int i = 2; i < max; ++i) {
		if (array[i] == 0)
			printf("%d ", i);
	}
	printf("\n");

	delete [] array;
}


int main(int argc, char **argv)
{
	sieve(strtol(argv[1], 0, 0));

	return 0;
}
