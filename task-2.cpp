#include <iostream>

using namespace std;

class Mobile{
private:
    string mobile_owner_name = "Not Set";
    string mobile_number = "Not Set";
    double mobile_balance = 0;
    string mobile_os_name = "Not Set";
    bool lock_status = true;


    void setMobileBalance(double amount){ mobile_balance = amount; }

public:
    // Constructors and Destructor
    Mobile(){}

    Mobile(string mobile_owner_name, string mobile_number, double mobile_balance, string mobile_os_name, bool lock_status){
        this->mobile_owner_name = mobile_owner_name;
        this->mobile_number = mobile_number;
        this->mobile_balance = mobile_balance;
        this->mobile_os_name = mobile_os_name;
        this->lock_status = lock_status;
    }

    ~Mobile(){}

    // Getter and Setter Methods
    void setMobileOwner(string mobile_owner_name){ this->mobile_owner_name = mobile_owner_name; }
    void setMobileNumber(string mobile_number) { this->mobile_number = mobile_number; }
    void setMobileOS(string mobile_os_name){ this->mobile_os_name = mobile_os_name; }


    string getMobileOwner() { return mobile_owner_name; }
    string getMobileNumber() { return mobile_number; }
    string getMobileOS() { return mobile_os_name; }
    double getMobileBalance() { return mobile_balance; }
    bool getLockStatus() { return lock_status; }


    // Methods
    void toggleLock(){
        lock_status = !lock_status;
        cout << mobile_owner_name << "'s "<< mobile_os_name <<" is " << (lock_status ? "locked" : "unlocked") << " now." << endl;
    }


    void recharge(double amount){
        if(lock_status==true){
            cout << "Before recharge, phone must be unlocked." << endl;
        }else{
            if(amount < 0) cout << "Recharge amount cannot be negative." << endl;
            else{
                setMobileBalance(getMobileBalance() + amount);
                cout << "Account refilled TK. " << amount << " to number : " << getMobileNumber() << ". Balance: " << getMobileBalance() << endl;
            }
        }
    }

    void callSomeone(int timeDuration){
        if(lock_status==true){
            cout << "Before calling someone, phone must be unlocked." << endl;
        }else{
            double total_cost = (double) timeDuration * 0.5;
            if((mobile_balance - total_cost) < 0) cout << "You do not have suffecient balance for this call." << endl;
            else{
                setMobileBalance(getMobileBalance() - total_cost);
                cout << "Last call duration " << timeDuration << " min, charge Tk. " << total_cost << ". Balance: " << getMobileBalance() << endl;
            }
        }
    }

    void showInfo(){
        cout << endl;
        cout << "Mobile Owner Name : " << getMobileOwner() << endl;
        cout << "Mobile Number : " << getMobileNumber() << endl;
        cout << "Mobile Balance : " << getMobileBalance() << endl;
        cout << "Mobile OS Name : " << getMobileOS() << endl;
        cout << "Lock Status : " << (getLockStatus() ? "Locked" : "Unlocked") << endl << endl;
    }




};


int main(){

    Mobile m1;
    m1.setMobileOwner("Jubayer");
    m1.setMobileNumber("+8801717391684");
    m1.setMobileOS("Symbrian");

    m1.recharge(500);
    m1.toggleLock();
    m1.recharge(500);

    m1.showInfo();

    Mobile m2("Mafia", "+8801935740362", 20, "IOS", false);
    m2.showInfo();
    m2.callSomeone(5);
    m2.recharge(10);
    m2.toggleLock();
    m2.callSomeone(10);
    m2.toggleLock();
    m2.callSomeone(100);
    m2.callSomeone(25);

    m2.showInfo();


    return 0;
}

