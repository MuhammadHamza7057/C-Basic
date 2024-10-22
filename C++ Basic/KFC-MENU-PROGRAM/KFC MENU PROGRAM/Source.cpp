#include<iostream>
#include<iomanip>
using namespace std;

void Fast_Food(string list);
void Cold_Drinks(string list);
void Fruits(string list);



int main()
{
	int opt;
	do
	{
		
		cout << setw(60) << "Welcome to KFC Resturant \n";
		cout << setw(65) << "Our Resturant have 3 types Foods !\n";
		cout << setw(2) << "Press 1 for Fast Food \n";
		cout << setw(2) << "Press 2 for Cold Drinks  \n";
		cout << setw(2) << "Press 3 Fruits  \n";
		cout << "Press any key to continue \n";
		
		cout <<  setw(50)  <<"Enter Your Choice : ";
		cin >> opt;

		if (opt == 1)
		{
			string list;
			 Fast_Food(list);
		}
		if (opt == 2)
		{
			string list;
			Cold_Drinks(list);
		}
		if (opt == 3)
		{
			string list;
			Fruits(list);
		}

	} 
	while (opt >= 4);

}

void Fast_Food(string list)
{

	         int choice;
	do
	{


		cout << setw(60) << "We have three types of Fast Food \n";
		cout << "Press 1 for Burger \n";
		cout << "Press 2 for Zingar \n";
		cout <<  "Press 3 for Regular Fries \n";
		cout << setw(50) << " Select Your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			int B_price = 250;
			string order;
			cout << "You Select Burger !\n";
			cout << "Burger Price is : " << B_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
		}

		if (choice == 2)
		{
			int Z_price = 450;
			string order;
			cout << "You Select Zinger !\n";
			cout <<  "Zinger Price is : " << Z_price << endl;
			cout  << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
		}

		if (choice == 3)
		{
			int F_price = 170;
			string order;
			cout << "You Select Regular Fries !\n";
			cout << "Regular Fries Price is : " << F_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
			
		}
		if (choice >= 4)
		{
			cout << "Not Avaliable this choice please select correct choice! \n";
		}
	} 
	   while (choice >= 3);
	


}




void Cold_Drinks(string list)
{

	int choice;
	do
	{


		cout << setw(60) << "We have three types of cold drinks \n";
		cout << "Press 1 for pepsi \n";
		cout << "Press 2 for Dew \n";
		cout << "Press 3 for sting \n";
		cout << setw(50) << " Select Your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			int pepsi_price = 250;
			string order;
			cout << "You Select 2.5 l Pepsi !\n";
			cout << " Pepsi Price is : " << pepsi_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
		}

		if (choice == 2)
		{
			int Dew_price = 250;
			string order;
			cout << "You Select 2.5 l Dew !\n";
			cout << "Dew Price is : " << Dew_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
		}

		if (choice == 3)
		{
			int sting_price = 120;
			string order;
			cout << "You Select Sting !\n";
			cout << "Sting Price is : " << sting_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}

		}
		if (choice >= 4)
		{
			cout << "Not Avaliable this choice please select correct choice! \n";
		}
	} while (choice >= 3);



}





void Fruits(string list)
{

	int choice;
	do
	{


		cout << setw(60) << "We have three types of Fruits \n";
		cout << "Press 1 for Apple \n";
		cout << "Press 2 for Bananas \n";
		cout << "Press 3 for Orange \n";
		cout << setw(50) << " Select Your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			int Apple_price = 150;
			string order;
			cout << "You Select 1Kg Apple !\n";
			cout << " 1Kg Apple price is : " << Apple_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
		}

		if (choice == 2)
		{
			int Bananas_price = 180;
			string order;
			cout << "You Select 1 Dozen Bananas !\n";
			cout << "1 Dozen Bananas price is : " << Bananas_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}
		}

		if (choice == 3)
		{
			int orange_price = 240;
			string order;
			cout << "You Select 1 Dozen orange !\n";
			cout << " 1 Dozen orange price is : " << orange_price << endl;
			cout << "Are you want to order ?  (yes/no) : ";
			cin >> order;

			if (order == "Yes" || order == "yes")
			{
				cout << "Order Sucessfully work in progress !\n";
				cout << "They will arrive Soon wait.... \n";
			}
			if (order == "No" || order == "no")
			{
				cout << "Sorry You cannot Order anythings !\n";
			}

		}
		if (choice >= 4)
		{
			cout << "Not Avaliable this choice please select correct choice! \n";
		}
	} while (choice >= 3);


}