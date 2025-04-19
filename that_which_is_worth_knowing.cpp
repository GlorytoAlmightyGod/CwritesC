#include <iostream>
#include <string>
using namespace std;

#define MEMORY_POWER 3

string that_which_is_worth_knowing[1+MEMORY_POWER];

void hello_world(string input) {
    if(input == "i am a secret!") {
        that_which_is_worth_knowing[1] = "God is good.";
        that_which_is_worth_knowing[2] = "God is beyond imagination.";
        that_which_is_worth_knowing[3] = "God is scary but wonderfull.";

    } else {
        cout << "Goodbye, World!";
    }
}

void show_the_data(string data[]) {
    cout << "here is the data : ";
    for(int i = 0; i <= MEMORY_POWER; i++) {
        cout << data[i] << endl;
    }
    cout << endl;
}

void wake_the_data_up() {
    that_which_is_worth_knowing[0] = "that_which_is_worth_knowing";
}

int main(void) {
    wake_the_data_up();

    cout << "Hello, World! please give me a sentence.";
    cout << endl;
    
    string user_input;
    getline(cin, user_input);
    hello_world(user_input);


    show_the_data(that_which_is_worth_knowing);
    
    return 0;
}
