#include <iostream>
using namespace std;

// Function to get the person's age
int getPersonAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

// Function to check voting eligibility
void checkVotingEligibility(int age) {
    const int votingAge = 18;
    if (age >= votingAge) {
        cout << "You are eligible to vote.";
    } else {
        cout << "You are allowed to vote after " << (votingAge - age) << " years.";
    }
}

int main() {
    int age = getPersonAge();
    checkVotingEligibility(age);
    return 0;
}
