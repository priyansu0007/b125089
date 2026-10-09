#include <iostream>
using namespace std;

class Fraction{
private:
    int num,den;

    int gcd(int a,int b) {
        if(a<0) a=-a;
        if(b<0)b=-b;
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }

    void simplify(){
        if (den<0){
            num=-num;
            den=-den;
        }
        int common=gcd(num, den);
        if (common!=0) {
            num/=common;
            den/=common;
        }
    }

public:
    Fraction(int n=0, int d=1){
        num=n;
        den=d;
        if (den==0) {
            cout << "Denominator can't be zero, converting to 1.\n";
            den=1;
        }
        simplify();
    }

    Fraction operator+(Fraction& other){
        int resNum = (num*other.den) + (other.num*den);
        int resDen = den*other.den;
        return Fraction(resNum,resDen);
    }

    Fraction operator-(Fraction& other){
        int resNum = (num * other.den) - (other.num * den);
        int resDen = den * other.den;
        return Fraction(resNum, resDen);
    }

    void display(){
        cout<<num<<"/"<<den;
    }
};

int main() {
    Fraction f1(1,4);
    Fraction f2(3,8);

    Fraction sum =f1+f2;
    Fraction diff =f1-f2;

    cout<<"Fraction 1: ";f1.display();cout<<"\n";
    cout<<"Fraction 2: ";f2.display();cout<<"\n";
    cout<<"Sum: ";sum.display();cout<<"\n";
    cout<<"Difference: ";diff.display();cout<<"\n";

    return 0;
}
