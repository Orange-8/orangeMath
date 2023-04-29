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

int main(int argc,char* argv[])
{
    std::cout<<"--- Hello orangeMath ---"<<std::endl;
    checkFloat(_exp(2),exp(2));
    return 0;
}

