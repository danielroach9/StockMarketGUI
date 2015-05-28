#include <iostream>
#include <vector>
#include "Account.h"
#include "Stock.h"
using namespace std;

Account::Account(const string userName, double money, const int identification, Stock arrays[])
{
	setAccountName(userName);
	setAccountFunds(money);
	setAccountID(identification);
}

void Account::setAccountName(const string userName)
{
	AccountName = userName;
}

string Account::getAccountName()
{
	return AccountName;
}

void Account::setAccountFunds(double money)
{
	AccountFunds = money;
}

double Account::getAccountFunds()
{
	return AccountFunds;
}

void Account::setAccountID(const int identification)
{
	AccountID = identification;
}

int Account::getAccountID()
{
	return AccountID;
}


void Account::investmentStock()
{
	arrayOfInvestments[0] = Stock();
	arrayOfInvestments[1] = Stock();
	arrayOfInvestments[2] = Stock();
	arrayOfInvestments[3] = Stock();
	arrayOfInvestments[4] = Stock();
}

void Account::buyStock(Account acccountDummyy, Stock arrayOfInvestments[], int sharesToBuy, int count, Stock stockSample)
{
						if(arrayOfInvestments[count].getNumOfAvailableShares() == 1)
						{
							arrayOfInvestments[count] = stockSample;
							arrayOfInvestments[count].setNumOfAvailableShares(sharesToBuy);
							stockSample.setNumOfAvailableShares((stockSample.getNumOfAvailableShares() - sharesToBuy));
							accountDummyy->setAccountFunds((accountDummyy->getAccountFunds()) - (stockSample.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stockSample.getCompanyName() << " (" << stockSample.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << accountDummyy->getAccountFunds() << " left.\n";
							count++;
						}
						else if(arrayOfInvestments[count].getNumOfAvailableShares() != 1)
						{
							arrayOfInvestments[count+1] = stockSample;
							arrayOfInvestments[count+1].setNumOfAvailableShares(sharesToBuy);
							stockSample.setNumOfAvailableShares((stockSample.getNumOfAvailableShares() - sharesToBuy));
							accountDummyy->setAccountFunds(accountDummyy->getAccountFunds() - (stockSample.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stockSample.getCompanyName() << " (" << stockSample.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << accountDummyy->getAccountFunds() << " left.\n";
							count++;
						}
}

