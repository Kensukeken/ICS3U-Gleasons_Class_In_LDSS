  //  incremental income
//  0 to $30,000.00                 0%
//  $30,000.01 t0 $50,000.00        10%
//  $50,000.01 to $100,000.00       20%
//  $100,000.01 to $200,000.00      30%
//  $200,000.01 to $250,000.00      35%
//  >$250,000.01                    40%
//

#include <iostream>

using namespace std;

int main()
{
        //taxe increments have been calculated
    
   const double tax1 = 2000.00;         // first tax increment 30k-50k
   const double tax2 = 10000.00;        // second increment 50k-100k
   const double tax3 = 30000.00;        // thrid increment 100k-200k
   const double tax4 = 17500.00;        // fourth increment 200k-250k
    
    double income;      //initial income
    double taxedInc;    //how much taxes are
    double afterTax;    // income after taxes
    
    

    cout << "What is your income? " << endl;    //get income
    cin >> income;
    
    if (income <= 30000.00)
    {
        cout << "Your tax rate is 0%, you have no deductions. " << endl;
        cout << "Your income is " << income << endl;
    }
    else if (income>=30000.01 && income<=50000.00)
    {
        taxedInc = (income - 30000.00) * .10;       //calculates tax amount
        afterTax = income - taxedInc;
        
        cout << "Your income before taxes is " << income << "." << endl;
        cout << "Your income after deduction is " << afterTax << "." << endl;
        cout << "Your deducted amount is " << taxedInc << "." << endl;
        
    }
    else if (income>=50000.01 && income<=100000.01)
    {
        taxedInc = ((income - 50000.00) * .20) + tax1;      //calculates tax 
        afterTax = (income - taxedInc);
        
        cout << "Your income before taxes is " << income << "." << endl;
        cout << "Your income after taxes is " << afterTax << "." << endl;
        cout << "Your deducted amount is " << taxedInc << "." << endl;
    }
    else if (income>=100000.01 && income<=200000.00)
    {
        taxedInc = ((income - 100000.00) * .30) + tax1 + tax2; //calculates tax 
        afterTax = (income - taxedInc);
        
        cout << "Your income before taxes is " << income << "." << endl;
        cout << "Your income after taxes is " << afterTax << "." << endl;
        cout << "Your deducted amount is " << taxedInc << "." << endl;
    }
    else if (income>=200000.01 && income<=250000.00)
    {
        taxedInc =((income - 200000.00) * .35) + tax1 + tax2 + tax3;        //finds tax amount
        afterTax = (income -taxedInc);
        
        cout << "Your income before taxes is " << income << "." << endl;
        cout << "Your income after taxes is " << afterTax << "." << endl;
        cout << "Your deducted amount is " << taxedInc << "." << endl;
    }
    else if (income>250000.00)
    {
        taxedInc = ((income - 250000.00) * .40) + tax1 + tax2 + tax3 + tax4;        //finds tax amount
        afterTax = (income - taxedInc);
        
        cout << "Your income before taxes is " << income << "." << endl;
        cout << "Your income after taxes is " << afterTax << "." << endl;
        cout << "Your deducted amount is " << taxedInc << "." << endl;
    }
    else
        cout << "You have entered an unuseable number. Please restart the program and enter a positive number " << endl;
    
    return 0;
}
