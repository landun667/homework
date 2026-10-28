//源文件
#include "Angle.hpp"
#include <iostream> 
#include <cmath>

using namespace std;

Angle::Angle(double m_vo)
{
        V0 = m_vo;

}

double  Angle :: solver(double d)
{
        double pi = acos(-1);

        double angle = ((asin((10 * d) / (V0 * V0))) / 2) * (180.0 / pi);

        if (angle > 90 or angle < 0)
                {
                        cout << "Error " << endl;
                        return 0;
                }


                
        return angle;



}