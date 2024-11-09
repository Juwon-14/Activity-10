// Juwon Hong
//CIS 25
//15/9/2024

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double sales;
    double commissionRate;
    double commission;

    cout << "Enter the sales amount: ";
    cin >> sales;

    // The range of commission rate based on sales amount
    if (sales <= 10'000) {
        commissionRate = 0.10;
    } else if (sales <= 15'000) {
        commissionRate = 0.15;
    } else {
        commissionRate = 0.20;
    }

    // Calculate the commission
    commission = sales * commissionRate;

    // Output the commission
    cout << "The commission for the sale is: " << commission << endl;

    return 0;
}
