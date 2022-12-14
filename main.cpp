// Fransiskus agapa
// 9/6/22
// Practices make improvement - Have Fun !!!
// :)

// ===================
// learn how copy constructor in a class
// ===================

#include <iostream>
#include "CopCon.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string choice;                                                // user choice
    cout << endl << "== Copy Constructor Learning ==" << endl;
    cout << "1. Learn object of a class" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {

        if(choice == "1")
        {
            cout << endl;
            int userInt;                                       // input from user
            CopCon stObj;                                      // class object
            cout <<  stObj.GetData() << endl;                  // default value
            cout << "------------------" << endl;
            cout << "Input a number: ";
            cin >> userInt;
            cout << endl;
            stObj.SetData(userInt);                           // update value
            CopCon ndObj = stObj;                             // another class object - copy constructor called
            cout << ndObj.GetData() << endl;
        }
        else
        {
            cout << endl << "[ Invalid choice ]" << endl;
        }

        cout << endl << "== Copy Constructor Learning ==" << endl;
        cout << "1. Learn object of a class" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << endl << "== Exit Program ==" << endl;
    }

    return 0;
}
