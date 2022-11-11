#include <iostream>
using namespace std;
class person
{
  public:
  string name;
  string bd;
  int id;
  int bookc;
  string bookid;
  string retdate;
  string cost;
  int age;
  person () {};
  person(string a,string b,int c,int d,string e,string f,string g,int h)
  {
    name = a;
    bd = b;
    bookc = d;
    id = c;
    bookid = f;
    retdate = g;
    cost = e;
    age = h;

  }
    
};

int main()
{
  person all[128];
  int curopt,i,iid,ibookc,iage;
  string iname,ibd,icost,iretdate,ibookid;
  cout << "dogshit program gaming69yt";
  while(true)
  {
    i++;
  cout << "\n\nEnter options\n[1] Save person info\n[2] List all persons\n[3] Get person's info by name,birthdate or id\n[4] Abort\n Options: ";
  cin >> curopt;
  switch (curopt)
  {
    case 1:
    cout << "\nName: ";
    cin >> iname;
    cout << "\nAge (Years round to below number: )";
    cin >> iage;
    cout << "\nBirthdate (DD/MM/YY format) :";
    cin >> ibd;
    cout << "\nIdentification number: ";
    cin >> iid;
    cout << "\nBook ids (Seperate with , ): ";
    cin >> ibookid;
    cout << "\nTotal amount of book bought or rented: ";
    cin >> ibookc;
    cout << "\nReturn date (DD/MM/YY format): ";
    cin >> iretdate;
    cout << "\nCost : ";
    cin >> icost;
    all[i] = person(iname,ibd,iid,ibookc,icost,ibookid,iretdate,iage);
    cout << "\nSaved. ";

    break;
    case 2:
    for(int l = 0;l<=i;l++)
    {
      
    }
    break;
    case 3:
    break;
    case 4:
    break;
    default:
    return 0;
    break;
  }


  }

  
}
