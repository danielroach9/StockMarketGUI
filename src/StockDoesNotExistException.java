/**
 * An exception that is thrown whenever a stock does not exist
 * (selling w/o owning shares, buying a stock that isn't available)
 * @author dxr5716 Daniel Roach
 */
public class StockDoesNotExistException extends Exception {

    public StockDoesNotExistException() {

        System.err.println("Stock does not exist in the system.");
    }
}
