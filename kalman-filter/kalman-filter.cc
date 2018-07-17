/*
For kalman filter parameters:
x[n] is the state parameters, in prediction update, we predict x with the "real" state at time t-1 which is x(t-1)
and in measurement update. we calculate "real"  state at time x which is x(t)

z[n] is the state measurement value, some values may not be measured such as velocity, so some states is zero


*/

#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;

MatrixXf x(2,1); // initial state(location and velocity)
MatrixXf P(2,2); // initial uncertainty
MatrixXf u(2,1); // external motion (control)
MatrixXf F(2,2); // next state function
MatrixXf H(1,2); // measurement function
MatrixXf R(1,1); //measurement uncertainty
MatrixXf I = MatrixXf::Identity(2,2); //identity matrix

void initial_parameter(void)
{
	P <<  1000.0, 0,
          0		, 1000.0;
    x << 0, 0;

    u << 0,0;

    F << 1,1,0,1;

    H << 1, 0;

    R << 1;


    std::cout<< "initial state: position is "<< x(0,0) <<" velocity is "<<x(1,0)<<std::endl;

    std::cout<< "initial covariancematrix: "<< P << std::endl << std::endl;

    std::cout<< "external motion is "<<u<<std::endl;

    std::cout<< "next state function is "<<F <<std::endl<<std::endl;

    std::cout<< "measurement function is "<< H << std::endl;

    std::cout<< "measurement uncertainty is "<<R << std::endl;

}

void kalman_filter(double measurement)
{
	/*step1 measurement update*/

	Eigen::MatrixXf Z;
}

int main(void)
{
	initial_parameter();
	return 1;
}