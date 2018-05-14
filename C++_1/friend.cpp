/*************************************************************************
	> File Name: friend.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月25日 星期五 16时43分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Complex
{
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0,double i = 0):real(r),imag(i){};
        void print();
        friend Complex operator +(Complex a,Complex b);
        friend Complex operator -(Complex a,Complex b);
        
};
int main()
{
    Complex a(1.1,2.2);
    Complex b(0.1,1.4);
    Complex total;
    total = a + b;
    total.print();
    total = a - b;
    total.print();
    return 0;


}
Complex operator+(Complex a,Complex b)
{
    Complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;
    return temp;
}
Complex operator-(Complex a,Complex b)
{
    Complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;
    return temp;
}
void Complex::print()
{
    cout<<real;
    if(imag > 0)
        cout<<"+";
    if(imag != 0)
        cout<<imag<<"i"<<endl;
}

