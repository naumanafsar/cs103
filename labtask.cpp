#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost = 12.00;
    int tip_percent = 20;
    int tax_percent = 8;

    float tip = (meal_cost * tip_percent) / 100;
    float tax = (meal_cost * tax_percent) / 100;
    float total_cost = meal_cost + tip + tax;

    std::cout << tip << endl << tax << '\n' << total_cost << '\n';

    cout << "The total meal cost is " << round(total_cost) <<" dollars.";
    return 0;
}
