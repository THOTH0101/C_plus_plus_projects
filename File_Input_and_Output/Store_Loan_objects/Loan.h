//
// Created by thoth on 5/30/23.
//

#ifndef STORE_LOAN_OBJECTS_LOAN_H
#define STORE_LOAN_OBJECTS_LOAN_H

class Loan
{
public:
    Loan();
    Loan(double rate, int years, double amount);
    double getAnnualInterestRate() const;
    int getNumberOfYears() const;
    double getLoanAmount() const;
    void setAnnualInterestRate(double rate);
    void setNumberOfYears(int years);
    void setLoanAmount(double amount);
    double getMonthlyPayment() const;
    double getTotalPayment() const;
private:
    double annualInterestRate;
    int numberOfYears;
    double loanAmount;
};

#endif //STORE_LOAN_OBJECTS_LOAN_H
