#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
  // add constructors here -- see description in assignment

  double getBalance() {
    // add code here -- a basic getter, return the balance of the account

    return 0;			/* replace this */
  }

  void setBalance(double balance) {
    // add code here -- a basic setter, return nothing.
  }
  
  double deposit(double depositAmount) {
    // your code should check to ensure that depositAmount is positive (e.g.
    // deposit 100 dollars). It should only update the account balance if it is
    // positive. Returns balance after any changes

    // add code here

    return 0;			/* replace this */
  }

  double withdraw(double withdrawalAmount) {
    // This method should ensure that the withdrawalAmount is positive (e.g.
    // withdraw 100 dollars). It should only update the account balance if the
    // account can cover the withdrawal. Returns balance after any changes

    // add code here

    return 0;			/* replace this */
  }

  double interest(double percent) {
    // This method should accept percent (positive or negative). (e.g. to grow
    // the account by 10% you would call interest(0.1). To decay the account by
    // 20% you would call interest(-0.2)) Returns balance after any changes

    // add code here

    return 0;			/* replace this */
  }

  std::string getName() const {
    // add code here
    
    return "";			/* replace this */
  }

  void setName(std::string newName) {
    // Your code should ensure that the name of the account has a max of 20
    // characters. If the newName passed to this function is longer than 20, you
    // should set the account name to be the first 20 characters of the
    // argument.

    // add code here
  }

  // write the transferTo method here -- see assignment
  bool transferTo(double amount, Account& otherAccount) {
    // add code here

    return false; 		/* replace this */
  }

private:
  // add more code here -- see description in assignment
};

#endif
