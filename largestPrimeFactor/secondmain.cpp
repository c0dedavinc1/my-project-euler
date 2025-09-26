#include <iostream>
#include <cmath>
#include <fstream>
#include <list>

using namespace std;

// Need to look for divisors until I get sqrt(number)

bool isPrime(long number){

    long sqrtNumber = sqrt(number);

    for(int i= 2; i<sqrtNumber; i++){
        if(number % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    list<int> factors; 
    ofstream f;

    f.open("divisorsOfTheNumber.txt");

    long number = 600851475143;
    int sqrtNumber = sqrt(number);

    for(int i = 1; i<sqrtNumber; i++){
        if(number % i == 0 && isPrime(i)){
            factors.push_front(i);
            f << i << endl;
        }
    }

    f.close();
}



