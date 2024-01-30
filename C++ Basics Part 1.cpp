#include <iostream>
#include <iomanip>

/**
 * "calculatePrice" Calculates the selling price and final price.
 */
void calculatePrice(double originalPrice, double markupPercentage, double salesTaxRate,
    double& sellingPrice, double& salesTaxAmount, double& finalPrice) {
    // Calculate the selling price
    sellingPrice = originalPrice + (originalPrice * markupPercentage / 100);

    // Calculate the sales tax amount
    salesTaxAmount = sellingPrice * salesTaxRate / 100;

    // Calculate the final price
    finalPrice = sellingPrice + salesTaxAmount;
}

int main() {
    double originalPrice, markupPercentage, salesTaxRate;
    double sellingPrice, salesTaxAmount, finalPrice;

    // Read the input values from the user
    std::cout << "Enter the original price of the item: ";
    std::cin >> originalPrice;

    std::cout << "Enter the markup percentage: ";
    std::cin >> markupPercentage;

    std::cout << "Enter the sales tax rate: ";
    std::cin >> salesTaxRate;

    // Calculate the prices
    calculatePrice(originalPrice, markupPercentage, salesTaxRate,
        sellingPrice, salesTaxAmount, finalPrice);

    // Output the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Original Price: $" << originalPrice << std::endl;
    std::cout << "Markup Percentage: " << markupPercentage << "%" << std::endl;
    std::cout << "Selling Price: $" << sellingPrice << std::endl;
    std::cout << "Sales Tax Amount: $" << salesTaxAmount << std::endl;
    std::cout << "Final Price: $" << finalPrice << std::endl;

    return 0;
}