#include <iostream>
#include<cmath>
using namespace std;

int main(){   
    int binArray[30]={0};
    int decimal = 0;
    int n = 0;  
    int i = 0;
    
    std::cin >> decimal;
    std::cin.ignore();

    while (decimal != 0)
    {
        binArray[i]=decimal%2;
        decimal /= 2; 
        i++;
    }

    while (i != 0)
    {
        i--;
        if(binArray[n] != 0)
            decimal += pow(2,i);
        n++;
    }std::cout << decimal;
}
