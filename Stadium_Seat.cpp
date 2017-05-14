//this program belongs to Ramin Roufeh

//Lab : stadium seating

#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
 
   //Display my name header on the screen.

   cout << " /+++++++++++++++++++++++++++++++\ "  << endl;
   cout << " {{        Ramin Roufeh         }} "  << endl;
   cout << " {{       Stadium Seating       }} "  << endl;
   cout <<" ++++++++++++++++++++++++++++++++++++ " << endl;
   cout << endl;
   
   //Variable Declarations
   ifstream infile;
   ofstream outfile;
   double priceA,priceB,priceC;
   int numA,numB,numC,numT;
   double revenueA,revenueB,revenueC,revenueT;


   //Open input file and output file
   infile.open("inData.txt");
   outfile.open("outData.txt");
   
   // telling user the name of file
   cout <<  "inputData.txt file is being read to get info"<<endl;
   cout <<  "you can see result in outputData.txt file\n"<<endl;


   //Read the price and number of tickets
   infile>> priceA >> numA;
   infile>> priceB >> numB;
   infile>> priceC >> numC;

   //closing input file
   infile.close();

   //compute amount of revenue
   revenueA = priceA * numA;
   revenueB = priceB * numB;
   revenueC = priceC * numC;
   revenueT = revenueA + revenueB + revenueC;
   numT = numA + numB + numC;


   outfile << " /+++++++++++++++++++++++++++++++\ "  << endl;
   outfile << " {{        Ramin Roufeh         }} "  << endl;
   outfile << " {{{     Stadium Seating       }}} "  << endl;
   outfile <<" ++++++++++++++++++++++++++++++++++++ " << endl;

   //Write output file
   outfile<<fixed<<showpoint<<setprecision(2);
   outfile<<" seating     "<<setw(10)<<" Price($) "<<setw(8)<<"  NumberSold "<<setw(8)<<"   Revenue($) "<<endl;
   outfile<<" =========   "<<setw(8)<<" ========= "<<setw(8)<<" =========== "<<setw(8)<<" =========== "<<endl;
   outfile<<" Class A:    "<<setw(4)<<"$ "<<setw(6)<< priceA <<setw(8)<< numA <<setw(10)<<"$ "<<setw(10)<< revenueA <<endl;
   outfile<<" Class B:    "<<setw(4)<<"$ "<<setw(6)<< priceB <<setw(8)<< numB <<setw(10)<<"$ "<<setw(10)<< revenueB <<endl;
   outfile<<" Class C:    "<<setw(4)<<"$ "<<setw(6)<< priceC <<setw(8)<< numC <<setw(10)<<"$ "<<setw(10)<< revenueC <<endl;
   outfile<<" =========   "<<setw(8)<<" ========= "<<setw(8)<<" =========== "<<setw(8)<<"  =========== "<<endl;
   outfile<<"Total Revenue :  $"<< revenueT<<endl;
   outfile<<"Attendance    :   "<< numT <<endl; 
   
   //closing output file
   outfile.close();

   //telling user where the file is at
   cout<<"You can find output file in Same file in the document library \n"<<endl;
   


   return 0;

}
