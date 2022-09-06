// Fransiskus Agapa

#ifndef COPYCONSTRUCTOR1_COPCON_H
#define COPYCONSTRUCTOR1_COPCON_H


class CopCon
{
private:
    int* _data;                             // int pointer
public:
    CopCon();                               // default constructor
    CopCon(const CopCon& theData);          // Copy constructor
    void SetData(const int& theData);       // setter value
    int GetData() const;                    // getter value
    ~CopCon();                              // destructor
};


#endif //COPYCONSTRUCTOR1_COPCON_H
