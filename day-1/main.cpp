#include <iostream>
using namespace std;

int main()
{
    cout << "Question one: \n"
            "What is 1 + 1? \n";

    int x{ };
    cin >> x;

    int question_one_answer { 2 };
    if (x == question_one_answer) {
        cout << "Correct, the answer was 2 \n";
    } else {
        cout << "Incorrect, the correct answer was: 2 \n" << "you answered: " << x << "\n";
    }

    //cout << "You've entered: " << x << "\n";

    return 0;

}

