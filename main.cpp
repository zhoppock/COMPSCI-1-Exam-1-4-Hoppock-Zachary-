//Hoppock, Zachary
//10/21/2020
//quarterlySales.cpp
//Input the Tech Industries sales for each month for a full year and the calculate the total quarterly sales
//Version #1

/*
January      $70,000
February     $90,000
March        $800,000
April        $420,000
May          $70,000
June         $10,000
July         $140,000
August       $220,000
September    $220,000
October      $120,000
November     $200,000
December     $50,000
Tech Industries Sales Report 2012
QTR 1	QTR 2	QTR 3	QTR 4
XXXXXXXX	XXXXXXXX	XXXXXXXX	XXXXXXXX
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double jan_sales;
  double feb_sales;
  double mar_sales;
  double apr_sales;
  double may_sales;
  double jun_sales;
  double jul_sales;
  double aug_sales;
  double sep_sales;
  double oct_sales;
  double nov_sales;
  double dec_sales;
  double quarter_1_sales;
  double quarter_2_sales;
  double quarter_3_sales;
  double quarter_4_sales;

  cout << "To calculate your quarterly sales report" << endl;
  cout << "please start by entering your sales for January." << endl;
  cout << "(Do not enter any commas)" << endl;
  cin >> jan_sales;
  cout << "Sales total for February?" << endl;
  cin >> feb_sales;
  cout << "Sales total for March?" << endl;
  cin >> mar_sales;
  cout << "Sales total for April?" << endl;
  cin >> apr_sales;
  cout << "Sales total for May?" << endl;
  cin >> may_sales;
  cout << "Sales total for June?" << endl;
  cin >> jun_sales;
  cout << "Sales total for July?" << endl;
  cin >> jul_sales;
  cout << "Sales total for August?" << endl;
  cin >> aug_sales;
  cout << "Sales total for September?" << endl;
  cin >> sep_sales;
  cout << "Sales total for October?" << endl;
  cin >> oct_sales;
  cout << "Sales total for November?" << endl;
  cin >> nov_sales;
  cout << "Sales total for December?" << endl;
  cin >> dec_sales;

  cout << "\n\n\n";
  cout << "                           Tech Industry Sales Report 2012" << endl;
  cout << "            QTR 1              QTR 2            QTR 3             QTR 4" << endl;
  quarter_1_sales = jan_sales + feb_sales + mar_sales;
  quarter_2_sales = apr_sales + may_sales + jun_sales;
  quarter_3_sales = jul_sales + aug_sales + sep_sales;
  quarter_4_sales = oct_sales + nov_sales + dec_sales;
  cout << fixed << setprecision(2);
  cout << setw(10) << "$" << quarter_1_sales << setw(10) << "$" << quarter_2_sales << setw(8) << "$" << quarter_3_sales << setw(9) << "$" << quarter_4_sales << endl;
  return 0;
}