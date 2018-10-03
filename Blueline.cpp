//Blueline main code
//Armaan Hossain
  
#include <iostream>
using namespace std;
  
void playerCreation (string);
bool puzzle1(int nodes[]);

int main()
{
          //Variables
          string player, start;
          char choice; 
          int nodes[3];
          
          //Game code
          cout << " " << endl;
          cout << "////////    ///   ///    ///   /////      ///     /// ///      /// /////" << endl;
          cout << "//   //    ///   ///     ///  //         ///     /// /////    /// //    " << endl;
          cout << "//////    ///    //      //  /////      ///     /// ///  //  /// /////  " << endl;
          cout << "//   \\  ///     //    //   //         ///     /// ///   /////  //      " << endl;
          cout << "/////// ///////   /////    /////      /////// /// ///     ///  /////    " << endl;
          cout << " " << endl;
          cout << "----------" << endl;
          do 
          {
              cout << "Welcome to Blueline, a text-based game that allows you to make the choices you need to make, in order to save ";
              cout << "humanity from a threat left unchecked for far too long. The game requires you to be patient and thorough";
              cout << "in each seen to achieve the best ending possible so it is advised that you examine as much as you can throughout ";
              cout << "the story. Once you make a choice, it is final..." << endl;
              cout << "----------" << endl;
              cout << "type 'start' to begin the game" << endl;
              cin >> start;
              cout << "----------" << endl;
              if(start == "start")
              {
                  playerCreation(player);
              }
          }
          while (start != "start");
          
          
            cout << "The year is 2218, 118 years after the Global REDline Prosper, an event that changed the lives of every human on earth. ";
            cout << "The Global REDline Prosper, or better known as the prosper, was the event that lead to the rise of the REDline forces, ";
            cout << "a militarized police sect consisting of faceless soldiers called REDliners. The world is the grimmest it has ever been ";
            cout << "as the human populace no longer have access to their emotions. The REDliners also control the humans through a chip ";
            cout << "implant that controls the population through low frequence binaural soundwaves." << endl; 
           
            cout << "You sit in your studio apartment. The room is dimly lit by the faint blue light emitting from your pc with disorganized ";
            cout << "wires spreading across the floor and wall. There's a small window with grills on the wall left of your computer." << endl;
            cout << "Look through the window?(y/n)" << endl;
            cin >> choice;
            if ((choice == 'y')||(choice == 'Y'))
            {
                  cout << "You see a vast cityscape under a gray sky and the city is cast with a menacing red overtone. Cyber ads are posted ";
                  cout << "across the sky advertising the REDline forces, numerous euphoria inducing medications, virtual relationships and ";
                  cout << "much more. Out of the corner of your eye, you see a post it note at the corner of the window. It's the instructions ";
                  cout << "you wrote for yourself on how to install the bluelight eye modification! The note says that you have to connect ";
                  cout << "node 1 to node 1, node 2 to node 2 and node 3 to node 3. You think to yourself that it would probably be a good ";
                  cout << "idea to remember that. " << endl;
            }
            cout << " You look towards your computer which displays black market instructions for a bluelight eye modification. " << endl;
            cout << "Do you want to begin the installation of the new eye mod?" << endl;
            cin >> choice;
            if ((choice == 'y')||(choice == 'Y'))
            {
                  cout << "You open the panel above the joint that connects your wrist and your forearm. The sight of wires entangled ";
                  cout << "with the sinew connected your wrist and forearm send nervous shots to the tips of your fingers. You grab "; 
                  cout << "the Bluelight module and place it in the palm of your right hand, right next to the open panel. In a moment ";
                  cout << "of braveness, you pull out the basic eye modification you had in place and instantly you lose your sight";
                  cout << "Thankfully, through your thorough research of eye modifications, you remember the schematics of eye module ";
                  cout << "and know exactly where all the nodes are. The question now, is which node connects with which node?" << endl;
            }
            puzzle1(nodes);
            cout << "You look around and everything you look at has a hovering box describing the details of the object you are looking ";
            cout << "at. You move towards the window and lookout, seeing millions of small boxes spread across the city detailing every";
            cout << "thing you see. It'll take time to hone your skills with your new eyes, but you know they will be extremely useful." << endl;
  //=>Left off here.
          return 0;
}

bool puzzle1 (int nodes[])
{
          int i, pinput[3];
          char gO;
  
          for (int i=0;i<3;i++)
          {
                nodes[i] = i+1;
          }
          cout << "Node " << nodes[0] << "= "; 
          cin >> pinput[0];
          cout << "Node " << nodes[1] << "= "; 
          cin >> pinput[1];
          cout << "Node " << nodes[2] << "= "; 
          cin >> pinput[2];
          if ((nodes[0] == pinput[0])&&(nodes[1] == pinput[1])&&(nodes[2] == pinput[2]))
          {
              cout << "You connect the wires to the module exactly how you were told to do. A sudden jolt of electricty pulsates through ";
              cout << "your body immediately bringing back your eyesight" << endl;
              return true;
          }
          else
          {
              cout << "You connect the wires to the module unsure if they were correct. A burst of electricity immediately zaps through your ";
              cout << "body directly to your eyes. Slight discomfort leads to overwhelming heat, ending in a blast behind your eyes leaving ";
              cout << "two smoldering hles where your eyes used to be" << endl; 
              
              do
              {
                  cout << "Game Over" << endl;
                  gO = 'y';
              }
              while (gO='y');
              return false;
          }
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
