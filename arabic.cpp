#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX_INPUT = 3999, MIN_INPUT = 0, // These constants hold high and low integer numbers,
              ARRAY_SIZE = 4;                  // and the array size declarator.
    string answers[ARRAY_SIZE] = { "", "", "", "" }; //An  array of string to hold the output from the convert function.
    int accumulator = 0; // Variable to hold number of arabic numbers converted.
    int userNum = 0;

    do {
        cout << "Enter a negative number to end the program.\n";
        cout << "Enter an arabic number between 1 and 3999: ";
        //cin >> userNum;;
        while(!(cin >> userNum) || (userNum < 1 || userNum > 3999)){
            if (userNum < 0)
            {
                cout << "Exiting program:";
                return 0;
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid Value. Number must be between 1 and 3999. Try again ";
            }
        }

        int thous = userNum / 1000;
        cout << thous;

        int hund = userNum % 1000 / 100;
        cout << "hundreds:" << hund;

        int tens = userNum % 100 / 10;
        cout << "tens:" << tens;

        int ones = userNum % 10 / 1;
        cout << "Ones: " << ones << endl;


        answers[0] = convert(thous, "M", "M", "M");
        answers[1] = convert(hund, "C", "D", "M");

        answers[2] = convert(tens, "X", "L", "C");
        answers[3] = convert(ones, "I", "V", "X");

        cout << answers[0] << endl << answers[1] << endl << answers[2];
        cout << endl << answers[3] << endl;
    } while (userNum > 0);

    system("PAUSE");
    return 0;
}
