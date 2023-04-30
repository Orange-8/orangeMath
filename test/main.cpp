#include <iostream>
#include <iomanip>

#include <cmath>
#include "orangeMath.h"

void checkFloat(float mine,float cmath)
{
    std::cout<<std::setprecision(12)<<std::showpos
             <<"OMath:"<<mine<<std::endl
             <<"CMath:"<<cmath<<std::endl
             <<"Error:"<<mine-cmath<<' '<<(mine-cmath)/cmath*100<<'%'<<std::endl;
}


void checkAsin(float x)
{
    std::cout<<"asin("<<x<<"):"<<std::endl;
    checkFloat(_asin(x),asin(x));
}

void checkExp(float x)
{
    std::cout<<"exp("<<x<<"):"<<std::endl;
    checkFloat(_exp(x),exp(x));
}

void checkLog(float x)
{
    std::cout<<"log("<<x<<"):"<<std::endl;
    checkFloat(_log(x),log(x));
}

int main(int argc,char* argv[])
{
    std::cout<<"\033[0;31;42m--- Hello orangeMath ---\033[0;32m"<<std::endl;
    checkExp(20.0);
    checkExp(1.0);
    checkExp(-1.0);
    // checkLog(2.0);
    // checkLog(10000000000);
    // checkLog(0.873);
    // checkAsin(1);
    return 0;
}
