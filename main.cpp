
// Machine_LearningCpp.cpp : Neural Network.
//

#include <numeric>
#include <iostream>
#include <vector>
#include <functional>
#include <math.h>
double sigmoid(double x);
double activate(std::vector<double> inputs, std::vector<double> weights);

int main()
{
    std::vector<double> inputs{ .5, .3, .2 };
    std::vector<double> weights{ .4, .7, .2 };
    std::cout << activate(inputs, weights);
}

double sigmoid(double x) {
    return 1.0 / (1 + exp(-x));
}

double activate(std::vector<double> inputs, 
    std::vector<double> weights) {
    return sigmoid(std::inner_product(inputs.begin(), inputs.end(), weights.begin(), 0.0));
}

