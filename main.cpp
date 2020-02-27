#include "StackArray.h"
#include "StackList.h"

#include <iostream>
#include <stack>
#include <string>
#include <vector>

class NoDefault {
    NoDefault(int i) {
        std::cout << "Constructing with value: " << i << std::endl;
    }
};

class Foo {
public:
    Foo(int i): i_(i) {
        std::cout << "Constructing with value: " << i_ << std::endl;
    }
    Foo(const Foo &other): i_(other.i_) {
        std::cout << "Copy consructor with value: " << other.i_ << std::endl;
    }

    ~Foo() {
        std::cout << "Deconstructing with value: " << i_<< std::endl;
    }

private:
    int i_;
};

int main() {
    std::stack<Foo> arr;

    // Passing prvalue
    arr.emplace(4);
    arr.emplace(5);
    Foo f = arr.top();
    arr.pop();

    return 0;
}