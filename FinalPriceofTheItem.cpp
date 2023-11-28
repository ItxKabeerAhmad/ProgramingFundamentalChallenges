#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double originalPrice,markedupPercentage,saleTaxRate,sellingPrice,saleTax,finalPrice;
    cout<<"ENTER THE ORIGINAL PRICE MARKEDUP PERCENTAGE SALE TAX RATE RESPECTIVELY: ";
    cin>>originalPrice>>markedupPercentage>>saleTaxRate;
    // Selling Price=Original Price+(Original Price×Markup Percentage)
    sellingPrice = originalPrice + (originalPrice * markedupPercentage);
    // Sales Tax=Selling Price * ( sale tax rate / 100 )
    saleTax = sellingPrice * (saleTaxRate/100);
    // Final Price=Selling Price+Sales Tax
    finalPrice = sellingPrice + saleTax;
    cout<<"THE FINAL PRICE OF THE ITEM IS "<<finalPrice<<"$";
}