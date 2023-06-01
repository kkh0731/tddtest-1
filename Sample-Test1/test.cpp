#include "pch.h"
#include "../cra_accout_kkh/cal.cpp"

class AccountFixture : public testing::Test {
public:
	Account account{ 10000, 5 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.Withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, CompoundInterest) {
	account.CompoundInterest();
	EXPECT_EQ(10500, account.getBalance());
	account.CompoundInterest();
	EXPECT_EQ(11025, account.getBalance());
}

TEST_F(AccountFixture, InterestPercentage) {
	account.setInterestPercentage(8);
	EXPECT_EQ(8, account.getInterestPercentage());
}

TEST_F(AccountFixture, CompoundInterestAfterNyears) {
	account.setInterestPercentage(10);
	account.CompoundInterestAfterNyears(3);
	EXPECT_EQ(13310, account.getBalance());
}