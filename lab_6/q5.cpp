#include <iostream>
using namespace std;

class Score {
private:
    int score;

public:
    Score(int s=0){score=s;}

    // Prefix increment: ++obj
    Score& operator++() {
        ++score;
        return *this;
    }

    // Postfix increment: obj++
    Score operator++(int) {
        Score temp= *this;
        score++;
        return temp;
    }

    void display(){
        cout<<score;
    }
};

int main() {
    Score s1(10);
    cout<<"Initial s1: "; 
    s1.display(); 
    cout<<"\n";

    Score r1=++s1;
    cout<<"\nAfter r1 = ++s1:\n";
    cout<<"r1 (result): "; 
    r1.display(); 
    cout<<"\n";
    cout<<"s1 (current): "; 
    s1.display(); 
    cout<<"\n";
    
    Score s2(10);
    cout<<"\nInitial s2: "; 
    s2.display(); 
    cout<<"\n";

    Score r2=s2++;
    cout<<"After r2 = s2++:\n";
    cout<<"r2 (result): "; 
    r2.display();
    cout<<"\n";
    cout<<"s2 (current): "; 
    s2.display(); 
    cout<<"\n";

    return 0;
}