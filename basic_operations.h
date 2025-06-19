#include "capabilities_of_the_self.h"

void wake_the_data_up(string data[], string data_name) {
    data[0] = data_name;
}

void show_the_data(string data[]) {
    cout << "here is the data : " << data[0] << endl;
    for(int i = 1; i <= MEMORY_POWER && data[i] != ""; i++) {
        cout << data[i] << endl;
    }
}

void collect_the_data(string data[], string filename) {
    ifstream fptr(filename);
    for(int index = 1; index <= MEMORY_POWER; index++) {
        getline(fptr, data[index]);
    }
}

string find_my_datapoint(string datapoint, string data[]) {

    cout << "searching for " << datapoint << " in : " << data[0] << endl;

    string perception_of_the_datapoint = "FAILED to find the datapoint.";
    
    for (int i = 1; i <= MEMORY_POWER; i++) {
        if(data[i] == datapoint) {
            perception_of_the_datapoint = "SUCCESS, datapoint encountered!!";
            break;
        }
    }
    return perception_of_the_datapoint;
}