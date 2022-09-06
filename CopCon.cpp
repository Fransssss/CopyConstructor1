// Fransiskus Agapa

#include "CopCon.h"
#include <iostream>

using std::cout;
using std::endl;

// default constructor
CopCon::CopCon()
{
    cout << "= Default Constructor Called =" << endl;
    _data = new int;              // allocate new memory
    *_data = -1;                  // default value
}

// copy constructor
CopCon::CopCon(const CopCon &theData)
{
    cout << "= Copy Constructor Called =" << endl;
    _data = new int;
    *_data = *(theData._data);
}

// setter
void CopCon::SetData(const int &theData)
{
    cout << "= Setter Called =" << endl;
    *_data = theData;
}

// getter
int CopCon::GetData() const
{
    cout << endl << "= Getter Called =" << endl;
    return *(_data);
}

// destructor
CopCon::~CopCon()
{
    cout << "= Destructor Called =" << endl;
    delete _data;                // free allocated memory
}