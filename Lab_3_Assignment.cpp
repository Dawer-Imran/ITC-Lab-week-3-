//Dawer Imran, L1F26BSCS0281
/*#include<iostream>
using namespace std;
int main()
{
	cout << "Hello World!\n";
	cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026\n";
	cout << "WeLcome!" << endl;
	cout << "2026\n";
	cout << "45\n";
	cout << 45 * 3 << endl;
	cout << 1000 + 500 - 250<<endl;
	cout << "Total Fee: " << 45000 + 9000;

	return 0;
}*/

//------------------Task 2 A----------------------// 
/*
#include<iostream>
using namespace std;//Libraries were 
int main()

{
	cout << "Orientation Day" << endl; //statement terminator was missing
		cout << "Total students: "<<450<<endl; //<< were missing
		cout << "Seats left: " << 500 - 450 << endl;
		cout << " have a nice a day" << endl;// the " " were missing for string
		return 0;

} */
//------------------Task 2 B----------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	cout << "Average: " <<(60 + 70 + 80)/ 3 << endl;//(60+70+80) are calculated first if they are in brackets
	return 0;
}
*/
//------------------Task 3------------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	cout << "10+5*2= " << 10 + 5 * 2 << endl;
	cout << "(10+5)*2= "<< (10 + 5) * 2 << endl;
	cout << "20-5-3= " << 20 - 5 - 3 << endl;
	cout << "100/7= "<<100 / 7 << endl;
	cout << "100%7="<<100 % 7 << endl;
	cout << "2 * 3 + 8 / 4 - 1= "<<2*(3 + 8 / 4 - 1) << endl;
	return 0;
}*/
//-------------------Task 4------------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	int rollNo = 1045, semester = 1, totalFee = 45000, feePaid = 20000;
	float cgpa = 3.5;
	char section = 'B';
	cout << "Roll No: " << rollNo << endl;
	cout << "Semester: " << semester << endl;
	cout << "Sectiion: " << section << endl;
	cout << "CGPA: " << cgpa << endl;
	cout << "Total Fee: " << totalFee << endl;
	cout << "Fee paid: " << feePaid << endl;
	cout << "Semester: " << semester + 1 << endl;
	feePaid = feePaid + 5000;
	cout << "Fee Paid: " << feePaid << endl;
	cout << "Remaing Fee: " << totalFee - feePaid << endl;
	cout << "Percentage Paid: " << feePaid * 100/totalFee << endl;

	return 0;
}*/
//------------------task 5-----------------------//
/*
#include<iostream>
using namespace std;
int main()

{
	int age, creditHours, feePerCreditHour;
	cout << "enter the age of your employe" << endl;//if the employe age is enter as 19.8 or with any decimal point a garbage value is stored in the variable age, since the data type pf teh variable is int andnot float
	cin >> age;
	cout << "enter the fee paid to the employe per hour"<<endl;
	cin >> feePerCreditHour;
	cout << "Enter the amount of credit hours by the employe"<<endl;
	cin >> creditHours;
	cout << "The employe's birth year is " << 2026 - age<<endl;
	cout << "the employe is paid " << (feePerCreditHour * creditHours) << endl;
	cout << "the discounted fee of the employe is " << (feePerCreditHour * creditHours) - 2000<<endl;
	//the output remains the same whether we use space between the three values tab or press enter after every value, the only difference is when we use tab or space the console does not ask us for the next two values it instead just displays the calculated a fee, discounted fee and birth year
	return 0;
}*/

//------------------task 6-----------------------//
/* #include<iostream>
 using namespace std;
 int main()
 {
	 int price = 0, quantity = 0;
	 float tax=0, grandtotal = 0, total = 0;
	 cout << "Enter product price" << endl;
	 cin >> price;
	 cout << "Enter Quntity of products" << endl;
	 cin >> quantity;
	 total = quantity * price;
	 tax = total * 5/100;
	 grandtotal = total +tax;
		 cout<<"Your total with out tax is "<<total <<"\nTax = "<<tax<< "\nyour total with tax is " << grandtotal;
	
	return 0;
 }*/

//------------------task 7-----------------------//
  /*include<iostream>
  using namespace std;
  int main()
  {
	  int farenhiet = 0, celsius = 0;
	  cout << "enter the temprature in celsius" << endl;
	  cin >> celsius;
	  farenhiet = celsius * 9 / 5 + 32;
	  cout << "the temprature in Farenhiet is = " << farenhiet << endl;
	  //the program when given an input of 37 give a result of 98 while the calculater give 98.6 this is beacause the variable farenhiet has data type int which can not hold decimal point
  return 0;
  }
  */
//------------------task 8-----------------------//
   /*#include<iostream>
   using namespace std;
   int main()
   {
	   int age = 0;
	   cout << "enter your age" << endl;
	   cin >> age;
	   if (age < 12)
		   cout << "you get a half ticket";
	   else
		   cout << "you get a full ticket";

   return 0;
   }*/