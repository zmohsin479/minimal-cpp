using namespace std;

#include <iostream>

class myClass
{
public:
    double x;
    double y;
    double sum;
    double multiply;
    double divide;
    double difference;
    void show()
    {
        cout << endl
             << "The sum of " << x << " and " << y << " is: " << sum << endl;

        cout << "The difference between " << x << " and " << y << " is: " << difference << endl;

        cout << endl
             << "Multiplying " << x << " and " << y << " gets you: " << multiply << endl;

        cout << "Dividing " << x << " by " << y << " gets you: " << divide << endl
             << endl;
    }
};

int main()
{
    myClass object;
    cout << "Type your first number: ";
    cin >> object.x;
    cout << "Type your second number: ";
    cin >> object.y;
    object.sum = object.x + object.y;
    object.multiply = object.x * object.y;
    object.divide = object.x / object.y;
    object.difference = object.x - object.y;
    object.show();
}