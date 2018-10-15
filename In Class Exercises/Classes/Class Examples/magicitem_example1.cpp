#include <iostream>
#include <string>


using namespace std;

class MagicStuffie {
private:
    string riddle;
    string answer;
    string prize;
    void introduction();
public:
    MagicStuffie();
    string getRiddle();
    string getPrize();
    bool checkAnswer(const string&);
};

MagicStuffie::MagicStuffie() {
    riddle = "What can travel around the world while staying in a corner?";
    answer = "stamp";
    prize = "pot of gold";
    introduction();
}

void MagicStuffie::introduction() {
    cout << "Welcome, I am a Magic Stuffie!" << endl;
    cout << "To win a prize, you must answer a riddle." << endl;
}

string MagicStuffie::getPrize() {
    return prize;
}

string MagicStuffie::getRiddle() {
    return riddle;
}

bool MagicStuffie::checkAnswer(const string &guess) {
    return guess == answer;
}

int main() {
    MagicStuffie stuffie;

    cout << "Here is your riddle: " << endl;
    cout << "-> " << stuffie.getRiddle() << " ";

    string guess;
    getline(cin, guess);

    if(stuffie.checkAnswer(guess))
        cout << "Congratulations, you have won a " << stuffie.getPrize() << "!" << endl;
    else
        cout << "Sorry, better luck next time!" << endl;

    return EXIT_SUCCESS;
}
