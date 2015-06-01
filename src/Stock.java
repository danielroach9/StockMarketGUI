/**
 * A class representing stock bought from a company
 * @author dxr5716 Daniel Roach
 */

public class Stock {

    /**
     * the price of a share of this stock
     */
    private final Company company;

    private final double buyingPrice;

    private final int numShares;

    /**
     * Creates a Stock object
     * @param purchasedFrom the Company stock was purchased from
     * @param price the price at which the shares were bought
     * @param shares the number of shares bought
     */
    public Stock(Company purchasedFrom, double price, int shares) {

        this.company = purchasedFrom;
        this.buyingPrice = price;
        this.numShares = shares;
    }

    /**
     *
     */
    public void addShares() {}

    /**
     *
     */
    public void removesShares() {}

    /**
     *
     * @param obj
     * @return
     */
    public boolean equals(Object obj) {
        return super.equals(obj);
    }

    /**
     *
     * @return
     */
    public int hashCode() {
        return super.hashCode();
    }

    /**
     *
     * @return
     */
    public String toString() {
        return super.toString();
    }

    public static void main(String[] args) {

        System.out.println("Hi");
    }
}