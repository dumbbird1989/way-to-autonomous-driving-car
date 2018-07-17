#include <Eigen/Dense>
#include <iostream>

MatrixXf x(1,2);
MatrixXf P(2,2);

void initial_parameter(void)
{
	P <<  1000.0, 0,
          0		, 1000.0;
    x << 0, 0;

    std::cout<< "initial state: position and velocity "<<P<<std::endl;

    std::cout<< "initial covariancematrix: "<< P << std::endl << std::endl;

}

void kalman_filter(double x_initial, )