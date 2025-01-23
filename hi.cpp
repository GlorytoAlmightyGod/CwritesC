#include <stdio.h>

void create_a_new_file(char name_of_file[]) {
    FILE *fptr;
    fptr = fopen(name_of_file, "w");
    fclose(fptr);
}

void write_to_an_existing_file(char name_of_file[], char text_to_be_written[]) {
    FILE *fptr;
    fptr = fopen(name_of_file, "a");

    fprintf(fptr, text_to_be_written);
    fclose(fptr);
}

void read_an_existing_file(char name_of_file[]) {
    FILE *fptr;
    fptr = fopen(name_of_file, "r");


}

void test_the_development() {
    for(int i=1;i<=10;i++) {
        write_to_an_existing_file("auto_generated.cpp", "message\n");
    }
}




















int main(void) {
    test_the_development();
    return 0;
}