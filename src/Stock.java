/**
 * A class representing a stock to be bought
 * @author dxr5716 Daniel Roach
 */

public class Stock {

    /**
     * the price of a share of this stock
     */
    private final Double price;

    /**
     * the name of the company who is selling shares
     */
    private final String companyName;

    /**
     * the trading ticker of this stock (usually 3-4 letters)
     */
    private final String ticker;

    /**
     * the number of shares the customer made available to be bought/sold
     */
    private final int maxShares;

    /**
     * the number of shares left to buy
     */
    private int sharesRemaining;

    /**
     * Creates a Stock object
     * @param cName the company's name
     * @param cTicker the company's trading ticker
     * @param price the price per share
     * @param max the maximum number of shares that the company is offering
     *            to the public
     */
    public Stock(String cName, String cTicker, double price, int max) {

        this.companyName = cName;
        this.ticker = cTicker;
        this.price = price;
        this.maxShares = max;
        this.sharesRemaining = max;
    }

    /**
     * Returns the name of the company
     * @return the company's name
     */
    public String getCompanyName() { return companyName; }

    /**
     * Returns the trading ticker of the company
     * @return the company's trading ticker
     */
    public String getTradingTicker() { return ticker; }

    /**
     * Returns the maximum number of the shares the company is allowing
     * in the stock market
     * @return the number of shares made public
     */
    public int getMaxShares() { return maxShares; }

    /**
     * Returns the number of shares the company still has left
     * @return the number of shares that can still be bought by the company
     */
    public int getSharesRemaining() { return sharesRemaining; }

    // Might want to change the number of public shares
    /*public int setMaxShares(int newMax) { this.maxShares = newMax; }*/

}