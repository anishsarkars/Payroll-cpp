#include <iostream>
#include <string>
using namespace std;

string psname, psdepartment, payinput;
int inputdepartment;

string ceopass = "ceo1234", dirpass = "dir1234", promanpass, mangpass, asspass,
       sde1pass, sde2pass;
string ceousr = "ceouser", dirusr = "diruser", promanusr, mangusr, assusr,
       sde1usr, sde2usr;
// Name, department,\
// departments - ceo, director, product manager, manager, ass manager, sde1, sde2
// login, password
// date, if with deducted tax
// show the payment slip with print option
void psdetails() {
  cout << "Welcome to Sarkar's Infotech .Co\nWe welcome to the payroll "
          "interface(Plese give correct details to get accurate results) ";

  cout << "Personal Details:\n* Name: ";
  cin >> psname;
  cout << "Department: ";
  cin >> psdepartment;

  cout << "Now please select from the bootom options: \n1) CEO\n2) "
          "Director\n3) Product Manager\n4) Manger\n5) Assistant Manger\n6) "
          "SDE1\n7) SDE2\n 8) other\n: ";

  cin >> inputdepartment;

  switch (inputdepartment) {
  case 1:
    cout << "You've selected CEO\n";
    break;
  case 2:
    cout << "You've selected Director\n";
    break;
  case 3:
    cout << "You've selected Product Manager";
    break;
  case 4:
    cout << "You've selected Manger\n";
    break;
  case 5:
    cout << "You've selected Assistant Manger\n";
    break;
  case 6:
    cout << "You've selected  SDE1\n";
    break;
  case 7:
    cout << "You've selected SDE2\n";
    break;
  case 8:
    cout << "You've selected other\n";
    break;

  default:
    break;
  }
}

void account() {
  int tries, tries1;
  string inputbyuser, inputbypassword;
  cout << "Please enter your account details, for verification:)\n";

  while (tries <= 3 && tries >= 0) {

    cout << "\nEnter username: " << endl;
    cin >> inputbyuser;
    tries++;

    if (inputbyuser == ceousr || inputbyuser == dirusr ||
        inputbyuser == promanusr || inputbyuser == assusr ||
        inputbyuser == mangusr || inputbyuser == assusr ||
        inputbyuser == sde1usr || inputbyuser == sde2usr) {
      cout << "COngrat's you're correct\n";
      break;
    }

    else if (tries == 3) {
      cout << "YOu're limit exeed!, Try again";
      break;
    }

    else if (inputbyuser != ceousr || inputbyuser != dirusr ||
             inputbyuser != promanusr || inputbyuser != assusr ||
             inputbyuser != mangusr || inputbyuser != assusr ||
             inputbyuser != sde1usr || inputbyuser != sde2usr) {
      cout << "you're wrong\n";
      cout << "\nYour tries done: " << tries << "/3" << endl;
      continue;
    }
  }

  cout << "\nPlease enter your password now: \n";
  for (tries1 = 0; tries1 <= 3 && tries1 >= 0; tries1) {
    cout << "\nEnter password: ";
    cin >> inputbypassword;
    tries1++;
    if (inputbypassword == ceopass || inputbypassword == dirpass ||
        inputbypassword == promanusr || inputbypassword == assusr ||
        inputbypassword == mangusr || inputbypassword == assusr ||
        inputbypassword == sde1usr || inputbypassword == sde2usr) {
      cout << "COngrat's you're correct\n";

      // cout << "Please press 'Pay' to continue -\n:";
      // cin >> payinput;
      break;
    }

    else if (tries1 == 3) {
      cout << "YOu're limit exeed!, Try again";
      break;
    }

    else if (inputbypassword != ceopass || inputbypassword != dirpass ||
             inputbypassword != promanusr || inputbypassword != assusr ||
             inputbypassword != mangusr || inputbypassword != assusr ||
             inputbypassword != sde1usr || inputbypassword != sde2usr) {
      cout << "you're wrong\n";
      cout << "\nYour tries done: " << tries1 << "/3" << endl;
      continue;
    }
  }
}

void payment_process() {
  float ceosal = 120000, dirsal = 90000, promansal = 75000, mangsal = 45000,
        asssal = 30000, sde1sal = 80000, sde2sal = 100000;
  double tds = 0.18, fistpay;

  fistpay = ceosal - tds;

  int paymetod;

  cout << "Please select payment method:\n1) UPI\n2)Bank Transfer\n3) NEt "
          "Banking\n4) Check \n:";
  cin >> paymetod;

  if (paymetod == 1) {
    cout << "You've choosen UPI\n";

    cout << "**\t**Pay Slip**\t**\n> Name: " << psname
         << "\n> Department: " << psdepartment << "\n> GST: 18%\n> Salary: ";
    switch (inputdepartment) {
    case 1:
      cout << "You've selected CEO\nSalary: " << ceosal;
      break;
    case 2:
      cout << "You've selected Director\nSalary: " << dirsal;
      break;
    case 3:
      cout << "You've selected Product Manager\nSalary: " << promansal;
      break;
    case 4:
      cout << "You've selected Manger\nSalary: " << mangsal;
      break;
    case 5:
      cout << "You've selected Assistant Manger\nSalary: " << asssal;
      break;
    case 6:
      cout << "You've selected  SDE1\nSalary: " << sde1sal;
      break;
    case 7:
      cout << "You've selected SDE2\nSalary: " << sde2sal;
      break;
    case 8:
      cout << "You've selected other\nSalary: " << sde2sal;
      break;

    default:
      break;
    }
  }

  cout << "\n> Total: ";
  if (inputdepartment == 1) {
    cout << "108000/-";

  } else if (inputdepartment == 2) {
    cout << "90000/-";

  } else if (inputdepartment == 3) {
    cout << promansal - 0.18;

  } else if (inputdepartment == 4) {
    cout << mangsal - 0.18;

  } else if (inputdepartment == 5) {
    cout << asssal - 0.18;

  } else if (inputdepartment == 6) {
    cout << sde1sal - 0.18;

  } else if (inputdepartment == 7) {
    cout << sde2sal - 0.18;
  }
}

int main() {
  psdetails();
  account();
  payment_process();

  return 0;
}