#include 	<iostream>
#include 	<iomanip>
#include 	<cmath>

int main() {
    using namespace 	std;



    double us_pop = 312032486;
    double birth_rate = 7;
    double death_rate = 13;
    double immigration_rate = 45;



    double sec_in_year = 365 * 24 * 60 * 60;
    double yearly_pop_growth = sec_in_year / birth_rate -
                               sec_in_year / death_rate +
                               sec_in_year / immigration_rate;



    double pop_in_1_year = round(us_pop + yearly_pop_growth);
    double pop_in_2_year = round(us_pop + yearly_pop_growth * 2);
    double pop_in_3_year = round(us_pop + yearly_pop_growth * 3);
    double pop_in_4_year = round(us_pop + yearly_pop_growth * 4);
    double pop_in_5_year = round(us_pop + yearly_pop_growth * 5);

    cout << fixed << setprecision(0) << pop_in_1_year << "\n" <<
            fixed << setprecision(0) << pop_in_2_year << "\n" <<
            fixed << setprecision(0) << pop_in_3_year << "\n" <<
            fixed << setprecision(0) << pop_in_4_year << "\n" <<
            fixed << setprecision(0) << pop_in_5_year << "\n";

    return 0;
}
