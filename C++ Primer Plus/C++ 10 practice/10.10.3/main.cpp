//Author: 崔小葵
//Date: 2020-12-23 23:38:43
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-23 23:38:43
#include "golf.h"

int main()
{
    Golf g;
    Golf g2("Jimmy", 100);

    g.showgolf();
    g.sethandicap(120);
    g.showgolf();

    g2.showgolf();
    g2.sethandicap(120);
    g2.showgolf();

    system("pause");
    return 0;
}