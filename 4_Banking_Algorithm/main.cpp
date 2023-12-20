#include <iostream>
using namespace std;

//Design a class that encapsulates a bank account. Include methods to deposit, withdraw, and check the balance.

class Bank{
private:
  int balance=0;
  int choice;
  int money;
public:
  void show_balance(){
    cout<<"Your Current Balance is: $"<<balance;
  }
  void deposit(){
    cout<<"Enter the amount to deposit: $";
    cin>>money;
    balance += int(money);
    cout<<"\nThe amount of $"<<money<<" has been deposited to your account Successfully.";
  }
  void withdraw(){
    cout << "Enter the amount to withdraw: "; 
    cin>>money;
    if(balance < money){
      cout<<"You don't have enough money to withdraw.";
    }
    else{
      balance -= money;
       cout<<"The amount of $"<<money<<" has been withdrawn from your account Successfully.\n";
  
    }
  }
  int enter(){
    cout << "\nEnter 1 to deposit, 2 to withdraw, 3 to check balance, 4 to Exit: ";
    cin >> choice;
   if(int(choice) == 1){
      deposit();
   }
    else if(choice == 2){
      withdraw();
    }
    else if (choice == 3){
      show_balance();
    }
    else{
    	if(choice != 4){
    		cout<<"Invalid try"<<endl;
		}
		else{
	
      cout<<"Thank you for using our service.";}
    }
    return int(choice);
    }
  
};

int main(){
  int user_choice = 0;
  Bank b;
  while(user_choice != 4){
    user_choice = b.enter();
  }
  return 0;
}