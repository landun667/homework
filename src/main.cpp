//打印最终的结果
#include "Angle.hpp"
#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
    while (true)
    {
        double V0 , d;
        cout << "d= ";
        cin >> d;
        cout << "输入的d为: " << d << "m" << endl;
        cout << "V0= ";
        cin >> V0;
        cout << "输入的V0为: " << V0 << "m/s" << endl;
        if (((10 * d) / (V0 * V0)) > 1)
        {
            cout << "Error 请重新输入" << endl;
            continue;
        }
        
        if (d <= 0 || V0 <= 0)
        {
            cout << "Error 请重新输入" << endl;
            continue;
        }

        Angle m_angle(V0);

        double angle = m_angle.solver(d);
        double pi = acos(-1);
        double rad = angle * ( pi / 180 );

        cout << "角度制为: " << angle << " 度" << endl;

        cout << "弧度制为: " << rad << " rad" << endl;

                if ( angle < 90 && angle > 0)
                {
                        break;
                }


    }

    return 0;
}