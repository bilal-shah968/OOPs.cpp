#include <iostream>
using namespace std;

class car {
    public:
        string brand;
        string model;
        string year;
};

int main() {
    car honda_city; 
    honda_city.brand = "Honda City";
    honda_city.model = "2024";
    honda_city.year = "2025";

    cout << honda_city.brand << " " << honda_city.model << " " << honda_city.year << endl;

    return 0;
}
