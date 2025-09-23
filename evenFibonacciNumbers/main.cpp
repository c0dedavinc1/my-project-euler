#include <stdio.h>
#include <fstream>

using namespace std;

int main(){
    int fibonacciNumbers[3] = {1, 2, 3};
    int sum = 2;
    ofstream f;
    ofstream g;
    f.open("fibonaccinumbers.txt");
    g.open("allthefibonaccinumbers,txt");
    while(fibonacciNumbers[2] < 4000000){
        sum = fibonacciNumbers[2] % 2 == 0 ? sum + fibonacciNumbers[2]: sum;
        if(fibonacciNumbers[2] % 2 == 0) f << fibonacciNumbers[2] << "\n";
        g << fibonacciNumbers[2] << "\n";
        fibonacciNumbers[0] = fibonacciNumbers[1];
        fibonacciNumbers[1] = fibonacciNumbers[2];
        fibonacciNumbers[2] = fibonacciNumbers[0] + fibonacciNumbers[1];
    }
    f << "The sum is: " << sum;
    f.close();
    g.close();
}
