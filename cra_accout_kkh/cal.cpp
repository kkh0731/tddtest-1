class Account {
public:
	explicit Account(int balance, int interestPercentage)
		: balance(balance), interestPercentage(interestPercentage) {
	}

	int getBalance() {
		return balance;
	}

	void deposit(int money) {
		balance += money;
	}

	void Withdraw(int money) {
		balance -= money;
	}

	void CompoundInterest() {
		balance *= (100 + interestPercentage);
		balance /= 100;
	}

	void setInterestPercentage(int interestPercent) {
		interestPercentage = interestPercent;
	}

	int getInterestPercentage() {
		return interestPercentage;
	}

	void CompoundInterestAfterNyears(int years) {
		for (int i = 0; i < years; i++) {
			balance *= (100 + interestPercentage);
			balance /= 100;
		}
	}

private:
	int balance;
	int interestPercentage;
};
