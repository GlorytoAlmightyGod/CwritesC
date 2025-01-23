#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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
    ifstream fptr(name_of_file);
    string text_in_the_file;
    while (getline(fptr, text_in_the_file)) {
        cout << text_in_the_file;
        cout << endl;
    }
}

void test_the_development() {
    for(int i=1;i<=10;i++) {
        write_to_an_existing_file("auto_generated.cpp", "message\n");
    }
    read_an_existing_file("auto_generated.cpp");
}




















int main(void) {
    test_the_development();
    return 0;
}