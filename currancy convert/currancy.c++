#include <iostream>
#include <iomanip>

using namespace std;

// Conversion rates
const double USD_TO_EUR = 0.91;
const double USD_TO_INR = 83.05;
const double EUR_TO_INR = 91.33;
const double EUR_TO_USD = 1.10;
const double INR_TO_USD = 0.012;
const double INR_TO_EUR = 0.011;

void convertCurrency(double amount, char fromCurrency, char toCurrency) {
    double convertedAmount = 0.0;

    if (fromCurrency == 'U' && toCurrency == 'E') {
        convertedAmount = amount * USD_TO_EUR;
    } else if (fromCurrency == 'U' && toCurrency == 'I') {
        convertedAmount = amount * USD_TO_INR;
    } else if (fromCurrency == 'E' && toCurrency == 'U') {
        convertedAmount = amount * EUR_TO_USD;
    } else if (fromCurrency == 'E' && toCurrency == 'I') {
        convertedAmount = amount * EUR_TO_INR;
    } else if (fromCurrency == 'I' && toCurrency == 'U') {
        convertedAmount = amount * INR_TO_USD;
    } else if (fromCurrency == 'I' && toCurrency == 'E') {
        convertedAmount = amount * INR_TO_EUR;
    } else {
        cout << "Invalid currency code or conversion not supported." << endl;
        return;
    }

    cout << fixed << setprecision(2);
    cout << amount << " " << fromCurrency << " = " << convertedAmount << " " << toCurrency << endl;
}

int main() {
    double amount;
    char fromCurrency, toCurrency;

    cout << "Currency Converter" << endl;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter source currency (U for USD, E for EUR, I for INR): ";
    cin >> fromCurrency;
    cout << "Enter target currency (U for USD, E for EUR, I for INR): ";
    cin >> toCurrency;

    fromCurrency = toupper(fromCurrency);
    toCurrency = toupper(toCurrency);

    convertCurrency(amount, fromCurrency, toCurrency);

    return 0;
}
