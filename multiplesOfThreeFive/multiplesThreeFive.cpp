#include <iostream>
#include <fstream>
#include <list>

using namespace std;

bool multipleOfThree(int n) {
    return n % 3 == 0;
}

bool multiplesOfFive(int n) {
    return n % 5 == 0;
}

int main(){
    ofstream MyFile("multiplesOfThreeFive.txt");

    list<int> multiples;

    int sum = 0;

    int maxLimit = 1000;

    for(int i=1; i<maxLimit; i++) {
        if(multipleOfThree(i) || multiplesOfFive(i)) {
            multiples.push_front(i);
            sum += i;
            MyFile << i << "\n";
        }
    }

    MyFile << "Sum: " << sum << "\n";

    MyFile.close();

    return 0;
}
