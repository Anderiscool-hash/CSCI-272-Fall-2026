#include <iostream>
#include <vector>
using namespace std;

// Function to calculate average student ID
double getAverage(const vector<int>& ids) {
    double sum = 0;

    for (int id : ids) {
        sum += id;
    }

    return sum / ids.size();
}

// Function to find highest student ID
int getHighest(const vector<int>& ids) {
    int highest = ids[0];

    for (int id : ids) {
        if (id > highest) {
            highest = id;
        }
    }

    return highest;
}

int main() {
    vector<int> ids = {101, 102, 103, 104, 105,
                       106, 107, 108, 109, 110};

    cout << "Average Student ID: " << getAverage(ids) << endl;
    cout << "Highest Student ID: " << getHighest(ids) << endl;

    return 0;
}
