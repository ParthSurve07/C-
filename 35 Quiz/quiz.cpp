#include <iostream>
using namespace std;

int main () {

    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. What is the predecessor of C++?: ",
                          "4. Is the Earth flat?: "};

    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                           {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zukerberg"},
                           {"A. C", "B. C+", "C. C--", "D. D++"},
                           {"A. Yes", "B. No", "C. Sometimes", "D. Whats Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Answer: ";
        char answer;
        cin >> answer;
        answer = toupper(answer);
        if (answer == answerKey[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect!" << endl;
            cout << "Correct answer is: " << answerKey[i] << endl;
        }
    }

    cout << "Your score is: " << score << "/" << size << endl;

    return 0;
}