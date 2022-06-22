#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account() {
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::Account( int initial_deposit ) {
    _amount = initial_deposit;
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;


    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account( void ) {

}

void	Account::makeDeposit( int deposit ) {
    if (deposit < 0)
        return ;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal > _amount)
        return false;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    return true;
}

int		Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const {
}