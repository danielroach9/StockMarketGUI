#include<iostream>
#include "Stock.h"
#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account : public Stock
{
	public:
		explicit Account(const string, double, const int, Stock[]); 
		void setAccountName(const string);
		
		string getAccountName();
				
		void buyStock(Account, Stock[], int, int, Stock);

		void setAccountFunds(double);
		double getAccountFunds();

		void setAccountID(const int);
		int getAccountID();

		void investmentStock();
		


	private:
		string AccountName;
		double AccountFunds;
		int AccountID;
		Stock arrayOfInvestments[5];
		Account * accountDummyy;
		int sharesToBuy;
		int count;
		Stock * stockSample;
};
#endif






//EXT - exit program
//BACK - back to main menu
//BUY - buy a certain amount of shares from a specific stock
//SELL - sell a certain amount of shares from a specific stock
//SHOW INVESTMENTS - show the account's investments (stocks)
//SHOW TOTAL PROFIT - show total money made or lost from stocks
//SEARCH - search for available stocks (type in a company name or ticker)
//SEARCH ALL - see all available stocks
//SHOW STOCK 