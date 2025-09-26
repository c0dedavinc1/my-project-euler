#include <iostream>
#include <list>
#include <cmath>

using namespace std;

// Greater common multiple

class Factor{
    public:
        int number;
        int pow;
};

Factor factor;

int findIndexByNumero(const std::vector<Factor>& factors, int x) {
    for (size_t i = 0; i < factors.size(); i++) {
        if (factors[i].number == x) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}

std::vector<Factor> factorsOf(int number){
    std::vector<Factor> factorsOf; 
    int pow;
    int squaredJumber = sqrt(number);
    for(int i=2; i<squaredJumber; i++){
        if(number % i == 0){
            int pow = floor(number / i);
            factor.number = i;
            factor.pow = pow;
            factorOf.push_front(factor);
        }
    }
    return factorsOf;
}

bool isPrime(long number){
    long sqrtNumber = sqrt(number);
    for(int i= 2; i<sqrtNumber; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

// Implementing a strange algorithm (The greatest common multiple)
int main(){
    int limit = 20:
    std::vector<Factor> greatestFactorVector;
    std::vector<Factor> factors;
    // Insert value
    for(int i=2; i<=limit; i++){
        factor.number = i;
        factor.pow = 0;
        greatestFactorVector.push_front(factor);
    }
    // Extracting the factors
    for(int i=2; i<=limit; i++){
        factors = factorOf(i);
        for(int i=0; i<factors,size(); i++){
            
        }
    }

}


