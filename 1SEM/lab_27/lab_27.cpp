#include <iostream>
using namespace std;

class Animal {
public:
    Animal(const string& name) : Name(name) {}
    const string Name;
};

class Dog : public Animal {
public:
    Dog() : Animal("Dog") {}

    Dog(const string& name) : Animal(name) {}

    void Bark() {
        cout << Name << " barks: woof!" << endl;
    }
};

int main() {
    Dog d;    
    d.Bark();
    Dog rex("Rex");     
    rex.Bark();

    return 0;
}
