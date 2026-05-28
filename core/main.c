#include <stdio.h>
#include "../headers/repo.h"
#include "../headers/file.h"

int main() {
    Commit* repo = init_repo();
    Commit* v1 = add_file(repo, "a.txt", "hello");
    Commit* v2 = add_file(v1, "b.txt", "world");
    Commit* v3 = remove_file(v2, "a.txt");

    printf("%s\n", get_file_content(v2, "a.txt"));
    printf("%s\n", get_file_content(v2, "b.txt"));
    printf("v2 created\n");
    print_files(v2);
    print_history(v2);
    print_files(v3);
    return 0;
}

