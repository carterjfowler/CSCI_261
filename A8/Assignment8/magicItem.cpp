#include "magicItem.h"

const string magicItem::ANSWERS[2] = {"42", "What is 6*7?"};
const string magicItem::QUESTIONS[2] = {"What is the meaning of life?", "More importantly, what is the question?"};

magicItem::magicItem(){ this->attempts = 5; this->question = 0;}

void magicItem::introduction(){
    cout << "\n\nThis is the magic towel! It can perform any function that one would need a towel for.\n"
         << "\tHowever, to be able to use the towel, you must answer 2 questions.\n"
         << "\tYou get 5 guesses, answer the towel's questions and you can use it.\n"
         << "\tGet the answers wrong, however, and the towel will burst into flames.\n" << endl;
}

int magicItem::attemptsLeft(){ return this->attempts; }

int magicItem::guess(){
    string answer;
    while(this->attempts >= 1 && this->question <= 1){
        cout << magicItem::QUESTIONS[this->question] << endl;
        getline(cin, answer);
        if(answer == magicItem::ANSWERS[this->question]){
            this->correct();
        }else this->incorrect();
    }
    if(this->question >= 2){
        return this->prize();
    }else return this->combust();
}

void magicItem::correct(){
    cout << "That is indeed the correct answer! Congratulations!\n" << endl;
    this->question++;
}

void magicItem::incorrect(){
    this->attempts--;
    cout << "Not even close, you now have " << this->attempts << " guesses before the towel bursts into flames.\n" << endl;
}

int magicItem::prize(){
    cout << "Congratulations, you guessed right and may now use the magic towel for all your hitch-hiking needs." << endl;
    return 0;
}

int magicItem::combust(){
    cout << "Oh dear, the severe wrongness of your answers has led to the towel bursting into flames, better luck next time." << endl;
    return 1;
}
