# include <iostream>
# include <cstdlib>
using namespace std;

int choice;

// You use a large screen of infos ,That's why I think you should introduce a menu function to call It after every operation .
void menu();

int main()
{
	// It is a lot better to declare your variables as a local ones ,because when your programs grow you'll find some troubles

	double pounds = 0,// Initialisatin is good
		   kilograms = 0,
		   feet = 0,
		   metres = 0,
		   centimetres = 0,
		   inches = 0,
		   kilometres = 0,
		   miles = 0,
		   yards = 0,
		   BDT =0,//Bangladesi Taka
		   EUR = 0,//Euro Austria
		   USD = 0,//Us Dollar
		   GBP = 0,//British Pound
		   CNY = 0,//Chinese Yuan
		   Celsius = 0,
		   Fahrenheit = 0,
           Kelvin = 0;

	// We use do while if we want to excute at least once the stuff inside it,this is why your program goes right but one time,
        // I think just while could do the job ,also you can keep your do while if you want to
	// The problem is in the condutions of the do while loop you just say if the choice != 1 exit the loop ,
        // for exemple when I choose the choice 1 the program will do the conversion pounds to kg ,the choice still 1 ,
        // the loop says I will continue if the choice != 1,You know the rest..
	while ( choice>=0&&choice<=30)
	{
		menu();
		cin >> choice;

		switch (choice)
		{
			case 1:
				cout << "\nEnter the number of pounds: ";
				cin >> pounds;
				cout << "\n" << pounds << " lbs is " << pounds * 0.45 << " kg." << endl;
			break;
			case 2:
				cout << "\nEnter the number of kilos: ";
				cin >> kilograms;
				cout << "\n" << kilograms << " kg is " << kilograms * 2.2 << " pounds." << endl;
			break;
			case 3:
				cout << "\nEnter the number of feet: ";
				cin >> feet;
				cout << "\n" << feet << " ft is " << feet * 0.3 << " m." << endl;
			break;
			case 4:
				cout << "\nEnter the number of meters: ";
				cin >> metres;
				cout << "\n" << metres << " m is " << metres * 3.2 << " ft." << endl;
			break;
			case 5:
				cout << "\nEnter the number of inches: ";
				cin >> inches;
				cout << "\n" << inches << " inches is " << inches * 2.55 << " ft." << endl;
			break;
			case 6:
				cout << "\nEnter the number of centimetres: ";
				cin >> centimetres;
				cout << "\n" << centimetres << " cm is " << centimetres * 0.4 << " inches." << endl;
			break;
			case 7:
				cout << "\nEnter the number of miles: ";
				cin >> miles;
				cout << "\n" << miles << " miles is " << miles * 1.6 << " km." << endl;
			break;
			case 8:
				cout << "\nEnter the number of kilometers: ";
				cin >> kilometres;
				cout << "\n" << kilometres << " km is " << kilometres * 0.62 << " miles." << endl;
			break;
			case 9:
				cout << "\nEnter the number of yards: ";
				cin >> yards;
				cout << "\n" << yards << " yards is " << yards * 0.91 << " meters." << endl;
			break;
			case 10:
				cout << "\nEnter the number of meters: ";
				cin >> metres;
				cout << "\n" << metres << " m is " << metres * 1.1 << " yards." << endl;
			break;
			case 11:
				cout << "\nEnter the amount of BDT:";
				cin >>BDT;
				cout << "\n" << BDT << "BDT is\t" << BDT*0.0123985 <<"USD." <<endl;
			break;
			case 12:
			     cout << "\nEnter the amount of USD.";
				 cin >>USD;
				 cout << "\n" << USD << "USD is\t" << USD*80.6550 << "BDT."<<endl;
			break;	 	
			case 13:
				cout << "\nEnter the amount of EUR: ";
				cin >> EUR;
				cout << "\n" << EUR << " EUR is\t " << EUR * 1.26 << "USD. " << endl;
			break;
			case 14:
				cout << "\nEnter the amount of USD: ";
				cin >> USD;
				cout << "\n" << USD << " USD is\t " << USD * 0.79 << " EUR." << endl;
			break;
			case 15:
				cout << "\nEnter the amount of GBP: ";
				cin >> GBP;
				cout << "\n" << GBP << " GBP is\t " << GBP * 1.59 << " USD." << endl;
			break;
			case 16:
				cout << "\nEnter the amount of USD: ";
				cin >> USD;
				cout << "\n" << USD << " USD is\t " << USD * 0.63 << " GBP." << endl;
			break;
			case 17:
				cout << "\nEnter the amount of EUR: ";
				cin >> EUR;
				cout << "\n" << EUR << " EUR is\t " << EUR * 0.79 << " GBP." << endl;
			break;
			case 18:
				cout << "\nEnter the amount of GBP: ";
				cin >> GBP;
				cout << "\n" << GBP << " GBP is\t " << GBP * 1.26 << " EUR." << endl;
			break;
			case 19:
				cout << "\nEnter the amount of CNY: ";
				cin >> CNY;
				cout << "\n" << CNY << " CNY is\t " << CNY * 0.125 << " EUR." << endl;
			break;
			case 20:
				cout << "\nEnter the amount of EUR: ";
				cin >> EUR;
				cout << "\n" << EUR << " EUR is\t " << EUR * 7.99 << " CNY." << endl;
			break;
			case 21:
				cout << "\nEnter the amount of CNY: ";
				cin >> CNY;
				cout << "\n" << CNY << " CNY is\t " << CNY * 0.16 << " USD." << endl;
			break;
			case 22:
				cout << "\nEnter the amount of USD: ";
				cin >> USD;
				cout << "\n" << USD << " USD is\t " << USD * 6.35 << " CNY." << endl;
			break;
			case 23:
				cout <<"\nEnter a number in Fahrenheit to Celsius:";
				cin >> Fahrenheit;
                cout <<"\n" << Fahrenheit << " degree Fahrenheit is " << (Fahrenheit-32)/1.8 << " degree Celsius." << endl;
            break;
            case 24:
            	cout <<"\nEnter a number in Celsius to Fahrenheit:";
            	cin >> Celsius;
            	cout << "\n" <<Celsius << " degree Celsius is " << Celsius*1.8+32 << " degree Fahrenheit." << endl;
            break;
            case 25:
            	cout <<"\nEnter a number in Celsius to Kelvin:";
            	cin >> Celsius;
            	cout <<"\n" << Celsius << " degree Celsius is " << Celsius+273.15<< " Kelvin." << endl;
            break;
            case 26:
            	cout <<"\nEnter a number in Fahrenheit to Kelvin:";
            	cin >> Fahrenheit;
                cout << "\n" << Fahrenheit << " degree Fahrenheit is " << ((Fahrenheit-32)/1.8)+273.15<< " Kelvin." << endl;
            break;
            case 27:
                cout <<"\nEnter a number in Kelvin to Celsius:";
            	cin >> Kelvin;
                cout << "\n" << Kelvin << " Kelvin is " << Kelvin-273.15 << " degree Celsius." << endl;
			break;
			case 28:
				cout <<"\nEnter a number in  Kelvin to Fahrenheit:";
            	cin >> Kelvin;
                cout << "\n" << Kelvin << " Kelvin is " << (Kelvin - 273.15)* 1.8000+ 32.00<< " degree Fahrenheit." <<endl;
			case 29:
				choice = 30;// Or any number(>30 or <0)
			break;
			default:
				cout << "\nPlease enter a valid choice.\n " << endl;
				choice = 0;//If we dont do that the program will end if we enter for exp 33
			}system("pause");system("cls");// To clear the screen for the next operation
		}
		// If you want to do one conversion operation ,well then you can keep what I just delete.
		// although,your program seems perfectly fine and nice too
		cout << "End of program " << endl;

	system("pause");
	return 0;
	}

void menu()
{
    cout << "\n\t\t*******-Welcome To  Converter:-2017-*******\n\n\n"<<endl;
	cout << "\t***-Weight-***\n" << endl;
	cout << "\tPounds      to  Kilograms:   type 1. " << endl;
	cout << "\tKilograms   to Pounds:      type 2. " << endl;
	cout << "\n\t***-Distance-***\n" << endl;
	cout << "\tFeet        to Metres:      type 3. " << endl;
	cout << "\tMetres      to Feet:        type 4. " << endl;
	cout << "\tInches      to Centimetres: type 5. " << endl;
	cout << "\tCentimetres to Inches:      type 6. " << endl;
	cout << "\tMiles       to Kilometres:  type 7." << endl;
	cout << "\tKilometres  to Miles:       type 8." << endl;
	cout << "\tYards       to Metres:      type 9." << endl;
	cout << "\tMetres      to Yards:       type 10." << endl;
	cout << "\n\t***-Currency-***\n" << endl;
	cout << "\tBDT to USD: type 11." <<endl;
	cout << "\tUSD to BDT: type 12." <<endl;
	cout << "\tEUR to USD: type 13." << endl;
	cout << "\tUSD to EUR: type 14." << endl;
	cout << "\tGBP to USD: type 15." << endl;
	cout << "\tUSD to GBP: type 16." << endl;
	cout << "\tEUR to GBP: type 17." << endl;
	cout << "\tGBP to EUR: type 18." << endl;
	cout << "\tCNY to EUR: type 19." << endl;
	cout << "\tEUR to CNY: type 20." << endl;
	cout << "\tCNY to USD: type 21." << endl;
	cout << "\tUSD to CNY: type 22." << endl;
	cout << "\n\t***-Tempetature-***\n"<<endl;
	cout << "\tFahrenheit to Celsius:    type 23." << endl;
    cout << "\tCelsius    to Fahrenheit: type 24." << endl;
    cout << "\tCelsius    to Kelvin:     type 25." << endl;
    cout << "\tFahrenheit to Kelvin:     type 26." << endl;
    cout << "\tKelvin     to Celsius:    type 27." << endl;
    cout << "\tKelvin     to Fahrenheit: type 28." << endl; 
	cout << "\tTo quie    : type 29." << endl << endl;
}
