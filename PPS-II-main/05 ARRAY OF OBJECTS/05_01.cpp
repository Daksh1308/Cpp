/* Create a class player with following data members Player, name,
Team name, Batting average, Read data for 10 payers, Use
constructors and destructors properly and write member function
for each of the following
a. To get the data
b. To display the data
c. Sort it according to the batting average
d. Print a team wise sorted list of player’s name with their batting
average */


#include <iostream>
#include <string>
#include <algorithm> // For std::sort
using namespace std;

class Player {
public:
    string pname;
    string tname;
    int avg;

    void get_data();
    static bool sortByAvg(const Player& a, const Player& b);
    void display() const;
};

void Player::get_data() {
    cout << "Team Name: ";
    cin >> tname;
    cout << "Player Name: ";
    cin >> pname;
    cout << "Average: ";
    cin >> avg;
    cout << endl;
}

bool Player::sortByAvg(const Player& a, const Player& b) {
    return a.avg < b.avg; // Sort in ascending order of average
}

void Player::display() const {
    cout << "Team Name: " << tname << endl;
    cout << "Player Name: " << pname << endl;
    cout << "Average: " << avg << endl;
}

int main() {
    Player p[10];

    // Get player data
    for (int i = 0; i < 10; ++i) {
        p[i].get_data();
    }

    // Sort players by average score
    std::sort(p, p + 10, Player::sortByAvg);

    // Display sorted players
    for (int i = 0; i < 10; ++i) {
        p[i].display();
    }

    return 0;
}
