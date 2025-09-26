#include <iostream>
#include <list>

using namespace std;

// Greater common multiple

class Factor{
    public:
        int number;
        int pow;
};

int findIndexByNumero(const std::vector<Factor>& factors, int x) {
    for (size_t i = 0; i < factors.size(); i++) {
        if (factors[i].number == x) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}


int main(){
    std::vector<Factor> factorVector;
    
}


