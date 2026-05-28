#include <stdlib.h>
#include <string.h>
#include "../headers/repo.h"

Commit* init_repo(){
	Commit* c = malloc(sizeof(Commit));

	c -> message = strdup("inital commit");
	c -> parent = NULL;
	c -> files = NULL;

	return c;
}

