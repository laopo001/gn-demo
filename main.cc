// #define SION_DISABLE_SSL

#include <iostream>
#include <vector>
#include <string>
#include "hello/lib.h"
#include "sion/sion.h"
using namespace std;

class Foo
{
public:
    std::string member;

    // Copy member.
    Foo(const std::string &m) : member(m) {}

    // Move member.
    Foo(std::string &&m) : member(std::move(m)) {}
};

class Complex
{
public:
    Complex(double r = 0, double i = 0)
    {
        re = r;
        im = i;
    }
    Complex &operator+=(const Complex &c)
    {
        re += c.re;
        im += c.im;
        return *this;
    }

    double real() const { return re; }
    double imag() const { return im; }

private:
    double re;
    double im;
};

// Complex& Complex::operator+=(const Complex &c)
// {
//     re += c.re;
//     im += c.im;
//     return *this;
// }

class Parent
{
public:
    void name()
    {
        std::cout << createName() << std::endl;
    }
    virtual string createName()
    {
        return "Parent";
    }
};

class Child : public Parent
{
public:
    virtual string createName()
    {
        return "Child";
    }
};

int main()
{

    // Foo f = Foo("hello");
    // string q = "123";
    // Foo f2 = Foo(q);

    // Complex c = Complex(1, 1);
    // Complex d = Complex(2, 2);
    // c += d;
    // cout << c.real() << endl;

    Child c = Child();
    c.name();

    // vector<string> arr = hello::split("hllo", "ll");
    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // auto s = hello::join(arr, ",");
    // cout << s << endl;

    // auto resp = sion::Fetch("https://www.baidu.com/");
    // cout << resp.Body() << endl;
    // cout << resp.HeaderValue("content-type") << endl;
    // cout << ("GetStaticText()xxx") << endl;

    return 0;
}