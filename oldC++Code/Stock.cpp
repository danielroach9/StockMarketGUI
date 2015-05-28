#include<iostream>
#include "Stock.h"
using namespace std;

Stock::Stock()
{

}
Stock::Stock(const string cname, const string trade, double price, int amount)
{
	setCompanyName(cname);
	setTradingTicker(trade);
	setPricePerShare(price);
	setNumOfAvailableShares(amount);
}

void Stock::setCompanyName(const string cname)
{
	CompanyName = cname;
}

string Stock::getCompanyName()
{
	return CompanyName;
}

void Stock::setTradingTicker(const string trade)
{
	if((trade.length() > 1) && (trade.length() < 4))
		TradingTicker = trade;
	else
		throw invalid_argument ( "Trading ticker name must be more than 1 character and less than 4 characters.");
}

string Stock::getTradingTicker()
{
	return TradingTicker;
}

void Stock::setPricePerShare(double price)
{
	if(price > 0)
		PricePerShare = price;
	else 
		throw invalid_argument ("Price must be greater than 0.");
}

double Stock::getPricePerShare()
{
	return PricePerShare;
}

void Stock::setNumOfAvailableShares(int amount)
{
	if(amount > 0)
		NumberOfShares = amount;
	else
		throw invalid_argument ("Invalid number of shares entered.");
}

int Stock::getNumOfAvailableShares()
{
	return NumberOfShares;
}


