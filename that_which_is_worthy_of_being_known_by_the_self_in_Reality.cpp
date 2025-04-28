#include "basic_operations.h"

void hello_world(string input) {
    if(input == "i am a secret!") {
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[1] = "God is good.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[2] = "God is beyond imagination.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[3] = "God is scary.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[4] = "God is loving.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[5] = "God is wonderfull.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[6] = "God is real.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[7] = "God is.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[8] = "God is blissfull.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[9] = "God is simple.";
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[10] = "God is smiling.";

    } else {
        that_which_is_worthy_of_being_known_by_the_self_in_Reality[1] = "you are not worthy.";
    }
}

int main(void) {
    wake_the_data_up(that_which_is_worthy_of_being_known_by_the_self_in_Reality, "that_which_is_worthy_of_being_known_by_the_self_in_Reality");

    cout << "Hello, World! please give me a sentence.";
    cout << endl;
    
    string user_input;
    getline(cin, user_input);
    hello_world(user_input);


    show_the_data(that_which_is_worthy_of_being_known_by_the_self_in_Reality);
    
    return 0;
}
