#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    string x, a;
    int low, high, e, flag, start, open;
    float c;
    bool correctGuess = false;
    bool imtheMap = false;
    getch();
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "                *********   ****   ******        ********        ****   ******            ***********     " << endl;
    cout << "                *********   ****   *******       ************    ****   *******         *************  " << endl;
    cout << "                ****        ****   *********     ****     ****   ****   *********      ****              " << endl;
    cout << "                ****        ****   ****   ****   ****     ****   ****   ****   ****   ****                    " << endl;
    cout << "                ********    ****   ****   ****   ****     ****   ****   ****   ****   ****    *******            " << endl;
    cout << "                ********    ****   ****   ****   ****     ****   ****   ****   ****   ****    *******              " << endl;
    cout << "                ****        ****   ****   ****   ****     ****   ****   ****   ****   ****       ****      " << endl;
    cout << "                ****        ****   ****   ****   ****     ****   ****   ****   ****   ****       ****       " << endl;
    cout << "                ****        ****   ****   ****   ************    ****   ****   ****     *************       " << endl;
    cout << "                ****        ****   ****   ****   ********        ****   ****   ****       ***********     " << endl;
    cout << "                   " << endl;
    cout << "                   " << endl;
    cout << "                   " << endl;
    cout << "                         ********            *********      **********         **********     " << endl;
    cout << "                         ************      *************    *************     ************   " << endl;
    cout << "                         ****     ****    ****       ****   ****      ****   ****      ****    " << endl;
    cout << "                         ****     ****    ****       ****   ****      ****   ****      ****       " << endl;
    cout << "                         ****     ****    ****       ****   *************    **************       " << endl;
    cout << "                         ****     ****    ****       ****   *************    **************         " << endl;
    cout << "                         ****     ****    ****       ****   ****      ****   ****      ****      " << endl;
    cout << "                         ****     ****    ****       ****   ****      ****   ****      ****         " << endl;
    cout << "                         ************      *************    ****      ****   ****      ****         " << endl;
    cout << "                         ********            *********      ****      ****   ****      ****       " << endl;
    cout << " " << endl;
    cout << "                                                         [1]START  " << endl;
    cout << "                                                         [2]ABOUT  " << endl;
    cin >>start;

    switch (start)
    {
    case 1:
    cout<<"                                                      COME ON, VAMONOS!"<<endl;
    break;
    case 2:
    cout<<"                                          This game was made by Group 5G of BSIE 1-5N"<<endl<<endl;
    cout<<"                                                      ACIERTO, KRYSTELLE B."<<endl;
    cout<<"                                                       BAZAR, PAULA MAE G."<<endl;
    cout<<"                                                   PALWA, QUEEN RANNY THEA B."<<endl;
    cout<<"                                                    PENALOSA, CARLA JOYCE A."<<endl;
    cout<<"                                                   REYES, ANELLA FRANCHESKA E."<<endl;
    break;
    default:
        cout<<"Error! Enter a valid number"<<endl;
        break;
    }
    getch();
    system("CLS");
    cout << "SWIPER: HOLA! SOY SWIPER!" << endl;
    getch();
    cout << "        Hi my friend! What is your name?" << endl;
    cin>>x;
    cout << " " << endl;
    cout << "         Hi " <<x<<"!"<<endl;
    getch();
    cout << "         Welcome to Finding Dora!"<< endl;
    getch();
    cout << "         In this game, your goal is to help Swiper find Dora." << endl;
    getch();
    system("CLS");
    cout << "*********Dora left their house this morning and left a note for her friend, Boots."<<endl;
    getch();
    cout << "         Swiper and "<<x<<" started to find Dora and their feet brought them to Dora's house."<<endl;
    getch();
    cout << "         They asked everybody where Dora can be found but no one has no idea where she went,"<< endl;
    getch();
    cout << "         so Swiper and "<<x<<" secretly searched Dora's house at midnight and found the letter intended for Boots." << endl;
    getch();
    cout << " " << endl;

    cout<<"Type [1] to open the letter"<<endl<<endl;
    cout<<"     [2] to ignore"<<endl<<endl;
    cin>>open;
    switch (open)
    {
    case 1:
    cout << "DORA: Hola Boots, I will not be around for a couple of months because of some errands. I am currently staying at Abuela's house and you can go here anytime you want. If you want to know my location, the map is in my room. Please come here soon. I will be waiting for you."<< endl;
    break;
    case 2:
        cout<<"                                                       *GAME OVER*"<<endl;
return 0;
    break;
    default:
    cout<<"Error! Go and Help Swiper"<<endl;
    break;
        return 0;
    }
    getch();
    cout << "press any key to continue..." << endl;
    getch();
    system("CLS");
    getch();
    cout<<" "<<endl;
    cout << "THE ADVENTURE BEGINS..." << endl;
    getch();
    cout << " " << endl;
    cout << "*Swiper and "<<x<<" look for Map inside Dora's backpack*" << endl;
    cout << " " << endl;
    cout << " " << endl;
    getch();
    while(!imtheMap){
        cout << "Let's type 'MAP'" << endl;
    cin>>a;
    if (a=="Map" | a =="map" | a=="MAP"){
        cout<<"MAP:If there's a place you got to go I'm the one you need to know"<< endl;
    getch();
    cout << "     I'm the map"<< endl;
    cout << "     I'm the map"<< endl;
    cout << "     I'm the map"<< endl;
    getch();
    cout << "     If there's a place you got to get"<< endl;
    getch();
    cout << "     I can get you there I bet"<< endl;
    getch();
    cout << "     I'm the map"<< endl;
    cout << "     I'm the map"<< endl;
    cout << "     I'm the map"<< endl;
    getch();
    cout << "MAP: You need to go through a tunnel, cross a bridge and surpass a giant gate in order to find Dora." << endl;imtheMap=true;}
        else {
            cout<<"Wrong! Try again!"<<endl;}
    }
    getch();

    cout << " " << endl;
    cout << " " << endl;
    cout << "press any key to continue..." << endl;
    getch();
    system("CLS");
    getch();
    cout << "LEVEL 1: THE TUNNEL" << endl;
    getch();
    cout << " " << endl;
    cout << "SWIPER AND "<<x<<" NEEDS TO CROSS A BRIDGE WHICH THEN LEADS TO A TUNNEL" << endl;
    getch();
    cout << " " << endl;
    cout << "   ..." << endl;
    cout << " " << endl;
    getch();
    cout << "*Swiper and "<<x<<" found a bridge*" << endl; //bridgeeeeeee
    getch();
    cout << " " << endl;
    cout << "   ..." << endl;
    getch();
    cout << " " << endl;
    cout << "   *oops! careful! You might get slipped!*" << endl;
    getch();
    cout << " " << endl;
    cout << "   ..." << endl;
    getch();
    cout << " " << endl;
    cout << " " << endl;
    cout << "   *There it is!*" << endl;
    getch();
    cout << " " << endl;
    cout << "*Swiper and "<<x<<" crossed the bridge.*" << endl;
    cout << " " << endl;
    cout << "   ..." << endl;
    getch();
    cout << " " << endl;
    cout << " " << endl;
    cout << "Swiper and "<<x<<" found 3 tunnels" << endl; //tunnellllll
    getch();
    system("CLS");
    cout<<"                    *********                      *********                      *********"<<endl;
    cout<<"                ***            ***             ***           ***               ***           ***"<<endl;
    cout<<"              **                 **          **                 **           **                 ** "<<endl;
    cout<<"            **                     **      **                     **      **                     **"<<endl;
    cout<<"           **                       **    **                       **    **                       **"<<endl;
    cout<<"          **                         **  **                         **  **                         **                                                              "<<endl;
    cout<<"          *                           *  *                           *  *                           *                                                          "<<endl;
    cout<<"          *                           *  *                           *  *                           *                                                           "<<endl;
    cout<<"          *                           *  *                           *  *                           *                                                              "<<endl;
    cout<<"          **                         **  **                         **  **                         **                                                     "<<endl;
    cout<<"          **                        **   **                        **   **                        **"<<endl;
    cout<<"           **                      **     **                      **     **                      **     "<<endl;
    cout<<"              **                 **         **                 **           **                 **    "<<endl;
    cout<<"                ***           ***             ***           ***               ***           ***                   "<<endl;
    cout<<"                    *********                     *********                       *********          "<<endl;
    cout << " " << endl;
    cout << "                   TUNNEL 1                      TUNNEL 2                       TUNNEL 3 " << endl;
    getch();
    cout << " " << endl;
    cout << "IN THE FIRST TUNNEL, YOU AND SWIPER NEED TO SOLVE A PUZZLE TO MOVE FORWARD AND ENTER THE NEXT TUNNEL" << endl;
    getch();
    system("CLS");
    cout << "PUZZLE #1: " << endl;
    cout << "What are prime numbers between 10 to 40? (press any key to continue)" << endl;
    getch();
    cout << "*oops! wait! there is someone outside the tunnel*" << endl;
    cout << "SWIPER AND " << x << " : Who's there?" << endl;
    getch();
    cout << " " << endl;
    cout << "..." << endl;
    getch();
    cout << " " << endl;
    cout << "Swiper: Oh it's Benny the bull! Maybe we can fool him to find Dora. Let's go trick him!" << endl;
    getch();
    cout << "Swiper: Ola Benny! Can you help me find Dora? I want to five her my peace offering." << endl;
   cout << " " << endl;
    cout << "Benny: Is that for real?" << endl;
   cout << " " << endl;
    cout << "Swiper: Yes, it is. I wanted to be friends with her and stop stealing and throwing away her things. Will you help?" << endl;
   cout << " " << endl;
    cout << "Benny: I surely will, if you swear to stop being mean to her." << endl;
   cout << " " << endl;
    cout << "Swiper: I promise"<<endl;
   cout << " " << endl;
    cout << "Benny: Let's start then."<< endl;


    cout << " " << endl;
    cout << "                Just enter two numbers(intervals): ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    while (low < high)
    {
        flag = 0;

        for(e = 2; e <= low/2; ++e)
        {
            if(low % e == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }
     cout << " " << endl;
     getch();
 cout << "Benny: Wait up!" << endl;
 getch();
  cout << "      Make sure you remember these numbers. You might use it for the next puzzles." << endl;
  getch();
 cout << " " << endl;
 cout << "                                 *YOU ARE NOW ENTERING THE 2ND TUNNEL* " << endl;
 cout << " " << endl;
getch();
system("CLS");
 cout << " LEVEL 2: THE RIVER" << endl;
    getch();

    cout << " " << endl;
    cout << "THE TUNNEL WAS CONNECTED TO A RIVER." << endl;
    getch();
    cout << " " << endl;
    cout << "IN ORDER TO CROSS THE RIVER, SWIPER AND "<<x<<" NEED TO SOLVE THE NEXT PUZZLE" << endl;
    getch();

   cout << "  " << endl;
    cout << "PUZZLE #2: " << endl;
    getch();
    while (!correctGuess)
{
    cout << "What are sum of prime numbers you got from the previous puzzle?" << endl;
    cin>>c;
    if (c==180){
        cout<<"Muy Bien!"<<endl;
     cout << "  " << endl;
         cout << "                           *YOU SUCCESSFULLY CROSSED THE RIVER.*"; correctGuess=true;}
        else {
            cout<<"Wrong! Try again!"<<endl;}
    }
    getch();
system("CLS");
    cout << "LEVEL 3: THE GIANT GATE" << endl;
    getch();
    cout << " " << endl;
    cout << "IN THE LAST TUNNEL, SWIPER AND "<<x<<" NEED TO DEFEAT THE ENEMY GUARDING THE GIANT GATE WHERE DORA CAN BE FOUND." << endl;
    getch();

    int choice;
    int mhp, hp, i, init, atk, def, agi, matk, mdef, magi, damage, mdamage;
    atk = 10;
    def = 15;
    agi = 5;
    matk = 10;
    mdef = 15;
    magi = 5;

    srand(unsigned(time(0)));
    init = rand()%2+1;
    mhp = rand()%50+60;
    hp = rand()%20+80;
    if (init == 1){
        cout << "You can start!\n";
    }
    while(hp > 0 || mhp > 0){
        cout << "What attack do you want to do?\n 1 -> Fire Punch \n 2 -> Jump Kick \n 3 -> Quick Attack .\n";
        do{cin >> choice;} while(choice > 3 || choice < 1);
        switch (choice){
        case 1:
            atk = rand()%20+10;
            def = rand()%10+10;
            agi = rand()%5;
            break;
        case 2:
            atk = rand()%5+10;
            def = rand()%10+10;
            agi = rand()%15;
            break;
        case 3:
            atk = rand()%10+10;
            def = rand()%20+10;
            agi = rand()%5;
            break;
        }
        choice = rand()%3;

        switch (choice){
        case 1:
            matk = rand()%20+10;
            mdef = rand()%10+10;
            magi = rand()%5;
            break;
        case 2:
            matk = rand()%5+10;
            mdef = rand()%10+10;
            magi = rand()%15;
            break;
        case 3:
            matk = rand()%10+10;
            mdef = rand()%20+10;
            magi = rand()%5;
            break;
        }
         mdamage = (atk - magi) - (mdef/atk);
        if (mdamage <0){
        mdamage = 0;
        }
        mhp = mhp - mdamage;
        cout << "You did " << mdamage << " damage to the monster!\n";
        cin.get();

        if(mhp < 1) {
            cout << "You killed the monster! How dare you kill something!\n";
            cin.get();
            return 0;
        }

        cout << "The monster now has " << mhp << " HP left.\n";
        damage = (matk - agi) - (def / matk);
        if (damage < 0)
        {
            damage = 0;
        }
        hp = hp - damage;

        cout << "The monster stole " << damage << " points from you. You still have, " << hp << " HP points availalble\n";

        if (hp < 1) {
            cout << "You died! The beast still has " << mhp << " HP left, you suck!\n";
            cin.get();
            return 0;
        }
        else {
            cout << "You can start!\n";

        while(hp > 0 || mhp > 0){
            cout << "What attack do you want to do?\n 1 -> Fire Punch \n 2 -> Jump Kick \n 3 -> Quick Attack .\n";
            do{cin >> choice;} while(choice > 3 || choice < 1);
            switch (choice){
            case 1:
                atk = rand()%20+10;
                def = rand()%10+10;
                agi = rand()%5;
                break;
            case 2:
                atk = rand()%5+10;
                def = rand()%10+10;
                agi = rand()%15;
                break;
            case 3:
                atk = rand()%10+10;
                def = rand()%20+10;
                agi = rand()%5;
                break;
            }
            choice = rand()%3;

            switch (choice){
            case 1:
                matk = rand()%20+10;
                mdef = rand()%10+10;
                magi = rand()%5;
                break;
            case 2:
                matk = rand()%5+10;
                mdef = rand()%10+10;
                magi = rand()%15;
                break;
            case 3:
                matk = rand()%10+10;
                mdef = rand()%20+10;
                magi = rand()%5;
                break;
            }
             mdamage = (atk - magi) - (mdef/atk);
            if (mdamage <0){
            mdamage = 0;
            }
            mhp = mhp - mdamage;
            cout << "You did " << mdamage << " damage to the monster!\n";
            cin.get();

            if(mhp < 1) {
                cout << "You killed the monster! ";
                cout << " " << endl;
                cout << "                 ******  ******  *       *  ******  *  *****      *      *****   ******  ****** " << endl;
                cout << "                 *       *       *       *  *       *  *    *    * *     *    *  *       *      " << endl;
                cout << "                 ****    ****    *       *  *       *  *    *   *****    *    *  ****    ****** " << endl;
                cout << "                 *       *       *       *  *       *  *    *  *     *   *    *  *            * " << endl;
                cout << "                 *       ******  ******  *  ******  *  *****  *       *  *****   ******  ****** " << endl;
                cout << " " << endl;
                cout << "         FELICIDADES! YOU FINALLY FOUND DORA. YOU CAN NOW STEAL HER THINGS AND THROW IT WHERE SHE CAN'T FIND IT." << endl;
                cin.get();
                return 0;
            }

            cout << "The monster now has " << mhp << " HP left.\n";
            damage = (matk - agi) - (def / matk);
            if (damage < 0)
            {
                damage = 0;
            }
            hp = hp - damage;

             cout << "The monster stole " << damage << " points from you. You still have, " << hp << " HP points availalble\n";
            if (hp < 1) {
                cout << "You died! The beast still has " << mhp << " HP left, YOU LOSE!" ;
                cout << "  " << endl;
                cout << "  " << endl;
                cout << "                  *     *  *  *****  *****  *  *******  *   *  " << endl;
                cout << "                  **   **  *  *      *      *  *     *  **  *  " << endl;
                cout << "                  * * * *  *  *****  *****  *  *     *  * * *  " << endl;
                cout << "                  *  *  *  *      *      *  *  *     *  *  **  " << endl;
                cout << "                  *     *  *  *****  *****  *  *******  *   *  " << endl;
                cout << " " << endl;
                cout << "                    ******    *     *  *      ******  *****     " << endl;
                cout << "                    *        * *    *  *      *       *    *    " << endl;
                cout << "                    ****    *****   *  *      *****   *    *    " << endl;
                cout << "                    *      *     *  *  *      *       *    *    " << endl;
                cout << "                    *     *       * *  *****  ******  *****     " << endl;
                cout << " " << endl;
                cout << "                         YOUR EVIL PLAN DIDN'T WORK OUT         " << endl;
                cin.get();



                return 0;
            }
        }
    }
}
    return 0;
}

