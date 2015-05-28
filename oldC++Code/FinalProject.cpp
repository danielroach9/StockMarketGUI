#include <iostream>
#include <map>
#include <iomanip>
#include <string>
#include "Stock.h"
#include "Account.h"
using namespace std;


	static enum MenuDirection {MenuDefundefined, MenuDef1, MenuDef2, MenuDef3, MenuDef4, MenuDef5, MenuDef6, MenuDef7, MenuDef8, MenuDef9, MenuDef10,
	                          MenuDef11, MenuDef12, MenuDef13, MenuDef14, MenuDef15, MenuDef16, MenuDef17, MenuDef18};

	static enum CompanyName { CTitleundefined, CTitle1, CTitle2, CTitle3, CTitle4, CTitle5, CTitle6, CTitle7, CTitle8, CTitle9, CTitle10, CTitle11,
							   CTitle12, CTitle13, CTitle14, CTitle15, CTitle16, CTitle17, CTitle18, CTitle19, CTitle20}; 

	// Map to associate the strings with the enum values
	static std::map<std::string, MenuDirection> s_mapMenuDirections;

	static std::map<std::string, CompanyName> s_mapCompanyNames;
	// User input
	static char szInput[_MAX_PATH];

	// Intialization
	static void Initialize();

	int count = 0;

	int main(int argc, char* argv[])
{
	string companyToSell;
	double currentPrice;
	int sharesToBuy;
	Initialize();

	Stock stock1("Mishka", "MKA", 35.00, 1000); 
	Stock stock2("Samsung", "SM", 50.00, 45);
	Stock stock3("Sony", "SNY", 65.00, 100000);
	Stock stock4("Nokia", "NK", 23.00, 5700);
	Stock stock5("Gatorade","GTR", 15.00, 3000);
	Stock stock6("Apple","APL", 40.00, 7000);
	Stock stock7("Microsoft", "MST", 72.00, 8000);
	Stock stock8("Google","GGL", 46.00, 3000);
	Stock stock9("Casio", "CAS", 34.00, 1000);
	Stock stock10("Nike", "NKE", 35.00, 4000);

	cout << fixed << setprecision( 2 );
	
	Stock stockempty[5];

	stockempty[0] = Stock ("No stock available ", "N/A", 0.01, 1);
	stockempty[1] = Stock ("No stock available", "N/A", 0.01, 1);
	stockempty[2] = Stock ("No stock available", "N/A", 0.01, 1);
	stockempty[3] = Stock ("No stock available", "N/A", 0.01, 1);
	stockempty[4] = Stock ("No stock available ", "N/A", 0.01, 1);

	Account account1("Daniel Roach", 500000.00, 562169, stockempty);

	Account accountDummy = account1;


	//stock1.Trading
	while(1)
	{
		cout<<"MAIN MENU. What would you like to do? ";
		//cout.flush();
		cin.getline(szInput, _MAX_PATH);
		switch(s_mapMenuDirections[szInput])
		{
			case MenuDef1:
			case MenuDef2:
			case MenuDef3:		//SEARCH
				{cout << "Type in a company name or a company trading ticker. ";
				cout.flush();
				cin.getline(szInput, _MAX_PATH);
				switch(s_mapCompanyNames[szInput])
				{
					case CTitle1:
					case CTitle2:
						cout << "\nCompany Name: "<<stock1.getCompanyName()<<"\nTrading Ticker: "<<stock1.getTradingTicker()<<"\nPrice Per Share: $"<<stock1.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock1.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle3:
					case CTitle4:
						cout << "\nCompany Name: "<<stock2.getCompanyName()<<"\nTrading Ticker: "<<stock2.getTradingTicker()<<"\nPrice Per Share: $"<<stock2.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock2.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle5:
					case CTitle6:
						cout << "\nCompany Name: "<<stock3.getCompanyName()<<"\nTrading Ticker: "<<stock3.getTradingTicker()<<"\nPrice Per Share: $"<<stock3.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock3.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle7:
					case CTitle8:
						cout << "\nCompany Name: "<<stock4.getCompanyName()<<"\nTrading Ticker: "<<stock4.getTradingTicker()<<"\nPrice Per Share: $"<<stock4.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock4.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle9:
					case CTitle10:
						cout << "\nCompany Name: "<<stock5.getCompanyName()<<"\nTrading Ticker: "<<stock5.getTradingTicker()<<"\nPrice Per Share: $"<<stock5.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock5.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle11:
					case CTitle12:
						cout << "\nCompany Name: "<<stock6.getCompanyName()<<"\nTrading Ticker: "<<stock6.getTradingTicker()<<"\nPrice Per Share: $"<<stock6.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock6.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle13:
					case CTitle14:
						cout << "\nCompany Name: "<<stock7.getCompanyName()<<"\nTrading Ticker: "<<stock7.getTradingTicker()<<"\nPrice Per Share: $"<<stock7.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock7.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle15:
					case CTitle16:
						cout << "\nCompany Name: "<<stock8.getCompanyName()<<"\nTrading Ticker: "<<stock8.getTradingTicker()<<"\nPrice Per Share: $"<<stock8.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock8.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle17:
					case CTitle18:
						cout << "\nCompany Name: "<<stock9.getCompanyName()<<"\nTrading Ticker: "<<stock9.getTradingTicker()<<"\nPrice Per Share: $"<<stock9.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock9.getNumOfAvailableShares()<<endl<<endl;
						break;
					case CTitle19:
					case CTitle20:
						cout << "\nCompany Name: "<<stock10.getCompanyName()<<"\nTrading Ticker: "<<stock10.getTradingTicker()<<"\nPrice Per Share: $"<<stock10.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock10.getNumOfAvailableShares()<<endl<<endl;
						break;
					default: 
						{
							cout<<"\n\nNo company or trading ticker by that name is available. \nProceeding back to go to main menu.\n\n";
							break;
							break;
						}
					} break; 
			case MenuDef4:		//SEE ALL STOCKS
				cout << "\nThese are all the stocks currently available."<<endl;
				cout << "Company Name: "<<stock1.getCompanyName()<<"\nTrading Ticker: "<<stock1.getTradingTicker()<<"\nPrice Per Share: $"<<stock1.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock1.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock2.getCompanyName()<<"\nTrading Ticker: "<<stock2.getTradingTicker()<<"\nPrice Per Share: $"<<stock2.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock2.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock3.getCompanyName()<<"\nTrading Ticker: "<<stock3.getTradingTicker()<<"\nPrice Per Share: $"<<stock3.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock3.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock4.getCompanyName()<<"\nTrading Ticker: "<<stock4.getTradingTicker()<<"\nPrice Per Share: $"<<stock4.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock4.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock5.getCompanyName()<<"\nTrading Ticker: "<<stock5.getTradingTicker()<<"\nPrice Per Share: $"<<stock5.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock5.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock6.getCompanyName()<<"\nTrading Ticker: "<<stock6.getTradingTicker()<<"\nPrice Per Share: $"<<stock6.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock6.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock7.getCompanyName()<<"\nTrading Ticker: "<<stock7.getTradingTicker()<<"\nPrice Per Share: $"<<stock7.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock7.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock8.getCompanyName()<<"\nTrading Ticker: "<<stock8.getTradingTicker()<<"\nPrice Per Share: $"<<stock8.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock8.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock9.getCompanyName()<<"\nTrading Ticker: "<<stock9.getTradingTicker()<<"\nPrice Per Share: $"<<stock9.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock9.getNumOfAvailableShares()<<endl<<endl;
				cout << "Company Name: "<<stock10.getCompanyName()<<"\nTrading Ticker: "<<stock10.getTradingTicker()<<"\nPrice Per Share: $"<<stock10.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock10.getNumOfAvailableShares()<<endl<<endl;
				break;
			case MenuDef5:
			case MenuDef6:
			case MenuDef7:		//BUY
				cout<<"\nUser entered BUY "<<endl;
				cout<<"Enter the company name or trading ticker of the stock you want to buy: ";
				cout.flush();
				cin.getline(szInput, _MAX_PATH);
				switch(s_mapCompanyNames[szInput])
				{
					case CTitle1:
					case CTitle2:
						cout << "\nCompany Name: "<<stock1.getCompanyName()<<"\nTrading Ticker: "<<stock1.getTradingTicker()<<"\nPrice Per Share: $"<<stock1.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock1.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Mishka (MK) do you want to buy? ";
						cin >> sharesToBuy;
						
						if(sharesToBuy > stock1.getNumOfAvailableShares() || (sharesToBuy * stock1.getPricePerShare()) > account1.getAccountFunds() ){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock1;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock1.setNumOfAvailableShares((stock1.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock1.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock1.getCompanyName() << " (" << stock1.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
							break;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock1;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock1.setNumOfAvailableShares((stock1.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock1.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock1.getCompanyName() << " (" << stock1.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
							
						}}

						break;
					case CTitle3:
					case CTitle4:
						cout << "\nCompany Name: "<<stock2.getCompanyName()<<"\nTrading Ticker: "<<stock2.getTradingTicker()<<"\nPrice Per Share: $"<<stock2.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock2.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Samsung (SM) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock2.getNumOfAvailableShares() || (sharesToBuy * stock2.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock2;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock2.setNumOfAvailableShares((stock2.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock2.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock2.getCompanyName() << " (" << stock2.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock1;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock2.setNumOfAvailableShares((stock2.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock2.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock2.getCompanyName() << " (" << stock2.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}

						break;
					case CTitle5:
					case CTitle6:
						cout << "\nCompany Name: "<<stock3.getCompanyName()<<"\nTrading Ticker: "<<stock3.getTradingTicker()<<"\nPrice Per Share: $"<<stock3.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock3.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Sony (SNY) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock3.getNumOfAvailableShares() || (sharesToBuy * stock3.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock3;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock3.setNumOfAvailableShares((stock3.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock3.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock3.getCompanyName() << " (" << stock3.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock3;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock3.setNumOfAvailableShares((stock1.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock3.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock3.getCompanyName() << " (" << stock3.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}

						break;
					case CTitle7:
					case CTitle8:
						cout << "\nCompany Name: "<<stock4.getCompanyName()<<"\nTrading Ticker: "<<stock4.getTradingTicker()<<"\nPrice Per Share: $"<<stock4.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock4.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Nokia (NK) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock4.getNumOfAvailableShares() || (sharesToBuy * stock4.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock4;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock4.setNumOfAvailableShares((stock4.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock4.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock4.getCompanyName() << " (" << stock4.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock4;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock4.setNumOfAvailableShares((stock4.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock4.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock4.getCompanyName() << " (" << stock4.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					case CTitle9:
					case CTitle10:
						cout << "\nCompany Name: "<<stock5.getCompanyName()<<"\nTrading Ticker: "<<stock5.getTradingTicker()<<"\nPrice Per Share: $"<<stock5.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock5.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Gatorade (GTR) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock5.getNumOfAvailableShares() || (sharesToBuy * stock5.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock5;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock5.setNumOfAvailableShares((stock5.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock5.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock5.getCompanyName() << " (" << stock5.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock5;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock5.setNumOfAvailableShares((stock5.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock5.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock5.getCompanyName() << " (" << stock5.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					case CTitle11:
					case CTitle12:
						cout << "\nCompany Name: "<<stock6.getCompanyName()<<"\nTrading Ticker: "<<stock6.getTradingTicker()<<"\nPrice Per Share: $"<<stock6.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock6.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Apple (APL) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock6.getNumOfAvailableShares() || (sharesToBuy * stock6.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							cout<<"The number of shares you want to buy is more than is available. Heading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock6;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock6.setNumOfAvailableShares((stock6.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock6.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock6.getCompanyName() << " (" << stock6.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock1;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock6.setNumOfAvailableShares((stock6.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock6.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock6.getCompanyName() << " (" << stock6.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					case CTitle13:
					case CTitle14:
						cout << "\nCompany Name: "<<stock7.getCompanyName()<<"\nTrading Ticker: "<<stock7.getTradingTicker()<<"\nPrice Per Share: $"<<stock7.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock7.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Microsoft (MST) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock7.getNumOfAvailableShares() || (sharesToBuy * stock7.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock7;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock7.setNumOfAvailableShares((stock7.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock7.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock7.getCompanyName() << " (" << stock7.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock7;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock7.setNumOfAvailableShares((stock7.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock7.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock7.getCompanyName() << " (" << stock7.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					case CTitle15:
					case CTitle16:
						cout << "\nCompany Name: "<<stock8.getCompanyName()<<"\nTrading Ticker: "<<stock8.getTradingTicker()<<"\nPrice Per Share: $"<<stock8.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock8.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Google (GGL) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock8.getNumOfAvailableShares() || (sharesToBuy * stock8.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock8;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock8.setNumOfAvailableShares((stock8.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock8.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock8.getCompanyName() << " (" << stock8.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock8;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock8.setNumOfAvailableShares((stock8.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock8.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock8.getCompanyName() << " (" << stock8.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					case CTitle17:
					case CTitle18:
						cout << "\nCompany Name: "<<stock9.getCompanyName()<<"\nTrading Ticker: "<<stock9.getTradingTicker()<<"\nPrice Per Share: $"<<stock9.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock9.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Casio (CAS) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock9.getNumOfAvailableShares() || (sharesToBuy * stock9.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock9;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock9.setNumOfAvailableShares((stock9.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock9.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock9.getCompanyName() << " (" << stock9.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock9;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock9.setNumOfAvailableShares((stock9.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock9.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock9.getCompanyName() << " (" << stock9.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					case CTitle19:
					case CTitle20:
						cout << "\nCompany Name: "<<stock10.getCompanyName()<<"\nTrading Ticker: "<<stock10.getTradingTicker()<<"\nPrice Per Share: $"<<stock10.getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stock10.getNumOfAvailableShares()<<endl<<endl;
						cout << "How many shares of Nike (NKE) do you want to buy? ";
						cin >> sharesToBuy;
						if(sharesToBuy > stock10.getNumOfAvailableShares() || (sharesToBuy * stock10.getPricePerShare()) > account1.getAccountFunds()){
							cout<<"Invalid action. Possible errors: \nThe number of shares you want to buy is more than is available.  \nYou do not have enough money to buy the number of shares selected. \nHeading back to main menu\n\n";
							break;}
						else
						{
						if(stockempty[count].getNumOfAvailableShares() == 1)
						{
							stockempty[count] = stock10;
							stockempty[count].setNumOfAvailableShares(sharesToBuy);
							stock10.setNumOfAvailableShares((stock10.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock10.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock10.getCompanyName() << " (" << stock10.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}
						else if(stockempty[count].getNumOfAvailableShares() != 1)
						{
							stockempty[count+1] = stock10;
							stockempty[count+1].setNumOfAvailableShares(sharesToBuy);
							stock10.setNumOfAvailableShares((stock10.getNumOfAvailableShares() - sharesToBuy));
							account1.setAccountFunds(account1.getAccountFunds() - (stock10.getPricePerShare() * sharesToBuy));
							cout<< "\n\nYou have bought "<< sharesToBuy << " shares of " <<stock10.getCompanyName() << " (" << stock10.getTradingTicker() << ")" <<endl;
							cout<< "You now have $" << account1.getAccountFunds() << " left.\n\n";
							count++;
						}}
						break;
					default:
						{
							cout<<"\n\nNo company or trading ticker by that name is available. \nProceeding back to go to main menu.\n\n";
							break;
							break;
						}
				}
				break;
			{case MenuDef8:
			case MenuDef9:
			case MenuDef10:			//SELL
				cout<<"\nHere are the stocks you currently own."<<endl<<endl;
				cout<< "Company Name: "<<stockempty[0].getCompanyName()<<"\nTrading Ticker: "<<stockempty[0].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[0].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[0].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[0].getNumOfAvailableShares() * stockempty[0].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[1].getCompanyName()<<"\nTrading Ticker: "<<stockempty[1].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[1].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[1].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[1].getNumOfAvailableShares() * stockempty[1].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[2].getCompanyName()<<"\nTrading Ticker: "<<stockempty[2].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[2].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[2].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[2].getNumOfAvailableShares() * stockempty[2].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[3].getCompanyName()<<"\nTrading Ticker: "<<stockempty[3].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[3].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[3].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[3].getNumOfAvailableShares() * stockempty[3].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[4].getCompanyName()<<"\nTrading Ticker: "<<stockempty[4].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[4].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[4].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[4].getNumOfAvailableShares() * stockempty[4].getPricePerShare())<<endl<<endl;
				cout<<"Enter company name or trading ticker you want to sell. ";
				cin>>companyToSell;
				int stopSell = 0;
				if((stockempty[stopSell].getCompanyName() == companyToSell) || (stockempty[stopSell].getTradingTicker() == companyToSell))
					{
						cout<<"You have sold your "<<stockempty[stopSell].getNumOfAvailableShares()<<" shares of "<<stockempty[stopSell].getCompanyName()<<" ("<<stockempty[stopSell].getTradingTicker()<<")"<<endl;
						cout<<"Your account has been credited $"<<(stockempty[stopSell].getNumOfAvailableShares() * stockempty[stopSell].getPricePerShare())<<endl;
						account1.setAccountFunds(account1.getAccountFunds() + (stockempty[stopSell].getNumOfAvailableShares() * stockempty[stopSell].getPricePerShare()));
						cout<<"New account balance: $"<<account1.getAccountFunds()<<endl<<endl;
						stockempty[stopSell].setCompanyName("No stock available");
						stockempty[stopSell].setTradingTicker("N/A");
						stockempty[stopSell].setPricePerShare(0.01);
						stockempty[stopSell].setNumOfAvailableShares(1);
						break;
					}
					else if((stockempty[stopSell].getCompanyName() != companyToSell) || (stockempty[stopSell].getTradingTicker() != companyToSell))
				{
						if((stockempty[stopSell+1].getCompanyName() == companyToSell) || (stockempty[stopSell+1].getTradingTicker() == companyToSell))
							{
								cout<<"You have sold your "<<stockempty[stopSell+1].getNumOfAvailableShares()<<" shares of "<<stockempty[stopSell+1].getCompanyName()<<" ("<<stockempty[stopSell+1].getTradingTicker()<<")"<<endl;
								cout<<"Your account has been credited $"<<(stockempty[stopSell+1].getNumOfAvailableShares() * stockempty[stopSell+1].getPricePerShare())<<endl;
								account1.setAccountFunds(account1.getAccountFunds() + (stockempty[stopSell+1].getNumOfAvailableShares() * stockempty[stopSell+1].getPricePerShare()));
								cout<<"New account balance: $"<<account1.getAccountFunds()<<endl<<endl;
								stockempty[stopSell+1].setCompanyName("No stock available");
								stockempty[stopSell+1].setTradingTicker("N/A");
								stockempty[stopSell+1].setPricePerShare(0.01);
								stockempty[stopSell+1].setNumOfAvailableShares(1);
								break;
							}
						else if((stockempty[stopSell+1].getCompanyName() != companyToSell) || (stockempty[stopSell+1].getTradingTicker() != companyToSell))
					{
							if((stockempty[stopSell+2].getCompanyName() == companyToSell) || (stockempty[stopSell+2].getTradingTicker() == companyToSell))
								{
									cout<<"You have sold your "<<stockempty[stopSell+2].getNumOfAvailableShares()<<" shares of "<<stockempty[stopSell+2].getCompanyName()<<" ("<<stockempty[stopSell+2].getTradingTicker()<<")"<<endl;
									cout<<"Your account has been credited $"<<(stockempty[stopSell+2].getNumOfAvailableShares() * stockempty[stopSell+2].getPricePerShare())<<endl;
									account1.setAccountFunds(account1.getAccountFunds() + (stockempty[stopSell+2].getNumOfAvailableShares() * stockempty[stopSell+2].getPricePerShare()));
									cout<<"New account balance: $"<<account1.getAccountFunds()<<endl<<endl;
									stockempty[stopSell+2].setCompanyName("No stock available");
									stockempty[stopSell+2].setTradingTicker("N/A");
									stockempty[stopSell+2].setPricePerShare(0.01);
									stockempty[stopSell+2].setNumOfAvailableShares(1);
									break;
								}
							else if((stockempty[stopSell+2].getCompanyName() != companyToSell) || (stockempty[stopSell+2].getTradingTicker() != companyToSell))
						{
								if((stockempty[stopSell+3].getCompanyName() == companyToSell) || stockempty[stopSell+3].getTradingTicker() == companyToSell)
									{
										cout<<"You have sold your "<<stockempty[stopSell+3].getNumOfAvailableShares()<<" shares of "<<stockempty[stopSell+3].getCompanyName()<<" ("<<stockempty[stopSell+3].getTradingTicker()<<")"<<endl;
										cout<<"Your account has been credited $"<<(stockempty[stopSell+3].getNumOfAvailableShares() * stockempty[stopSell+3].getPricePerShare())<<endl;
										account1.setAccountFunds(account1.getAccountFunds() + (stockempty[stopSell+3].getNumOfAvailableShares() * stockempty[stopSell+3].getPricePerShare()));
										cout<<"New account balance: $"<<account1.getAccountFunds()<<endl;
										stockempty[stopSell+3].setCompanyName("No stock available");
										stockempty[stopSell+3].setTradingTicker("N/A");
										stockempty[stopSell+3].setPricePerShare(0.01);
										stockempty[stopSell+3].setNumOfAvailableShares(1);
										break;
									}
								else if((stockempty[stopSell+3].getCompanyName() != companyToSell) || (stockempty[stopSell+3].getTradingTicker() != companyToSell))
								{
										if((stockempty[stopSell+4].getCompanyName() == companyToSell) || (stockempty[stopSell+4].getTradingTicker() == companyToSell))
											{
												cout<<"You have sold your "<<stockempty[stopSell+4].getNumOfAvailableShares()<<" shares of "<<stockempty[stopSell+4].getCompanyName()<<" ("<<stockempty[stopSell+4].getTradingTicker()<<")"<<endl;
												cout<<"Your account has been credited $"<<(stockempty[stopSell+4].getNumOfAvailableShares() * stockempty[stopSell+4].getPricePerShare())<<endl;
												account1.setAccountFunds(account1.getAccountFunds() + (stockempty[stopSell+4].getNumOfAvailableShares() * stockempty[stopSell+4].getPricePerShare()));
												cout<<"New account balance: $"<<account1.getAccountFunds()<<endl<<endl;
												stockempty[stopSell+4].setCompanyName("No stock available");
												stockempty[stopSell+4].setTradingTicker("N/A");
												stockempty[stopSell+4].setPricePerShare(0.01);
												stockempty[stopSell+4].setNumOfAvailableShares(1);
												break;
											}
										else
										{
											cout<<"\n\nYou do not own a stock by that name or trading ticker. \nHeading back to the main menu.\n\n";
											break;
										}
								}
						}

					}
				}
				break;}
			{case MenuDef11:			//SHOW INVESTMENTS
				cout<<"\nUser entered SHOW INVESTMENTS."<<endl;
				cout<<"These are all the stocks you have bought."<<endl;
				cout<< "Company Name: "<<stockempty[0].getCompanyName()<<"\nTrading Ticker: "<<stockempty[0].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[0].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[0].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[0].getNumOfAvailableShares() * stockempty[0].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[1].getCompanyName()<<"\nTrading Ticker: "<<stockempty[1].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[1].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[1].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[1].getNumOfAvailableShares() * stockempty[1].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[2].getCompanyName()<<"\nTrading Ticker: "<<stockempty[2].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[2].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[2].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[2].getNumOfAvailableShares() * stockempty[2].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[3].getCompanyName()<<"\nTrading Ticker: "<<stockempty[3].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[3].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[3].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[3].getNumOfAvailableShares() * stockempty[3].getPricePerShare())<<endl<<endl;
				cout<< "Company Name: "<<stockempty[4].getCompanyName()<<"\nTrading Ticker: "<<stockempty[4].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[4].getPricePerShare()<<"\nNumber Of Shares Owned: "<<stockempty[4].getNumOfAvailableShares()<<"\nMoney Spent On Stock: $"<<(stockempty[4].getNumOfAvailableShares() * stockempty[4].getPricePerShare())<<endl<<endl;
				cout<<"You have currently spent $";
				double sum = 0;
				for(int i = 0; i < 6; i++){
					if(stockempty[i].getPricePerShare() != 0.01)
					{
						sum = sum + (stockempty[i].getNumOfAvailableShares() * stockempty[i].getPricePerShare());
					}
					else
					{
						continue;
					}
				}
				cout<<sum<<endl;
				cout<<"You have a remaining balance of $"<<account1.getAccountFunds()<<endl<<endl;
				break;}
			{{case MenuDef12:			//SHOW TOTAL PROFIT
				cout<<"\nThese are all the stocks you have bought.\n"<<endl;
				cout<< "Company Name: "<<stockempty[0].getCompanyName()<<"\nTrading Ticker: "<<stockempty[0].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[0].getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stockempty[0].getNumOfAvailableShares()<<endl<<endl;
				cout<< "Company Name: "<<stockempty[1].getCompanyName()<<"\nTrading Ticker: "<<stockempty[1].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[1].getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stockempty[1].getNumOfAvailableShares()<<endl<<endl;
				cout<< "Company Name: "<<stockempty[2].getCompanyName()<<"\nTrading Ticker: "<<stockempty[2].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[2].getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stockempty[2].getNumOfAvailableShares()<<endl<<endl;
				cout<< "Company Name: "<<stockempty[3].getCompanyName()<<"\nTrading Ticker: "<<stockempty[3].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[3].getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stockempty[3].getNumOfAvailableShares()<<endl<<endl;
				cout<< "Company Name: "<<stockempty[4].getCompanyName()<<"\nTrading Ticker: "<<stockempty[4].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[4].getPricePerShare()<<"\nCurrent Amount of Shares Available: "<<stockempty[4].getNumOfAvailableShares()<<endl<<endl;
				cout<< "Enter the company name or trading ticker of the stock you would like to check profit of. ";
				cin>>companyToSell;
				int stopProfit = 0;
				if((stockempty[stopProfit].getCompanyName() == companyToSell) || (stockempty[stopProfit].getTradingTicker() == companyToSell))
					{
						cout<<"\n\nCompany Name : "<<stockempty[stopProfit].getCompanyName()<<"\nTrading Ticker: "<<stockempty[stopProfit].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[stopProfit].getPricePerShare()<<"\nNumber of Shares Owned: "<<stockempty[stopProfit].getNumOfAvailableShares()<<endl<<endl;
						cout<<"Enter the current price of "<<stockempty[stopProfit].getCompanyName()<<" ("<<stockempty[stopProfit].getTradingTicker()<<"): ";
						cin>>currentPrice;
						cout<<"New price of "<<stockempty[stopProfit].getCompanyName() << " (" << stockempty[stopProfit].getTradingTicker() << ")" << " : $ "<<currentPrice<<"\n" 
							<<"Profit to be made based on current price: $" << ((currentPrice * stockempty[stopProfit].getNumOfAvailableShares()) - (stockempty[stopProfit].getPricePerShare() * stockempty[stopProfit].getNumOfAvailableShares()))<<"\n\n";
						break;
					}
					else if((stockempty[stopProfit].getCompanyName() != companyToSell) || (stockempty[stopProfit].getTradingTicker() != companyToSell))
				{
						if((stockempty[stopProfit+1].getCompanyName() == companyToSell) || (stockempty[stopProfit+1].getTradingTicker() == companyToSell));
							{
								cout<<"\n\nCompany Name : "<<stockempty[stopProfit+1].getCompanyName()<<"\nTrading Ticker: "<<stockempty[stopProfit+1].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[stopProfit+1].getPricePerShare()<<"\nNumber of Shares Owned: "<<stockempty[stopProfit+1].getNumOfAvailableShares()<<endl<<endl;
								cout<<"Enter the current price of "<<stockempty[stopProfit+1].getCompanyName()<<" ("<<stockempty[stopProfit+1].getTradingTicker()<<"): ";
								cin>>currentPrice;
								cout<<"New price of "<<stockempty[stopProfit+1].getCompanyName() << " (" << stockempty[stopProfit+1].getTradingTicker() << ")" << ": $ "<<currentPrice<<"\n" 
									<<"Profit to be made based on current price: $" << ((currentPrice * stockempty[stopProfit+1].getNumOfAvailableShares()) - (stockempty[stopProfit+1].getPricePerShare() * stockempty[stopProfit+1].getNumOfAvailableShares()))<<"\n\n";
								break;
							}
						 
							if((stockempty[stopProfit+1].getCompanyName() != companyToSell) || (stockempty[stopProfit+1].getTradingTicker() != companyToSell))
					{
							if((stockempty[stopProfit+2].getCompanyName() == companyToSell) || (stockempty[stopProfit+2].getTradingTicker() == companyToSell))
								{
								cout<<"\n\nCompany Name : "<<stockempty[stopProfit+2].getCompanyName()<<"\nTrading Ticker: "<<stockempty[stopProfit+2].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[stopProfit+2].getPricePerShare()<<"\nNumber of Shares Owned: "<<stockempty[stopProfit+2].getNumOfAvailableShares()<<endl<<endl;
								cout<<"Enter the current price of "<<stockempty[stopProfit+2].getCompanyName()<<" ("<<stockempty[stopProfit+2].getTradingTicker()<<"): ";
								cin>>currentPrice;
								cout<<"New price of "<<stockempty[stopProfit+2].getCompanyName() << " (" << stockempty[stopProfit+2].getTradingTicker() << ")" << ": $ "<<currentPrice<<"\n" 
									<<"Profit to be made based on current price: $" << ((currentPrice * stockempty[stopProfit+2].getNumOfAvailableShares()) - (stockempty[stopProfit+2].getPricePerShare() * stockempty[stopProfit+2].getNumOfAvailableShares()))<<"\n\n";
								break;
								}
							else if((stockempty[stopProfit+2].getCompanyName() != companyToSell) || (stockempty[stopProfit+2].getTradingTicker() != companyToSell))
						{
								if((stockempty[stopProfit+3].getCompanyName() == companyToSell) || (stockempty[stopProfit+3].getTradingTicker() == companyToSell))
									{
										cout<<"\n\nCompany Name : "<<stockempty[stopProfit+3].getCompanyName()<<"\nTrading Ticker: "<<stockempty[stopProfit+3].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[stopProfit+3].getPricePerShare()<<"\nNumber of Shares Owned: "<<stockempty[stopProfit+3].getNumOfAvailableShares()<<endl<<endl;
										cout<<"Enter the current price of "<<stockempty[stopProfit+3].getCompanyName()<<" ("<<stockempty[stopProfit+3].getTradingTicker()<<"): ";
										cin>>currentPrice;
										cout<<"New price of "<<stockempty[stopProfit+3].getCompanyName() << " (" << stockempty[stopProfit+3].getTradingTicker() << ")" << ": $ "<<currentPrice<<"\n" 
											<<"Profit to be made based on current price: $" << ((currentPrice * stockempty[stopProfit+3].getNumOfAvailableShares()) - (stockempty[stopProfit+3].getPricePerShare() * stockempty[stopProfit+3].getNumOfAvailableShares()))<<"\n\n";
										break;
									}
								else if((stockempty[stopProfit+3].getCompanyName() != companyToSell) || (stockempty[stopProfit+3].getTradingTicker() != companyToSell))
								{
										if((stockempty[stopProfit+4].getCompanyName() == companyToSell) || (stockempty[stopProfit+4].getTradingTicker() == companyToSell))
											{
												cout<<"\n\nCompany Name : "<<stockempty[stopProfit+4].getCompanyName()<<"\nTrading Ticker: "<<stockempty[stopProfit+4].getTradingTicker()<<"\nPrice Per Share: $"<<stockempty[stopProfit+4].getPricePerShare()<<"\nNumber of Shares Owned: "<<stockempty[stopProfit+4].getNumOfAvailableShares()<<endl<<endl;
												cout<<"Enter the current price of "<<stockempty[stopProfit+4].getCompanyName()<<" ("<<stockempty[stopProfit+4].getTradingTicker()<<"): ";
												cin>>currentPrice;
												cout<<"New price of "<<stockempty[stopProfit+4].getCompanyName() << " (" << stockempty[stopProfit+4].getTradingTicker() << ")" << ": $ "<<currentPrice<<"\n" 
													<<"Profit to be made based on current price: $" << ((currentPrice * stockempty[stopProfit+4].getNumOfAvailableShares()) - (stockempty[stopProfit+4].getPricePerShare() * stockempty[stopProfit+4].getNumOfAvailableShares()));
												break;
											}
										else
											{
												cout<<"You do not own a stock by that name or trading ticker. \nHeading back to the main menu.";
												break;
											}
								}
						}

					}
				}
						
				break;}}
			{case MenuDef13:
			case MenuDef14: 
			case MenuDef15:			//BACK
				cout<<"\nUser entered BACK."<<endl;
				break;}
			{case MenuDef16:
			case MenuDef17:
			case MenuDef18:			//EXIT
				cout<<"\nUser entered EXIT. Program will be terminated."<<endl;
				return(0);}
		}
	}}
	return 0;
}

void Initialize()
{
  s_mapMenuDirections["SEARCH"] = MenuDef1;
  s_mapMenuDirections["Search"] = MenuDef2;  // possible variations user can enter the keyword search
  s_mapMenuDirections["search"] = MenuDef3;

  s_mapMenuDirections["SEE ALL STOCKS"] = MenuDef4;

  s_mapMenuDirections["BUY"] = MenuDef5;
  s_mapMenuDirections["Buy"] = MenuDef6; // possible variations user can enter the keyword buy
  s_mapMenuDirections["buy"] = MenuDef7;

  s_mapMenuDirections["SELL"] = MenuDef8;
  s_mapMenuDirections["Sell"] = MenuDef9; // possible variations user can enter the keyword sell
  s_mapMenuDirections["sell"] = MenuDef10;
  

  s_mapMenuDirections["SHOW INVESTMENTS"] = MenuDef11; 

  s_mapMenuDirections["SHOW PROFIT"] = MenuDef12;

  s_mapMenuDirections["BACK"] = MenuDef13;
  s_mapMenuDirections["Back"] = MenuDef14; // possible variations user can enter the keyword back
  s_mapMenuDirections["back"] = MenuDef15;
  
  s_mapMenuDirections["EXIT"] = MenuDef16;
  s_mapMenuDirections["Exit"] = MenuDef17; // possible variations user can enter the keyword exit 
  s_mapMenuDirections["exit"] = MenuDef18;

  s_mapCompanyNames["Mishka"] = CTitle1;
  s_mapCompanyNames["MKA"] = CTitle2;
  s_mapCompanyNames["Samsung"] = CTitle3;
  s_mapCompanyNames["SM"] = CTitle4;
  s_mapCompanyNames["Sony"] = CTitle5;
  s_mapCompanyNames["SNY"] = CTitle6;
  s_mapCompanyNames["Nokia"] = CTitle7;
  s_mapCompanyNames["NK"] = CTitle8;
  s_mapCompanyNames["Gatorade"] = CTitle9;
  s_mapCompanyNames["GTR"] = CTitle10;
  s_mapCompanyNames["Apple"] = CTitle11;
  s_mapCompanyNames["APL"] = CTitle12;
  s_mapCompanyNames["Microsoft"] = CTitle13;
  s_mapCompanyNames["MST"] = CTitle14;
  s_mapCompanyNames["Google"] = CTitle15;
  s_mapCompanyNames["GGL"] = CTitle16;
  s_mapCompanyNames["Casio"] = CTitle17;
  s_mapCompanyNames["CAS"] = CTitle18;
  s_mapCompanyNames["Nike"] = CTitle19;
  s_mapCompanyNames["NKE"] = CTitle20;
  
cout<<"Use the list of keywords to perform a specific action at the main menu."<<endl<<endl;
cout<<"SEARCH - search for available stocks"<<endl;
cout<<"BUY - buy a certain amount of shares from a specific stock"<<endl;
cout<<"SELL - sell a certain amount of shares from a specific stock"<<endl;
cout<<"BACK - go back to the main menu"<<endl;
cout<<"EXIT - terminate program"<<endl;
cout<<"SEE ALL STOCKS - see all available stocks"<<endl;
cout<<"SHOW INVESTMENTS - show the account's investments"<<endl;
cout<<"SHOW PROFIT - show total money made or lost from stocks\n"<<endl;

}
