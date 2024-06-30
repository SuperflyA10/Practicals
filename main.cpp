// Aluwani Nesengani
// Student NO: 220162015
// CSC1A Practical 2

#include <iostream>

using namespace std;

int main()
{
    string temp;
    int option;

    // User intput interface for the options.
    cout << "Enter 1 for option 1 or 2 for option 2:" << endl;
    cin >> option;

    switch (option)
    {
    case 1: // Option 1
        // User intput interface for the scores
        int score;
        cout << "Enter accuracy score of a machine learning model: " << endl;
        cin >> score;

        // If statements checking which interval the accuracy score is found and, output the corresponding text.
        if ((score > 0) & (score < 50))
            cout << "Low accuracy! Consider retraining model. " << endl;
        else if ((score >= 50) & (score < 70))
            cout << "Moderate accuracy! Room for improvement. " << endl;
        else if ((score >= 70) & (score < 90))
            cout << "Good accuracy! Your model is performing well. " << endl;
        else if ((score >= 90) & (score <= 100))
            cout << "Excellent accuracy! Well done. " << endl;
        else
            cout << "Invalid accuracy score!! " << endl;
        break;

    case 2:
        // User intput interface for the Number of VPL exrcises completed.
        int numOfVpl;
        cout << "Enter the number of VPL exercises completed: " << endl;
        cin >> numOfVpl;

        // check if the user entered a valid number of VPL exercises.
        if (cin.fail() || numOfVpl < 0)
            // Invalid number of VPL exercises or input.
            cout << "Invalid number of VPL exercises!" << endl;
        else
        {
            // valid user input or number of VPL exercises, conditional operator checks for the number of VPL exercises completed
            temp = (numOfVpl < 5) ? "The more VPL exercises you successfully complete, the higher your chances of obtaining a perfect final mark." : "Keep it up.";
            cout << temp << endl;
        }
        break;

    default:
        // invalid selection of options
        cout << "User entered invalid option!!" << endl;
        break;
    }
}