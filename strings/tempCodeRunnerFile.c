#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    // create and write into file1
    f1 = fopen("file1.txt", "w");
    fprintf(f1, "you are in file 1\n");
    fclose(f1);

    //  create and write into file2
    f2 = fopen("file2.txt", "w");
    fprintf(f2, "you are in file 2\n");
    fclose(f2);

    // open both files for reading
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    //  open third file for writing
    f3 = fopen("file3.txt", "w");

    // copy file1 into file3
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // copy file2 into file3
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    // close all files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Files merged successfully.\n");

    return 0;
}