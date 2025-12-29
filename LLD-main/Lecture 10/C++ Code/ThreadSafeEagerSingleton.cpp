#include<iostream>
#include <mutex>

using namespace std;

class Singleton {
private:
    static Singleton* instance;

    Singleton() { 
        cout << "Singleton Constructor Called!" << endl; 
    }
 
public:
    static Singleton* getInstance() {
        return instance;
    }
};
 
// Initialize static members
Singleton* Singleton::instance = new Singleton(); //obect creation is expensive task , this implementation method can waste memory if the method is not called not even once

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    cout << (s1 == s2) << endl;
}
