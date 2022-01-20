#include <bits/stdc++.h>

#include <fstream>

using namespace std;

int main()

{

   cout << "WELCOME TO THE ALGODERS BANKING SERVICES" << endl;

   cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;

   

   cout << endl << "Please Swipe your card! 🏧" << endl;

   cout << "(enter s to swipe)" << endl;

   cout << "-> ";

//---------SWIPING----------

   while(1){

     char c;

     cin >> c;

     if(c=='s'){ break; }

     else{ cout << endl << "Invalid Swipe! Please Swipe Your Card Again! 🏧" << endl << "(press s for swipe)" << endl << "-> "; }

   }

//--------CHECKING ACC--------

   string status;

   ifstream stat("ATM.txt");

   stat >> status;

   if(status=="LOCKED"){

     cout << endl << "YOUR SYSTEM IS LOCKED! UNABLE TO LOGIN BY YOUR CREDENTIALS" << endl;

     cout << endl << "CONTACT Kavya Gupta to open your SYSTEM AGAIN from the MAIN SERVER" << endl;

     cout << endl << "OR....." << endl << "Just Write - 'Please_Pardon_Me_Sorry'" << endl << "😂" << endl;

     cout << "\nChoose (1 or 2):\n1) I will manually fix this by myself or with the help of Kavya\n2) Write that line" << endl;

     int choice;

     cout << "-> ";

     cin >> choice;

     if(choice == 1){ return 0; }

     else{ while(1){

             cout << "Enter The line -> ";

             string s;
             cin.ignore();
             cin >> s;

             if(s=="Please_Pardon_Me_Sorry"){

               cout << endl << "SYSTEM REOPENED SUCCESSFULLY!!" << endl;

               break;

             }

             cout << "Write Properly!!" << endl;

          }

          ofstream open("ATM.txt");

          open << "OPEN";

     }

   }

//------ENTERING PIN------  

   cout << endl << "Enter Your 4 Digit Pin" << endl;

   int ct=0;

   

   while(1){

     int pin;

     cin >> pin;

     if(pin == 2022){ break; }

     ct++;

     if(ct>3){

       cout << endl << "You Entered WRONG PIN more than 3 times!" << endl << "SYSTEM LOCKED !!" << endl;

       cout << endl << "(Contact KAVYA GUPTA if you are not able to open that by yourself! 🤣🤣)" << endl;

       cout << "(You can try running the code again , But now the SYSTEM is Literally LOCKED !! Give it a TRY yourself)" << endl;

       

       ofstream lock("ATM.txt");

       lock << "LOCKED";

       return 0;

     }

     else if(ct==3){ cout << endl << "WRONG PIN!! LAST ATTEMPT" << endl; }

     else{

       cout << endl << "You Entered WRONG PIN" << endl << 4-ct << "attempt(s) left" << endl << endl << "WARNING - If you Enter WRONG PIN more than 3 TIMES , Your SYSTEM will get LOCKED automatically!!" << endl << "°°°°°°°" << endl;

     }

     cout << "Enter Your 4 Digit Pin" << endl;

   }

   cout << endl << "Enter Your Name: ";

   string name;

   cin >> name;

//---------------------

   cout << endl << "LOGIN SUCCESSFUL !!" << endl;

   cout << "Welcome " << name << "!" << endl;

   cout << endl << "So,How Can We Assist You Today!" << endl;

//---------------------

int bal=1e4;

while(1){

   cout << "1) WITHDRAW MONEY" << endl;

   cout << "2) DEPOSIT MONEY" << endl;

   cout << "3) CHECK BALANCE" << endl;

   cout << "4) EXIT ATM SERVICES" << endl;

   int choice,rand1=(rand()%100),captcha;

   cin >> choice;

   srand(time(NULL));

   

   if(choice==4){ break; }

   else if(choice==3){

     

     cout << endl << "ENTER THE CAPTCHA VALUE: " << rand1 << endl;

     cout << "-> ";

     cin >> captcha;

     if(captcha!=rand1){ continue; }

     

     cout << endl << "YOUR BALANCE IS: " << bal << "Rs" << endl;

   }

   else if(choice==2){

     cout << endl << "ENTER THE AMOUNT YOU WANT TO DEPOSIT: (ALLOWED NOTES-100,200,500,2000 Rs)" << endl;

     cout << "-> ";

     int num;

     cin >> num;

     

     if(num%100==0){

     cout << endl << "ENTER THE CAPTCHA VALUE: " << rand1 << endl;

     cout << "-> ";

     cin >> captcha;

     if(captcha!=rand1){ continue; }

     

     bal += num;

     cout << endl << "AMOUNT SUCCESSFULLY DEPOSITED!!" << endl << "YOUR BALANCE IS: " << bal << "Rs" << endl;

     }

     else{

       cout << endl << "INVALID DEPOSIT AMOUNT!" << endl;

       cout << "TRY AGAIN!" << endl;

       continue;

     }

   }

   else{

     cout << endl << "ENTER THE AMOUNT YOU WANT TO WITHDRAW" << endl;

     cout << "(Should be a Multiple of 100)" << endl;

     cout << "-> " << endl;

     int num;

     cin >> num;

     

     if(num%100==0){

       cout << endl << "ENTER THE CAPTCHA VALUE: " << rand1 << endl;

       cout << "-> ";

       cin >> captcha;

       if(captcha!=rand1){ continue; }

       

       bal -= num;

     cout << endl << "YOU CAN NOW COLLECT YOUR CASH!!" << endl << "YOUR BALANCE IS: " << bal << "Rs" << endl;

     }

     else{

       cout << endl << "INVALID DEPOSIT AMOUNT!" << endl;

       cout << "TRY AGAIN!" << endl;

       continue;

     }

   }

   cout << endl << "TRANSACTION COMPLETED!!" << endl;

   cout << endl << "Any Other Help We Can Do" << endl;

}

//---------------------

   cout << endl << "THANKS FOR USING OUR SERVICES!" << endl;

   cout << "WE HOPE TO SERVE YOU AGAIN!" << endl;

   return 0;

}
