#include <iostream>
#include <math.h>
using namespace std;

double computeExpression(double b, double c, double a, int m) {
    
    double A, B;

    double D ;
    
    double lambda1; 
    
    double lambda2; 
    
    D = b*b - 4*a*c;
    
    
    try{
    lambda1 = (b + sqrt(D))/2;
    lambda2 = (b - sqrt(D))/2;
    
     A =  (b * b - a * c -  b * lambda2  ) / (lambda1 * (lambda1 - lambda2));
    B = ( a * c  + b * lambda1 - b * b  ) / (lambda2 * (lambda1 - lambda1));
    }
    catch(...)
    {
        std::cout<<"Not able to parse"<<std::endl;
    }
    
    
   
    
    std::cout<<"lambda1:"<<lambda1<<endl<<"lambda2"<<lambda2;

    return A * pow(lambda1, m) + B * pow(lambda2, m);
}

int main(int argc, char* argv[]) {
    double a, b, c, lambda1, lambda2;
    int m;

   

    std::cout<<computeExpression(std::stod(argv[1]), std::stod(argv[2]), std::stod(argv[3]), m);

    return 0;
}
