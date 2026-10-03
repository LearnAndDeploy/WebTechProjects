#include<iostream>

#include<string>

using namespace std;

/*
class Instrument
{
    public:
    virtual void type()
    {
        cout << "Instrument playing....\n";
    }
};
class Guitar: public Instrument{
    public:
    void type()
    {
        cout << "Guitar playing...\n";
    }
};
class Piano: public Instrument{
    public:
    void type()
    {
        cout << "Piano playing...\n";
    }
};
class Drum: public Instrument{
    public:
    void type()
    {
        cout << "Drum playing...\n";
    }
};

int main()
{
    Instrument* i1 = new Guitar;
    //i1->type();

    Instrument* i2 = new Piano;
    //i2->type();

    Instrument* i3 = new Drum;
    //i3->type();


    Instrument* Instruments[3] = {i1, i2, i3};
    cout << "Instruments: \n";

    for(int x = 0; x < 3; x++)
    {
        Instruments[x]->type();
    }

    for(int x = 0; x < 3; x++)
    {
        delete Instruments[x];
    }



int main()
{
    Instrument* Instruments[3];

    Instruments[0] = new Guitar;
    Instruments[1] = new Piano;
    Instruments[2] = new Drum;

    for(int x = 0; x < 3; x++)
    {
        Instruments[x]->type();
    }

    for(int x = 0; x < 3; x++)
    {
        delete Instruments[x];
    }


void display(Instrument& all)
{
    all.type();
}


int main()
{
    Guitar g;
    Piano p;
    Drum d;

    display(g);
    display(p);
    display(d);
    

    return 0;
}



class Person
{
protected:
    string Name;
    int Age;
    string Gender;
public:
    void setName(string a)
    {
        Name = a;
    }
    void setAge(int b)
    {
        Age = b;
    }
    void setGender(string c)
    {
        Gender = c;
    }
};
class Student: public Person{
    public:
    void studentName()
    {
        cout << "Enter your name:  \n";
        cin >> Name;
    }
    void studentAge()
    {
        cout << "Enter your age:  \n";
        cin >> Age;
    }
    void studentGender()
    {
        cout << "Enter your gender(Male/Female):  \n";
        cin >> Gender;
    }
    void displayAll()
    {
        cout << "Hello! " << Name << endl;
        cout << "Your are " << Age << " yrs." << endl;
        cout << "Your gender: " << Gender << endl;
    }



};

int main()
{
    Student s1;
    s1.studentName();
    s1.studentAge();
    s1.studentGender();
    s1.displayAll();

    return 0;
}

*/


class Student
{
    private:
    string type;
    public:
    Student(string a)
    {
        setType(a);
    }
    void setType(string b)
    {
        type = b;
    }
    string getType()
    {
        return type;
    }
};

class ProgrammingStudent: public Student{
    public:
    void learning()
    {
        cout << "A programming student studys all the programming languages\n and implement them to devlop to a project." << endl;
    }
};

int main()
{
    Student s1;
    s1.learning();
    cout << s1.getType();


    return 0;
}