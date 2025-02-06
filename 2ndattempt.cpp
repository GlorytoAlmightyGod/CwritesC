#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#define MEMORY_POWER 10

string that_which_is_at_play_for_the_self_in_Reality[MEMORY_POWER];

string find_my_object(string object_to_be_found) {
    string status_of_the_self_with_respect_to_the_object = "FAILED to find the object.";
    
    for (int i = 0; i < MEMORY_POWER; i++) {
        if(that_which_is_at_play_for_the_self_in_Reality[i] == object_to_be_found) {
            status_of_the_self_with_respect_to_the_object = "SUCCESS! object encountered around me.";
            break;
        }
    }
    return status_of_the_self_with_respect_to_the_object;
}

void show_the_data(string data[], int length_of_array) {
    cout << "here is the data : ";
    for(int i = 0; i < length_of_array; i++) {
        cout << data[i] << endl;
    }
    cout << endl;
}

void wake_the_data_up() {
    that_which_is_at_play_for_the_self_in_Reality[0] = "that_which_is_at_play_for_the_self_in_Reality";
}

int main(void) {
    wake_the_data_up();

    string name_of_file = "things_around_me";
    cout << "choosing : " << name_of_file <<endl;

    ifstream fptr(name_of_file);
    for(int index = 0; index < MEMORY_POWER; index++) {
        getline(fptr, that_which_is_at_play_for_the_self_in_Reality[index]);
    }

    string lost_object;
    cout << "enter the object you want me to find : ";
    cin >> lost_object;

    cout << find_my_object(lost_object) << endl;

    return 0;
}
