import java.util.*;

/**
 * @author dxr5716 Daniel Roach
 */

public class SMModel extends Observable {

    /**
     * the stocks that are available to start
     */
    private static HashMap<String, Stock> stocks;

    /**
     * the stocks that the user has bought
     */
    private HashMap<String, Stock> myStocks;

    /**
     * the name of the user's account
     */
    private String accountName;

    /**
     * the id of the user's account
     */
    private int accountID;

    /**
     * the user's balance
     */
    private double balance;

    public SMModel() {

        Scanner input = new Scanner(System.in);

        while(accountName == null || accountName.length() == 0) {

            try {

                System.out.println("Enter account name.");
                System.out.print("You may use a nickname if you like: ");
                this.accountName = input.nextLine();

                if(accountName.isEmpty())
                    throw new Exception();

            } catch(Exception ex) {

                System.out.println("Nothing was entered in.\n");
            }
        }

        System.out.print("\n");

        while(accountID <= 0) {

            try {

                System.out.println("Enter account number.");
                String id = input.nextLine();

                if(id.isEmpty())
                    throw new InputMismatchException();

                else {

                    int idNum = Integer.parseInt(id);

                    if(idNum <= 0)
                        throw new InputMismatchException();
                    else
                        this.accountID = idNum;
                }

            } catch (Exception ex) {

                System.out.println("Invalid format.\n");

            } finally {

                input.nextLine();
            }
        }

        System.out.print("\n");

        while(balance <= 0) {

            try {

                System.out.print("Enter starting balance or 'R' for random: ");
                String bal = input.nextLine();

                // User wants a random balance
                if(bal.contentEquals("R") || bal.contentEquals("r")) {

                    double min = 10000.00;
                    double max = 50000.00;
                    this.balance = (Math.random() * (max - min) + min);
                }

                else {

                    this.balance = Double.parseDouble(bal);

                    if(balance <= 0)
                        throw new InputMismatchException();
                }

            } catch (Exception ex) {

                System.out.println("Invalid format or too small.\n");
            }
        }

        System.out.println("You have a balance of " +
                String.format("%.02f", balance));

        myStocks = new HashMap<String, Stock>();
    }

    /**
     * Initializes 10 default stocks to be used in the system
     */
    private static void installStocks() {

        stocks = new HashMap<String, Stock>();
        stocks.put("Mishka", new Stock("Mishka", "MKA", 35.00, 1000));
        stocks.put("Samsung", new Stock("Samsung", "SMSG", 50.00, 45));
        stocks.put("Sony", new Stock("Sony", "SNE", 65.00, 100000));
        stocks.put("Nokia", new Stock("Nokia", "NOK", 23.00, 5700));
        stocks.put("Gatorade", new Stock("Gatorade", "GTR", 15.00, 3000));
        stocks.put("Apple", new Stock("Apple", "AAPL", 40.00, 7000));
        stocks.put("Microsoft", new Stock("Microsoft", "MSFT", 72.00, 8000));
        stocks.put("Google", new Stock("Google", "GOOG", 46.00, 3000));
        stocks.put("Casio", new Stock("Casio", "CSO", 34.00, 1000));
        stocks.put("Nike", new Stock("Nike", "NKE", 35.00, 4000));
    }

    /**
     * Buying a stock
     * @param name the name of the stock the user would like to buy
     */
    public void buyStock(String name) {

        if(!stocks.containsKey(name))
            throw new StockDoesNotExistException("No company in system with " +
                    "that name.");
    }

    /**
     * Selling a stock
     * @param name the name of the stock the user would like to sell
     */
    public void sellStock(String name) {

        if(!myStocks.containsKey(name))
            throw new UnownedStockException("No shares of " + name + " owned");
    }

    /**
     * Checking to see if a profit would be made if selling an owned stock
     * @param name
     */
    public void showProfit(String name) {

        if(!myStocks.containsKey(name))
            throw new UnownedStockException("No shares of " + name + " owned");
    }

    public static void main(String[] args) {

        SMModel model = new SMModel();
        Scanner input = new Scanner(System.in);
        String nextStep = "";

        while(nextStep != "EXIT") {}
        installStocks();
    }

}