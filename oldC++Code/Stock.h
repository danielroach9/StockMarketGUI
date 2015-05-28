#ifndef STOCK_H
#define STOCK_H

#include<iostream>
#include<string>
using namespace std;

class Stock 
{

public:
		Stock();
        Stock(const string, const string, double, int); 

		void setCompanyName(const string);
        string getCompanyName();

        void setTradingTicker(const string);
        string getTradingTicker();

        void setPricePerShare(double);
        double getPricePerShare();

        void setNumOfAvailableShares(int);
        int getNumOfAvailableShares();

		
private:
        string CompanyName;
        string TradingTicker;
        double PricePerShare;
        int NumberOfShares;
};

#endif






