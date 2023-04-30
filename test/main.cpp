#include <iostream>
#include <iomanip>

#include <cmath>
#include "orangeMath.h"

#define ACCURACY 0.000001

void checkFloat(float mine,float cmath)
{
    float error = (mine-cmath)/cmath;
    if (error<0)error=-error;
    
    if (error>ACCURACY)std::cout<<"\033[0;31m";
    else std::cout<<"\033[0;32m";
    
    std::cout<<std::setprecision(12)<<std::showpos
             <<"OMath:"<<mine//<<std::endl
             <<"\tCMath:"<<cmath//<<std::endl
             <<"\tError:"<<error<<"\033[0m"<<std::endl;
}


void checkAsin(float x)
{
    std::cout<<"asin("<<x<<"): ";//<<std::endl;
    checkFloat(_asin(x),asin(x));
}

void checkExp(float x)
{
    std::cout<<"exp("<<x<<"): ";//<<std::endl;
    checkFloat(_exp(x),exp(x));
}

void checkLog(float x)
{
    std::cout<<"log("<<x<<"): ";//<<std::endl;
    checkFloat(_log(x),log(x));
}

int main(int argc,char* argv[])
{
    std::cout<<"\033[0;32m--- Hello orangeMath ---\033[0m"<<std::endl;
    checkExp(20.0);
    checkExp(1.0);
    checkExp(-1.0);
    // checkLog(2.0);
    // checkLog(10000000000);
    // checkLog(0.873);
    // checkAsin(1);
    return 0;
}
