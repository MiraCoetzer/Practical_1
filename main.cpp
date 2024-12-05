#include <iostream>

using namespace std;

int main()
{
// Monthly revenue
    int intJan = 83;
    int intFeb = 12;
    int intMar = 33;
    int intApr = 49;
    int intMay = 76;
    int intJun = 52;
    int intJul = 58;
    int intAug = 14;
    int intSep = 29;
    int intOct = 91;
    int intNov = 5;
    int intDec = 100;

// Month names
    const string strJan = "Jan ";
    const string strFeb = "Feb ";
    const string strMar = "Mar ";
    const string strApr = "Apr ";
    const string strMay = "May ";
    const string strJun = "Jun ";
    const string strJul = "Jul ";
    const string strAug = "Aug ";
    const string strSep = "Sep ";
    const string strOct = "Oct ";
    const string strNov = "Nov ";
    const string strDec = "Dec ";

// Total revenue
    int intTotal = intJan
                    + intFeb
                    + intMar
                    + intApr
                    + intMay
                    + intJun
                    + intJul
                    + intAug
                    + intSep
                    + intOct
                    + intNov
                    + intDec;

// Calculating and converting average
    const int intNumOfMonths = 12;
    double dblAverage = static_cast<double>(intTotal) / intNumOfMonths;

    const double dblConvFactor = 0.053;
    double dblAverageInDollars = dblAverage * dblConvFactor;

// Outputting table
    cout << "Monthly revenue in millions of Rands " << endl;
    cout << strJan << ' '
         << strFeb << ' '
         << strMar << ' '
         << strApr << ' '
         << strMay << ' '
         << strJun << ' '
         << strJul << ' '
         << strAug << ' '
         << strSep << ' '
         << strOct << ' '
         << strNov << ' '
         << strDec << endl;

    cout << intJan << "   "
         << intFeb << "   "
         << intMar << "   "
         << intApr << "   "
         << intMay << "   "
         << intJun << "   "
         << intJul << "   "
         << intAug << "   "
         << intSep << "   "
         << intOct << "   "
         << intNov << "    "
         << intDec << endl;

    cout << "\n";

// Outputting average
    cout << "Average revenue in millions of Rands: " << dblAverage << "\n";
    cout << "Average revenue in millions of Dollars: " << dblAverageInDollars << endl;

    return 0;
}
