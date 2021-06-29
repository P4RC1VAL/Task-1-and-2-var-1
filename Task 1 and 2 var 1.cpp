#include <iostream>
using namespace std;
void InitilMas(int *imas, int size, int val) // Initialize function
{
    for (int i = 0; i < size; i++) {
        imas[i] = val;
        cout << imas[i] << endl;
    }
}
void TestMas(int imas, int size) { // Testing function
    if (size > 999) {
        cout << "Test ended with error, your 'typesize' is bigger than massive size" << endl;;
        exit(1);
    }
    else
    {
        cout << "Testing was sucsessful, no errors found " << endl;

    }
}
int main()
{
	int imas[1000];
    int size;
    int val;
    cout << "Insert your typesize = "; // user type in console size what he want
    cin >> size;
    TestMas(*imas, size);         // call a test function
    cout << "Type your val = "; // initialize massive for user value
    cin >> val;
    InitilMas(imas, size, val); // call a init function
    return 0;
}
