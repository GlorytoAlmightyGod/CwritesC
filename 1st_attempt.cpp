#include <iostream>
#include <string>
using namespace std;

string that_which_is_worth_knowing[4];
string that_which_is_NOT_worth_knowing[4];

string that_which_the_self_can_do[4];
string that_which_the_self_can_NOT_do[4];


void hello_world(string input) {
    if(input == "i am a secret!") {
        that_which_is_worth_knowing[1] = "God is good.";
        that_which_is_worth_knowing[2] = "God is beyond imagination.";
        that_which_is_worth_knowing[3] = "God is scary but wonderfull.";

    } else {
        cout << "Goodbye, World!";
    }
}

void show_the_data(string data[], int length_of_array) {
    cout << "here is the data : ";
    for(int i = 0; i < length_of_array; i++) {
        cout << data[i] << endl;
    }
    cout << endl;
}

void wake_the_data_up() {
    that_which_is_worth_knowing[0] = "that_which_is_worth_knowing";
    that_which_is_NOT_worth_knowing[0] = "that_which_is_NOT_worth_knowing";
    that_which_the_self_can_do[0] = "that_which_the_self_can_do";
    that_which_the_self_can_NOT_do[0] = "that_which_the_self_can_NOT_do";
}

int main(void) {
    wake_the_data_up();

   cout << "HI please give me a sentence.";
   cout << endl;
   
   string user_input;
   getline(cin, user_input);
   hello_world(user_input);


    show_the_data(that_which_is_worth_knowing, 4);
    show_the_data(that_which_is_NOT_worth_knowing, 4);
   return 0;
}
