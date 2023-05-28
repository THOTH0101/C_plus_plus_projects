/*
 * Rewrite Listing 5.1 RepeatSubtractionQuiz.cpp to alert the user if a same answer is entered again.
 * Hint: use a vector to store answers.
 * */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

bool checkAnswer(const vector<int>& a, int answer);

int main()
{
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;
    vector<int> answers;

    if(number1 < number2)
    {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    //prompt student to answer "What is number1 - number2"
    cout << "What is " << number1 << " - " << number2 << "? ";
    int answer;
    cin >> answer;

    //repeatedly ask the user the question until it is correct
    while(number1 - number2 != answer)
    {
        answers.push_back(answer);
        cout << "Wrong answer. Try again. What is " << number1 << " - " << number2 << "? ";
        cin >> answer;

        if(checkAnswer(answers, answer))
            cout << "You already entered " << answer << endl;
    }

    cout << "You got it!" << endl;

    return 0;
}

//function implementation
bool checkAnswer(const vector<int>& a, int answer)
{
    //check if answer has been already entered
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == answer)
            return true;
    }
    return false;
}