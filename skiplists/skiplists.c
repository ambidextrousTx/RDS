#include <stdio.h>
#include <stdlib.h>
#include "../common/linkedlist.h"

void build_bottom_layer(int array[], int length) {
	struct Node *head = malloc(sizeof(struct Node));

	for (int i = 0; i < length; i++) {
		head->element = array[i];
	}
}
