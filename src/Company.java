/**
 * A class representing a company with shares to sell in a stock market
 * @author dxr5716 Daniel Roach
 */

public class Company {

    /**
     * the name of the company who is selling shares
     */
    private final String name;

    /**
     * the trading ticker of this stock (usually 3-4 letters)
     */
    private final String ticker;

    /**
     * the number of shares left to buy
     */
    private int shares;

    /**
     * the price of a share of this stock
     */
    private double sharePrice;

    /**
     * Creates a Company object
     * @param cName the company's name
     * @param cTicker the company's trading ticker
     * @param price the price per share
     * @param shares the number of shares the company is offering to the public
     */
    public Company(String cName, String cTicker, double price, int shares) {

        this.name = cName;
        this.ticker = cTicker;
        this.sharePrice = price;
        this.shares = shares;
    }

    /**
     * Returns the name of the company
     * @return the company's name
     */
    public String getCompanyName() { return name; }

    /**
     * Returns the trading ticker of the company
     * @return the company's trading ticker
     */
    public String getTradingTicker() { return ticker; }

    /**
     * Incrementing the number of shares the company has
     * @param sharesToAdd the number of shares to add
     */
    public void addShares(int sharesToAdd) { this.shares += sharesToAdd; }

    /**
     * Decrementing the number of shares the company has (only if the company
     * has enough shares to be removed
     * @param sharesLost the number of shares being removed (sold)
     */
    public void removeShares(int sharesLost) {

        if(this.shares >= sharesLost)
            this.shares -= sharesLost;
    }

    /**
     * Returns the price of 1 share from this company
     * @return the price per share
     */
    public double getSharePrice() { return this.sharePrice; }

    /**
     * Changes the price of 1 share from this company to the specified amount
     * @param price the new price per share
     */
    public void setSharePrice(double price) { this.sharePrice = price; }

    /**
     *
     * @return
     */
    public String toString() {

        String info = "";

        info += "Company: " + name + " (" + ticker + ")" + "\n";
        info += "Shares Available: " + shares + "\n";
        info += "Share Price: $" + String.format("%.02f", sharePrice) + "\n";

        return info;
    }

    /**
     * equals() method to check if two objects are the same
     * Two Company objects are the same if they have the same name and ticker
     * @param obj the object we are comparing this to
     * @return true iff obj is company and has same name and trading ticker;
     *         false otherwise
     */
    public boolean equals(Object obj) {

        if(!(obj instanceof Company))
            return false;

        Company c = (Company) obj;

        return this.ticker.equals(c.ticker) && this.name.equals(c.name);
    }

    /**
     * hashCode() method to provide equality checks when storing in collections
     * that ignore duplicates
     * @return the hashcode of the object
     */
    public int hashCode() { return name.hashCode() + ticker.hashCode(); }
}
