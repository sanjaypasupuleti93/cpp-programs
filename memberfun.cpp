//member function
//defining inside the class
/*
#include <iostream>
using namespace std;
class wallet 
{
    private: int balance =10;
    public: void deposit(int amt)
    {
        balance=balance+amt;
            cout<<"balance:"<<balance<<endl;

        
    }
    int getbalance()
    {
        return balance;
    }
};
int main()
{
    wallet w;
    w.deposit(1000);
    cout << "Final Balance: " << w.getbalance() << endl;
	return 0;
}  */

//defining outside the class
#include <iostream>
using namespace std;

class Wallet
{
private:
    int balance = 1000;

public:
    void withdraw(int amount);
    
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

// Defining member function outside the class
void Wallet::withdraw(int amount)
{
    if (amount <= balance)
    {
        balance = balance - amount;
        cout << "Withdrawal successful" << endl;
    }
    else
    {
        cout << "Insufficient balance" << endl;
    }
}

int main()
{
    Wallet w;

    w.display();

    w.withdraw(300);
    
    
    w.display();

    return 0;
}
