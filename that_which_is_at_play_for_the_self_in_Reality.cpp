#include "basic_operations.h"

string find_my_object(string object_to_be_found, string data[]) {

    cout << "searching for " << object_to_be_found << " in : " << data[0] << endl;

    string perception_of_the_object = "FAILED to find the object.";
    
    for (int i = 1; i <= MEMORY_POWER; i++) {
        if(data[i] == object_to_be_found) {
            perception_of_the_object = "SUCCESS! object encountered.";
            break;
        }
    }
    return perception_of_the_object;
}

int main(void) {
    wake_the_data_up(that_which_is_at_play_for_the_self_in_Reality, "that_which_is_at_play_for_the_self_in_Reality");

    string lost_object;
    cout << "enter the object you want me to find : ";
    cin >> lost_object;
    
    collect_the_data(that_which_is_at_play_for_the_self_in_Reality, "things_around_me");
    cout << find_my_object(lost_object, that_which_is_at_play_for_the_self_in_Reality) << endl;

    return 0;
}
