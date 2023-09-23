//-----------------------OOP PRACTICAL A-01(F21111046)---------------------------

//. Implement a class Complex which represents the Complex Number data type. Implement the 
//following
//1. Constructor (including a default constructor which creates the complex number 0+0i).
//2. Overload operator+ to add two complex numbers.
//3. Overload operator* to multiply two complex numbers.
//4. Overload operators << and >> to print and read Complex Numbers.

#include<iostream>
using namespace std;

int r1,i1,r2,i2;

class complex
{
    public:
    int real;
    int imag;

    complex(int add_real=0,int add_imag=0)
    {
        real=add_real;
        imag=add_imag;
    }

    complex Addition(complex c1, complex c2)
    {
        complex anum;
        anum.real=c1.real+c2.real;
        anum.imag=c1.imag+c2.imag;
        return anum;
    }

    complex Multiplication(complex c1,complex c2)
    {
        complex bnum;
        bnum.real=c1.real*c2.real-c1.imag*c2.imag;
        bnum.imag=c1.real*c2.imag+c1.imag*c2.real;
        return bnum;
    }
};

int main()
{
    cout<<"Enter the real part of 1st number:"<<endl;
    cin>>r1;
    cout<<"Enter the imaginary part of 1st number:"<<endl;
    cin>>i1;
    cout<<"Enter the real part of 2nd number:"<<endl;
    cin>>r2;
    cout<<"Enter the imaginary part of 2nd number:"<<endl;
    cin>>i2;
    complex c1(r1,i1);
    complex c2(r2,i2);

    cout<<"1st Complex number : "<<c1.real<<" + i "<<c1.imag<<endl;      
    cout<<"2nd Complex number : "<<c2.real<<" + i "<<c2.imag<<endl;

    complex c3;
    c3=c3.Addition(c1,c2);
    cout<<"Addition of 1st and 2nd  complex number  :"<<c3.real<<" +i "<<c3.imag<<endl;

    complex c4;
    c4=c4.Multiplication(c1,c2);
    cout<<" Multiplication of 1st and 2nd complex number :"<<c4.real<<" +i "<<c4.imag<<endl;
     
    return 0;
}