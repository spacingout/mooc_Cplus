#include<string>
using namespace std;
#ifndef PERSON_H
#define PERSON_H
class Person

{
public:
    Person(string name="Jim");
    virtual ~Person ();
    void play();
protected:
    string m_strName;
};
#endif // PERSON_H
