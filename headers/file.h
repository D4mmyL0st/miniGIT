#ifndef FILE_H
#define FILE_H

#include "repo.h"
const char* get_file_content(Commit* commit, const char* path);

Commit* add_file(Commit* current, const char* path, const char* content);

void print_files(Commit* commit);

Commit* remove_file(Commit* current, const char* path);

#endif
