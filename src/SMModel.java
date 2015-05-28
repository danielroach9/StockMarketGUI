import java.util.*;

/**
 * @author dxr5716 Daniel Roach
 */

public class SMModel extends Observable {

    /**
     * the stocks that are available to start
     */
    private HashSet<Stock> publicStocks;

    /**
     * the stocks that the user has bought
     */
    private HashSet<Stock> stocksOwned;

    /**
     * the name of the user's account
     */
    private String accountName;

    /**
     * the id of the user's account
     */
    private int accountID;

    /**
     *
     */
    private double balance;

    public SMModel() {

        Scanner input = new Scanner(System.in);

        System.out.println("Enter account name.");
        System.out.print("You may use a nickname if you like: ");
        this.accountName = input.nextLine();

        System.out.print("\n\n");

        while(accountID <= 0) {

            try {

                System.out.println("Enter account number.");
                System.out.print("You may use an ID number if you like: ");
                this.accountID = input.nextInt();

                if (accountID <= 0)
                    throw new InputMismatchException();

            } catch (InputMismatchException ex) {

                System.out.println("Invalid format or too small.");

            } finally {

                input.next();
            }
        }

        System.out.print("\n\n");

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

                System.out.println("Invalid format or too small.");
            }
        }

        System.out.println("You have a balance of " +
                String.format("%.02f", balance));
    }

    public static void main(String[] args) {

        SMModel model = new SMModel();
    }
}