#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _displayTimestamp();
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";created\n";
}
Account::Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";closed\n";
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";p_amount:" << _amount
        << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount
        << ";nb_deposits:" << _nbDeposits << "\n";
}
bool Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";p_amount:" << _amount;
    if(withdrawal > _amount)
    {
        std::cout<<";refused\n";
        return false;
    }
    std::cout<< ";withdrawal:" << withdrawal;
    _amount += withdrawal;
    _totalAmount += withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";amount:" << _amount
        << ";nb_withdrawals:" << _nbWithdrawals << "\n";
    return true;
}
int Account::checkAmount(void) const{
    return _amount;
}
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals << "\n";
}

int Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int Account::getTotalAmount( void ) {
    return _totalAmount;
}

int Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
    _displayTimestamp();
	std::cout   << "accounts:" << getNbAccounts()
	            << ";total:" << getTotalAmount()
                << ";deposits:" << getNbDeposits()
	            << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void Account::_displayTimestamp( void){
    time_t result = std::time(NULL);
    std::cout	<< "[" << 1900 + std::localtime(&result)->tm_year;
    std::cout	<< 1 + std::localtime(&result)->tm_mon;
    std::cout	<< std::localtime(&result)->tm_mday;
    std::cout	<< "_";
    std::cout	<< std::localtime(&result)->tm_hour;
    std::cout	<< std::localtime(&result)->tm_min;
    std::cout	<< std::localtime(&result)->tm_sec << "] ";
}
