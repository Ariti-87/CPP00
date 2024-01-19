#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
}

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

// Format the timestamp as [YYYYMMDD_HHMMSS]
void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(NULL);
	struct std::tm *parts = std::localtime(&now);

	char timestamp[20];
	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", parts);

	std::cout << timestamp << " ";
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:";
	std::cout << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:";
	std::cout << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	if (_amount >= withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused"  << std::endl;
		return false;
	}
}

int Account::checkAmount( void ) const
{
	return _amount;
}




// void Account::makeDeposit(int deposit) {
//     // Display the timestamp and deposit information
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";p_amount:"
//  << _amount << ";deposit:" << deposit;

//     // Update the account details
//     _amount += deposit;
//     _nbDeposits++;
//     _totalAmount += deposit;
//     _totalNbDeposits++;

//     std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
// }

// bool Account::makeWithdrawal(int withdrawal) {
//     // Display the timestamp and withdrawal information
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;

//     // Check if withdrawal is possible
//     if (_amount >= withdrawal) {
//         // Update the account details
//         _amount -= withdrawal;
//         _nbWithdrawals++;
//         _totalAmount -= withdrawal;
//         _totalNbWithdrawals++;

//         std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
//         return true;
//     } else {
//         // Display error message if withdrawal is not possible
//         std::cout << ";refused" << std::endl;
//         return false;
//     }
// }




// Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
//     // Increment the total number of accounts and update the total amount
//     _nbAccounts++;
//     _totalAmount += initial_deposit;

//     // Display the timestamp and account creation information
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
// }

// Account::~Account(void) {
//     // Display the timestamp and account closure information
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

//     // Decrement the total number of accounts and update the total amount
//     _nbAccounts--;
//     _totalAmount -= _amount;
// }
