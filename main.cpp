using namespace std;

#include <iostream>

class myClass
{
public:
    int x;
    int y;
    int sum;
    int multiply;
    void show()
    {
        cout << endl << "Multiplying these two numbers gets you: " << multiply << endl;

        cout << "The sum of these two numbers is is: " << sum << endl << endl;
    }
};

int main()
{
    myClass object;
    cout << "Type a number: ";
    cin >> object.x;
    cout << "Type another number: ";
    cin >> object.y;
    object.sum = object.x + object.y;
    object.multiply = object.x * object.y;
    object.show();
}