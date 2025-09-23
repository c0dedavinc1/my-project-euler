#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    // to get the loop stop
    int i = 0;

    ofstream f;
    f.open("fermatFactorization.txt");

    long number = 600851475143;
    long long square = floor(sqrt(number));
    double res = 0;
    do{ 
        square++;
        res = pow(square, 2) - number; 
        f << square << ", " << res << ", " << sqrt(res) << ", " << sqrt(res) - int(sqrt(res)) << endl; 

        
        if(i>1000000) break;
        i++;
    }while((sqrt(res) - int(sqrt(res))) != 0);  

    f.close();
}
