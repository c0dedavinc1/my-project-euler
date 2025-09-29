
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// Using wolframAlpha: The sum of square 1/6 n (1+n)(1+2n)
// The sum of integer (n)(n+1)/2

int main(){
    int n = 100;
    float oneSixth = 0.166;
    long squareSum = 0.166 * n * (1+n) * (1+ 2 * n);
    long integerSum = pow(( n * (n+1) )/ 2, 2);

    ofstream f;
    f.open("sumSquareDifference.txt");

    f << oneSixth << endl;
    f << squareSum << endl;
    f << integerSum << endl;

    f << integerSum - squareSum;

    f.close();
    
}

