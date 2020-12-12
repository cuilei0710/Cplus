//Author: 崔小葵
//Date: 2020-12-11 22:49:54
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-11 22:49:54
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    // copies the lesser of 4 or n items from the array ar
    // to the sales member of s any computes and stores the
    // average, maximum values of the entered items;
    // remaining elements of sales, if any, set to 0
    void setSales(Sales &s, const double ar[], int n);
    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minmum values
    void setSales(Sales &s);
    // display all information in structure s
    void showSales(const Sales &s);
} // namespace name
