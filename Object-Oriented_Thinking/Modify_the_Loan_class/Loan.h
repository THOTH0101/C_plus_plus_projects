//
// Created by thoth on 2/25/23.
//

#ifndef MODIFY_THE_LOAN_CLASS_LOAN_H
#define MODIFY_THE_LOAN_CLASS_LOAN_H

class Loan
{
public:
    Loan();
    Loan(double rate, int years, double amount);
    double getAnnualInterestRate();
    int getNumberOfYears();
    double getLoanAmount();
    void setAnnualInterestRate(double rate);
    void setNumberOfYears(int years);
    void setLoanAmount(double amount);
    double getMonthlyPayment();
    double getTotalPayment();
    static double getMonthlyPayment(double annualInterestRate, int numberOfYears, double loanAmount);
    static double getTotalPayment(double annualInterestRate, int numberOfYears, double loanAmount);

private:
    double annualInterestRate;
    int numberOfYears;
    double loanAmount;
};

#endif //MODIFY_THE_LOAN_CLASS_LOAN_H
