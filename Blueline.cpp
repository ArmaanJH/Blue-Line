//Blueline main code
//Armaan Hossain
  
#include <iostream>
using namespace std;
  
void playerCreation (string);
  
int main()
{
          //Variables
          string player, start;
 
          //Game code
          cout << " " << endl;
          cout << "////////    ///   ///    ///   /////      ///     /// ///      /// /////" << endl;
          cout << "//   //    ///   ///     ///  //         ///     /// /////    /// //    " << endl;
          cout << "/////     ///    //      //  /////      ///     /// ///  //  /// /////  " << endl;
          cout << "//  //   ///     //    //   //         ///     /// ///   /////  //      " << endl;
          cout << "/////// ///////   /////    /////      /////// /// ///     ///  /////    " << endl;
          cout << " " << endl;
          cout << "----------" << endl;
          cout << "Welcome to Blueline, a text-based game that allows you to make the choices you need to make, in order to save humanity from a threat lef    t unchecked for far too long." << endl;
          cout << "type 'start' to begin the game" << endl;
          cin >> start;
          cout << "----------" << endl;
          if(start == "start")
          {
                  playerCreation(player);
 
          }
 
          return 0;
}
 
void playerCreation (string name)
{
          char ready, correct;
          string n, eth, gen, hairc, hairl, height, weight, style;
 
          cout << "State your gender" << endl;
          cin >> gen;
          cout << "State your name" << endl;
          cin >> n;
          do
          {
                  cout << "Welcome " << n << ", are you ready to describe your appearance in order to verify your identity?(Y/N)" << endl;
                  cin >> ready;
                  if ((ready == 'y') || (ready == 'Y'))
                  {
                          do
                          {
                                  cout << "What is your ethnicity?" << endl;
                                  cin >> eth;
                                  cout << "What is your hair color?" << endl;
                                  cin >> hairc;
                                  cout << "Is your hair short, medium, or long?" << endl;
                                  cin >> hairl;
                                  cout << "State your height" << endl;
                                  cin >> height;
                                  cout << "State your weight" << endl;
                                  cin >> weight;
                                  cout << "What is your choice of style?" << endl;
                                  cin >> style;
                                  cout << " " << endl;
                                  cout << "Gender: " << gen << endl;
                                  cout << "Name: " << n << endl;
                                  cout << "Ethnicity: " << eth << endl;
                                  cout << "Hair: " << hairl << ", " << hairc << endl;
                                  cout << "Height: " << height << endl;
                                  cout << "Weight: " << weight << endl;
                                  cout << "Style: " << style << endl;
                                  cout << "Is this information correct?(Y/N)" << endl;
                                  cin >> correct;
                                  if((correct == 'n')||(correct == 'N'))
                                  {
                                          cout << "Please ensure you are entering the correct information to avoid deanimationalization" << endl;
                                          cout << "--------" << endl;
                                  }
                          }
                          while ((correct == 'n')||(correct == 'N'));
                  }
          }
          while((ready == 'n')||(ready == 'N'));
}
