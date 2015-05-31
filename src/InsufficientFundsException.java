/**
 * An exception that is thrown whenever the user does not have enough money to
 * buy a stock
 * @author dxr5716 Daniel Roach
 */
public class InsufficientFundsException extends Exception {

    public InsufficientFundsException(String msg) { super(msg); }
}
