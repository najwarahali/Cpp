/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:15:59 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/19 17:46:11 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

int	    Account::_nbAccounts = 0;
int	    Account::_totalAmount = 0;
int	    Account::_totalNbDeposits = 0;
int	    Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year;
    std::cout << 1 + ltm->tm_mon;
    std::cout << ltm->tm_mday;
    std::cout << "_"<< ltm->tm_hour;
    std::cout << ltm->tm_min;
    std::cout << ltm->tm_sec << "]";
   
}
Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _displayTimestamp();
    _amount =  initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = _totalNbDeposits;
    _nbWithdrawals = _totalNbWithdrawals;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created";
    std::cout << std::endl; 
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount<< ";";
    std::cout << "closed";
    std::cout << std::endl;
}
void    Account::displayAccountsInfos(void)
{
     _displayTimestamp();
     std::cout << "accounts:8;";
     std::cout << "total:" << _totalAmount << ";";
     std::cout << "deposits:" << _totalNbDeposits << ";";
     std::cout << "withdrawals:" << _totalNbWithdrawals << ";";
     std::cout << std::endl;
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount<< ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
    std::cout << std::endl; 
}

void	Account::makeDeposit(int deposit){
    
   _nbDeposits = deposit;
   _displayTimestamp();
   std::cout << "index:" << this->_accountIndex << ";";
   std::cout << "amount:" << this->_amount<< ";";
   std::cout << "deposit:" << this->_nbDeposits<< ";";
   _amount = this->_amount + _nbDeposits;
   std::cout << "amount:" << this->_amount<< ";";
   _totalNbDeposits += 1;
   this->_nbDeposits = 1;
   std::cout << "nb_deposits:" << this->_nbDeposits;
   _totalAmount += deposit;
   std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    _nbWithdrawals=_amount - withdrawal;
    _displayTimestamp();
   std::cout << "index:" << this->_accountIndex << ";";
   std::cout << "p_amount:" << this->_amount<< ";";
   if (_nbWithdrawals < 0)
    {
        this->_nbWithdrawals = 0;
        std::cout << "withdrawal:refused";
        std::cout << std::endl;
        return (false);
    }
    else{
        std::cout << "nb_withdrawals:" << withdrawal<< ";";
        _amount = _nbWithdrawals;
        std::cout << "amount:" << _amount<< ";";
        _totalNbWithdrawals += 1;
        this->_nbWithdrawals = 1;
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
        _totalAmount -= withdrawal;
        
        std::cout << std::endl;
    }  
    return (true);
}