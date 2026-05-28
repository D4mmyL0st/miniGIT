#include <stdlib.h>
#include <string.h>
#include "../headers/repo.h"
#include "../headers/repo.h"

Commit* init_repo(){
	Commit* c = malloc(sizeof(Commit));

	c -> message = strdup("inital commit");
	c -> parent = NULL;
	c -> files = NULL;

	return c;
}

void print_history(Commit* commit) {
    Commit* cur = commit;

    while (cur) {
        printf("Commit: %s\n", cur->message);
        printf("--------\n");
        cur = cur->parent;
    }
}:
