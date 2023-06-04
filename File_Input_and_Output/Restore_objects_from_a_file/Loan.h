//
// Created by thoth on 5/30/23.
//

#ifndef RESTORE_OBJECTS_FROM_A_FILE_LOAN_H
#define RESTORE_OBJECTS_FROM_A_FILE_LOAN_H

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

#endif //RESTORE_OBJECTS_FROM_A_FILE_LOAN_H