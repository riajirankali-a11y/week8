
#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() = 0;

    virtual ~Account() {}
};

class Savings : public Account {
public:
    void calculateInterest() override {
        cout << "Savings Account Interest: 5%" << endl;
    }
};

class Current : public Account {
public:
    void calculateInterest() override {
        cout << "Current Account Interest: 2%" << endl;
    }
};

int main() {
    Savings s;
    Current c;

    Account* accounts[2];

    accounts[0] = &s;
    accounts[1] = &c;

    for (int i = 0; i < 2; i++) {
        accounts[i]->calculateInterest();
    }

    return 0;
}
