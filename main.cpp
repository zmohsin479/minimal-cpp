using namespace std;

#include <iostream>

class myClass
{
public:
    double tempInit;
    double tempFinal;

    double x;
    double y;

    double answer;

    double selection;
    double selectionWeather;
    double selectionMath;

    void add()
    {
        answer = x + y;
        cout << endl
             << "The sum of " << x << " and " << y << " is: " << answer << endl
             << endl;
    }

    void subtract()
    {
        answer = x - y;
        cout << endl
             << "The difference between " << x << " and " << y << " is: " << answer << endl
             << endl;
    }

    void multiply()
    {
        answer = x * y;
        cout << endl
             << "Multiplying " << x << " and " << y << " gets you: " << answer << endl
             << endl;
    }

    void divide()
    {
        answer = x / y;
        cout << endl
             << "Dividing " << x << " by " << y << " gets you: " << answer << endl
             << endl;
    }

    void celsius()
    {
        tempFinal = (tempInit * 9.0) / 5.0 + 32;
        cout << endl
             << tempInit << " degrees Celsius is " << tempFinal << " degrees Fahrenheit " << endl
             << endl;
    }

    void fahrenheit()
    {
        tempFinal = (tempInit - 32) * (5.0 / 9.0);
        cout << endl
             << tempInit << " degrees Fahrenheit is " << tempFinal << " degrees Celsius " << endl
             << endl;
    }
};

int main()
{
    myClass object;

    cout
        << "Do you want to convert the weather (1) or do math (2): ";
    cin >> object.selection;

    if (object.selection == 1)
    {
        cout << endl
             << "Do you want to convert from C to F (1) or from F to C (2): ";
        cin >> object.selectionWeather;
        if (object.selectionWeather == 1)
        {
            cout << endl
                 << "Enter the weather in Celsius: ";
            cin >> object.tempInit;
            object.celsius();
        }
        else
        {
            cout << endl
                 << "Enter the weather in Fahrenheit: ";
            cin >> object.tempInit;
            object.fahrenheit();
        }
    }
    else
    {
        cout << endl
             << "Type your first number: ";
        cin >> object.x;
        cout << "Type your second number: ";
        cin >> object.y;

        cout << endl
             << "Do you want to add these numbers (1), subtract these numbers (2), multiply these numbers (3) or divide these numbers (4): ";
        cin >> object.selectionMath;
        if (object.selectionMath == 1)
        {
            object.add();
        }
        else if (object.selectionMath == 2)
        {
            object.subtract();
        }
        else if (object.selectionMath == 3)
        {
            object.multiply();
        }
        else
        {
            object.divide();
        }
    }
}