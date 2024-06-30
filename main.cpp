#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     const int Jan_ = 83, Feb_ = 12, Mar_ = 33, Apr_ = 49, May_ = 76, Jun_ = 52, Jul_ = 58,
               Aug_ = 14, Sep_ = 29, Oct_ = 91, Nov_ = 5, Dec_ = 100;

     const double NumOfMonths = 12.0; // Number of months in a year.

     const string Month_1 = "Jan", Month_2 = "Feb", Month_3 = "Mar", Month_4 = "Apr", Month_5 = "May", Month_6 = "Jun",
                  Month_7 = "Jul", Month_8 = "Aug", Month_9 = "Sep", Month_10 = "Oct", Month_11 = "Nov", Month_12 = "Dec";

     double Ave_rev_rands = ((Jan_ + Feb_ + Mar_ + Apr_ + May_ + Jun_ + Jul_ + Aug_ + Sep_ + Oct_ + Nov_ + Dec_) / static_cast<double>(NumOfMonths));

     const float Conv_factor = 0.053;
     double Ave_rev_dollar = Conv_factor * Ave_rev_rands;

     cout << Month_1 << "\t" << Month_2 << "\t" << Month_3 << "\t" << Month_4 << "\t" << Month_5 << "\t" << Month_6 << "\t"
          << Month_7 << "\t" << Month_8 << "\t" << Month_9 << " \t" << Month_10 << "\t" << Month_11 << "\t" << Month_12 << endl;

     cout << Jan_ << "\t" << Feb_ << "\t" << Mar_ << "\t" << Apr_ << "\t" << May_ << "\t" << Jun_ << "\t"
          << Jul_ << "\t" << Aug_ << "\t" << Sep_ << "\t" << Oct_ << "\t" << Nov_ << "\t" << Dec_ << endl;
     cout << endl;


     cout << "Average revenue(in rands) = " << Ave_rev_rands << " million rands" << endl;
     cout << endl;
     cout << "Average revenue(in dollars) = " << Ave_rev_dollar << " million dollars" << endl;
     cout << endl;

     return 0;
}
