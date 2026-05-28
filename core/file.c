#include <stdlib.h>
#include <string.h>
#include "../headers/file.h"

static FileNode* copy_files(FileNode* head) {
    if (!head) return NULL;

    FileNode* new_head = malloc(sizeof(FileNode));
    new_head->path = strdup(head->path);
    new_head->data = malloc(sizeof(FileContent));
    new_head->data->content = strdup(head->data->content);
    new_head->next = copy_files(head->next);

    return new_head;
}

Commit* add_file(Commit* current, const char* path, const char* content) {
    Commit* new_commit = malloc(sizeof(Commit));

    new_commit->message = NULL;
    new_commit->parent = current;

    new_commit->files = copy_files(current ? current->files : NULL);

    // добавить/обновить файл (пока просто в начало списка)
    FileNode* node = malloc(sizeof(FileNode));
    node->path = strdup(path);
    node->data = malloc(sizeof(FileContent));
    node->data->content = strdup(content);
    node->next = new_commit->files;

    new_commit->files = node;

    return new_commit;
}
