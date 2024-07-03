/* Create a class player with the following data membersname,
age, runs, hi, lo, tsts, avg
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the average of the player */


#include <iostream>
#include <string>
#include <iomanip>

class Player {
public:
    std::string name;
    int age;
    int runs;
    int tests;
    int highestRuns;
    int lowestRuns;
    float average;

    void getData();
    void display() const;
    void calculateAverage();
};

void Player::getData() {
    std::cout << "Enter Name: ";
    std::getline(std::cin, name); // Using getline to allow spaces in names
    std::cout << "Enter Age: ";
    std::cin >> age;
    std::cout << "Enter the Number of Tests Played: ";
    std::cin >> tests;
    std::cout << "Enter the Highest Runs: ";
    std::cin >> highestRuns;
    std::cout << "Enter the Lowest Runs: ";
    std::cin >> lowestRuns;
    std::cout << "Enter Total Runs: ";
    std::cin >> runs;
}

void Player::display() const {
    std::cout << "Name of The Player: " << name << std::endl;
    std::cout << "Age of The Player: " << age << std::endl;
    std::cout << "Tests Played by the Player: " << tests << std::endl;
    std::cout << "The Highest Runs of Player: " << highestRuns << std::endl;
    std::cout << "The Lowest Runs of Player: " << lowestRuns << std::endl;
    std::cout << "Runs Made by the Player: " << runs << std::endl;
    std::cout << "Average Runs Made by the Player: " << std::fixed << std::setprecision(2) << average << std::endl;
}

void Player::calculateAverage() {
    if (tests > 0) {
        average = static_cast<float>(runs) / tests; // Ensure floating-point division
    } else {
        average = 0.0; // Handle division by zero
    }
}

int main() {
    Player p1;
    p1.getData();
    p1.calculateAverage();
    p1.display();
    return 0;
}
