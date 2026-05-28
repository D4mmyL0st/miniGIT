#ifndef REPO_H
#define REPO_H

typedef struct FileContent {
	char* content;
}FileContent;

typedef struct FileNode {
	char* path;
	FileContent* data;
	struct FileContent* next;
}FileNode;

typedef struct Commit{
	char* message;
	struct Commit* parent;
	FileNode* files;
}Commit;

Commit* init_repo();

#endif

