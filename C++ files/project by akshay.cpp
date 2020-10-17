#include "iostream.h"
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct bhola{
    char first[15],sur[15],gender;
}name;

struct date{
    int dd,mm,yyyy;
}date;


int vehicle;
int place;


int vehicles();

int places();

int reservations(){
    int x;
    do {
        system("clear");
        std::cout << "***************************************************************" << '\n';
        std::cout << "\n\n\tMenu :-" << '\n';
        std::cout << "\t\t1. Do reservation " << '\n';
        std::cout << "\n\t\t2. Go back " << '\n';
        std::cout << "***************************************************************" << '\n';
        std::cout << "\n\t Enter your choice (1/2) : " ; std::cin >> x;
        if (x==1) {
            std::cout << "***************************************************************" << '\n';
            std::cout << "\n\tEnter your first name : " ; gets(name.first);
            std::cout << "\tEnter your surname : " ; gets(name.sur);
            std::cout << "\tEnter your gender (m/f/o)" ; std::cin >> name.gender;
            std::cout << "***************************************************************" << '\n';
            std::cout << "\tEnter the dates of booking :-\n";
            std::cout << "\t\t date (dd) : "; cin>> date.dd;
            std::cout << "\n\t\t month (mm) : " ; std::cin >> date.mm;
            std::cout << "\n\t\t year (yyyy) :  " ; std::cin >> date.yyyy;
            std::cout << "***************************************************************" << '\n';
            std::cout << "\n\t Places :-" << '\n';
            std::cout << "\n\t\t1. Delhi " << '\n';
            std::cout << "\t\t2. Mumbai" << '\n';
            std::cout << "\t\t3. Goa " << '\n';
            std::cout << "\t\t4. Jaipur " << '\n';
            std::cout << "\t\t5. Shimla " << '\n';
            std::cout << "\n\tEnter your choice's no. : "; std::cin >> ::place;
            std::cout << "***************************************************************" << '\n';
            std::cout << "\n\tVehicles:-" << '\n';
            std::cout << "\t 1. Bike " << '\n';
            std::cout << "\t 2. Car " << '\n';
            std::cout << "\t 3. Flight" << '\n';
            std::cout << "\t 4. Train " << '\n';
            std::cout << "\t 5. Volvo" << '\n';
            std::cout << "\n\n Now what do you want ? Enter its number : " ; cin >> ::vehicle;
        }
        else break;
    } while(2); return 0;
}

int tickets(){
    int x;
    do{
        system("clear");
        std::cout << "Now," << '\n';
        if (name.gender=='m') {
            std::cout << "Mr. " <<name.first<<' '<<name.sur<< '\n';
        }
        else if (name.gender=='f')
        {
            std::cout << "Ms. " <<name.first<<' '<<name.sur<< '\n';
        }
        else std::cout << "Dear " <<name.first<<' '<<name.sur<< '\n';
        std::cout << "You are planning to visit : " ;
        switch (::place) {
            case 1: std::cout << "Delhi" << '\n';
            case 2: std::cout << "Mumbai" << '\n';
            case 3: std::cout << "Goa" << '\n';
            case 4: std::cout << "Jaipur" << '\n';
            case 5: std::cout << "Shimla" << '\n';
        }
        std::cout << "Dated " << date.dd << " of " << date.mm << " year being "<< date.yyyy<< '\n';
        std::cout << "Enter '0' to go back to main menu "; std::cin >> x;
        if (x==0) {
            return 0;
        }
    }while(1);
    return 0;
}

int vehicles()
{
    system("clear");
    std::cout << "***************************************************************" << '\n';
    std::cout << "\n We provide a no. of vehicles....\n\n";
    std::cout << "***************************************************************" << '\n';
    std::cout << "\nThey include:-\n" << '\n';
    std::cout << "\t 1. Bike " << '\n';
    std::cout << "\t 2. Car " << '\n';
    std::cout << "\t 3. Flight" << '\n';
    std::cout << "\t 4. Train " << '\n';
    std::cout << "\t 5. Volvo" << '\n';
    std::cout << "\n\n Now what do you want ? Enter its number : " ; cin >> ::vehicle;
    return 0;
}

int delhi(){
    int x=0,y=0;
    do {
    system("clear");
    std::cout << ":::::::.                   oMMM  yMMN         +dd+" << '\n';
    std::cout << "MMMMMMMMNh:                oMMM  yMMN         yMMh" << '\n';
    std::cout << "MMMm::+hMMMh`     `..`     oMMM  yMMN  `.      `` " << '\n';
    std::cout << "MMMd    +MMMy  .yNMMNMNy.  oMMM  yMMNhMMMMd-  hMMd" << '\n';
    std::cout << "MMMd    -MMMd -MMMy::+MMN. oMMM  yMMM+-:mMMd  hMMd" << '\n';
    std::cout << "MMMd   -dMMM/ +MMMhhhhhhh: oMMM  yMMN   yMMm  hMMd" << '\n';
    std::cout << "MMMNhdNMMMm:  .NMMy:-+yyy` oMMM  yMMN   yMMm  hMMd" << '\n';
    std::cout << "dddddddyo-     `+hNMMNds.  +ddd  oddh   oddh  sddy" << '\n';
    std::cout << "**************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout<<"One of the most stunning destinations of India,\n";
            cout << "Delhi is situated along side River Yamuna with its rich historical background. It is a major \n";
            cout << "gateway to many tour itineraries to India as most of the tours of India begin from Delhi itself. " ;break;
            case 2:cout<<"It includes the must-see sights like the Red Fort, India Gate and Rajpath,\n";
            cout << "India’s largest mosque Jama Masjia, Gandhi’s memorial at Raj Ghat and the Chandni Chowk \n";
            cout << "market. Visit the breathtaking Sikh Gurudwara Bangla Sahib and famous temples like the Lotus\n";
            cout << " temple, ISKCON Temple, Chhatarpur Temple and the Qutb Complex is also included in this \n";
            cout << "packed itinerary. See the president’s residence, Rashtrapati Bhavan, Humayun’s Tomb and \n";
            cout << "learn about Hinduism at Swaminarayan Akshardham."; break;
            case 3:cout<<"\t The list of hotels is as follows:-\n1. The Leela Palace\n2. Shanti Home\n3.";
            cout << "Colonel's Retreat"; break;
            case 4:cout<<'5'<<" days"; break;
            case 5:places();
            default:y=1; break;
        }
        std::cout << "\n\nPress enter to continue... " << '\n';getch();
    } while(2);
return 0;
}


int mumbai(){
    int x=0,y=0;
    do {
    system("clear");
    std::cout << "  +oo-    +oo:                              NMM                   .dmy" << '\n';
    std::cout << " :MMMN.  sMMMm                   `     `    NMM ```       ``      `os/" << '\n';
    std::cout << " hMMNMm.oMMNMM-  yhh   hhh  hhhohdhs:shdh/  NMMsdddy/` `/hdddshhy `hhs" << '\n';
    std::cout << ".MMN:NMmMMssMMs  NMM`  MMM  MMM:-hMMh-:NMM` NMMo-:hMMs yMMy::oMMm .MMd" << '\n';
    std::cout << "oMMy :NMMs -MMm  mMM:.-MMN  MMN  +MMo  mMM` NMM+--yMMy yMMy--+MMm .MMd" << '\n';
    std::cout << "hmm:  :ms   dmm. -hmNNNNh:  mmd  /mm+  hmm` dmmymNNh+` `+dNNmymmh .mmh" << '\n';
    std::cout << "**************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout<<" Mumbai is the city you would like to visit after Delhi. A city of \n";
            cout << "entrepreneurs, concrete towers, clubs and discos, cricket, Bollywood and more. To everyone\n";
            cout << "who lives in Mumbai, it is a magical city with a vibe that cannot be felt anywhere else."; break;
            case 2:cout<<" The places to visit in Mumbai are :\n 1. Gateway of India\n";
            cout << " 2. Elephanta Caves\n 3. Juhu Beach\n 4. Marine Drive\n 5. Film City"; break;
            case 3:cout<<"List of the Hotels:-\n 1. The LaLiT Mumbai\n 2. Grand Hyatt\n";
            cout << " 3. The Oberoi"; break;
            case 4:cout<<'4'<<" days"; break;
            case 5:places();
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " << '\n';std::cin.get();
    } while(2);
return 0;
}


int goa(){
    int x=0,y=0;
    do {
    system("clear");
    std::cout << "   .+ymNMMMNds:                                   " << '\n';
    std::cout << " .hMMMMMNNMMMMMm-                                 " << '\n';
    std::cout << "-NMMMN+`  `:dMNho        .---`          `--.      " << '\n';
    std::cout << "dMMMN.      `.       `odMMMMMMNy:    .smMMMMNhMMMM" << '\n';
    std::cout << "MMMMh    dMMMNMMMN. -NMMMmsshMMMMy  -NMMMmyshMMMMM" << '\n';
    std::cout << "dMMMN`   shhdMMMMN  dMMMy    .MMMM: hMMMh    -MMMM" << '\n';
    std::cout << "-NMMMm/`   .yMMMM/  yMMMd.   +MMMM- yMMMm.   +MMMM" << '\n';
    std::cout << " .hMMMMMmmNMMMMm:   `hMMMMmdNMMMN/  `dMMMMNmNMMMMM" << '\n';
    std::cout << "   .+hmNMMNmhs:       -sdmNNNmy+`     :sdNNmy/hhhh" << '\n';
    std::cout << "**************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout << " Tourism is generally focused on the coastal areas of Goa, with decreased\n";
            cout << " tourist activity inland. Foreign tourists, mostly from Europe, arrive in Goa in winter whilst \n";
            cout << " the summer and monsoon seasons see a large number of Indian tourists."; break;
            case 2:cout<<" The places to visit include :-\n 1. Calangute Beach\n 2. Baga Beach\n";
            cout << " 3. Basilica Of Bom Jesus\n 4.Aguada Fort\n 5.Vagator Beach"; break;
            case 3:cout << " The list of Hotels include :-\n 1. Boshan Hotels\n 2. Ginger Hotel\n";
            cout << " 3. Hotel Palacio De Goa"; break;
            case 4:cout<<'3'<<" days"; break;
            case 5:places();
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " << '\n';std::cin.get();
    } while(2);
return 0;
}


int jaipur(){
    int x=0,y=0;
    do {
    system("clear");
    std::cout << "     /+++.                .dMNo                                       " << '\n';
    std::cout << "     mMMM:                .mMMs                                       " << '\n';
    std::cout << "     mMMM:      ``          ``         ``                             " << '\n';
    std::cout << "     mMMM:   /hNMMMdhNNN: .NNNy  yNNNsNMMMms.  `NNNh   /NNN/ `NNNhomMM" << '\n';
    std::cout << "     mMMM:  hMMMmsshMMMM: .MMMy  hMMMNyoyNMMM: `MMMh   +MMM/ `MMMMNyyh" << '\n';
    std::cout << "     mMMM: .MMMm    oMMM: .MMMy  hMMM`   :MMMh `MMMh   +MMM/ `MMMm`   " << '\n';
    std::cout << " /h::NMMM- `NMMM+.`:mMMM: .MMMy  hMMMs.`-hMMMs  MMMm. `yMMM/ `MMMh    " << '\n';
    std::cout << "sMMMMMMN+   -dMMMMMMNMMM: .MMMy  hMMMMMMMMMMs   oMMMMNMMMMh` `MMMh    " << '\n';
    std::cout << " .+sso:`      ./oo+-.///. `///-  hMMM./ooo:`     `/ossso/.    ///:    " << '\n';
    std::cout << "                                 hMMM`                                " << '\n';
    std::cout << "                                 hMMM`                                " << '\n';
    std::cout << "**************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout<<"Planned by Vidyadhar Bhattacharya, Jaipur holds the distinction of being\n";
            cout << " the first planned city of India. Renowned globally for its coloured gems, the capital city\n";
            cout << " of Rajasthan combines the allure of its ancient history with all the advantages of a metropolis.\n";
            cout << " The bustling modern city is one of the three corners of the golden triangle that includes\n";
            cout << " Delhi, Agra and Jaipur.\n\n The story goes that in 1876, the Prince of Wales visited India\n";
            cout << " on a tour. Since the colour pink was symbolic of hospitality, Maharaja Ram Singh of\n";
            cout << " Jaipur painted the entire city pink. The pink that colours the city makes for a marvellous\n";
            cout << " spectacle to behold. Jaipur rises up majestically against the backdrop of the forts\n";
            cout << " Nahargarh, Jaigarh and Garh Ganesh Temple.\n\n Jaipur traces back its origins to 1727\n";
            cout << " when it was established by Jai Singh II, the Raja of Amber. He shifted his capital from\n";
            cout << " Amber to the new city because of the rapidly-growing population and an increasing\n";
            cout << " water scarcity. Noted architect Vidyadhar Bhattacharya used the established principles \n";
            cout << " of Vastu Shastra to build the city."; break;
            case 2:cout<<"The places to visit include :-\n";
            cout << " 1. Amber Palace - Amber (pronounced Amer) is at a distance of about\n";
            cout << " \t11 kilometres from Jaipur. Now a UNESCO World Heritage Site, it was\n";
            cout << " \tthe bastion of the Kachwahas of Amber, until the capital was moved to the\n";
            cout << " \tplains, to what is today Jaipur. The palace, located in craggy hills, is a \n";
            cout << " \tbeautiful melange of Hindu and Mughal styles.\n";
            cout << " 2. City Palace - Located deep within the walled city, the City Palace Complex\n";
            cout << " \twas conceived and built by Maharaja Sawai Jai Singh II, the founder of\n";
            cout << " \tJaipur. A beautiful fusion of Mughal and Rajput architecture, the palace is\n";
            cout << " \tstill home to the last ruling royal family which lives in a private section of the palace.\n";
            cout << " 3. Jantar Mantar - Now a UNESCO World Heritage Site, Jantar Mantar in\n";
            cout << " \tJaipur is considered to be the largest of the five astronomical observatories \n";
            cout << " \tbuilt by Maharaja Sawai Jai Singh II, the founder of Jaipur. It contains sixteen\n";
            cout << "  \tgeometric devices, designed to measure time, track celestial bodies and \n";
            cout << " \tobserve the orbits of the planets around the sun. \n";
            cout << " 4. Hawa Mahal - Hawa Mahal, literally the Palace of Winds, was built in 1799\n";
            cout << " \tby the poet king Sawai Pratap Singh as a summer retreat for him and his family.\n";
            cout << " \tIt also served as a place where the ladies of the royal household could observe\n";
            cout << " \teveryday life without being seen themselves. This unique five-storey structure\n";
            cout << " \tis a blend of Hindu and Islamic architecture, and the exterior, with its small latticed\n";
            cout << " \twindows (called jharokhas), resembles the crown of Lord Krishna.\n"; break;
            case 3:cout<<" The list of hotels is as follows :-\n";
            cout << "\n\t  1. The Lalit Jaipur \n";
            cout << " \t 2. Rambagh Palace\n";
            cout << " \t 3. Jaipur Marriott Hotel\n";
            cout << " \t 4. Clarks Amer\n"; break;
            case 4:cout<<'2'<<" days"; break;
            case 5:places();
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " << '\n';std::cin.get();
    } while(2);
return 0;
}


int shimla(){
    int x=0,y=0;
    do {
    system("clear");
    std::cout << "    `-:/:-.`     MMMMy            +hdy:                            yMMMM                  " << '\n';
    std::cout << " `+dMMMMMMMNh.   MMMMy           .MMMMm                            yMMMM                  " << '\n';
    std::cout << " hMMMMmyyhmN/    MMMMy            :oso.                            yMMMM                  " << '\n';
    std::cout << "-MMMMM:`  `.     MMMMy`-///:.`    ::::-   ::::.`-://:.  `-://-`    yMMMM     `-/+++:.-::::" << '\n';
    std::cout << "`mMMMMMmhy+:`    MMMMmdMMMMMNd-   NMMMh  `MMMMmdMMMMMNy+dMMMMMmo   yMMMM   `omMMMMMMmNMMMM" << '\n';
    std::cout << " .ohmNMMMMMMm+   MMMMNs::oMMMMd   NMMMh  `MMMMNo:/dMMMMm+:+NMMMM`  yMMMM  `dMMMMh+/ohMMMMM" << '\n';
    std::cout << "    `.-+yMMMMM-  MMMMh    dMMMN   NMMMh  `MMMMs   /MMMM+   sMMMM.  yMMMM  :MMMMy     yMMMM" << '\n';
    std::cout << " /h+-` `:MMMMM.  MMMMy    dMMMN   NMMMh  `MMMMs   :MMMM/   oMMMM.  yMMMM  .MMMMm:` `:mMMMM" << '\n';
    std::cout << "+MMMNNNNMMMMN+   MMMMy    dMMMN   NMMMh  `MMMMs   :MMMM/   oMMMM.  yMMMM   /NMMMMNmNMMMMMM" << '\n';
    std::cout << ".+ydNMMMNmy+`    ddddo    sdddh   hddds  `dddd+   -dddd:   /dddd.  odddh    `/ymNNNdosdddd" << '\n';
    std::cout << "**************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout<<"Probably the most popular hill station in northern India, Shimla is the\n";
            cout << " capital city of Himachal Pradesh. Famous for its Mall road, the Ridge, toy\n";
            cout << " train and colonial architecture, Shimla is popular among honeymooners and families alike.\n";
            cout << "\n Situated at the height of 2200 m, Shimla is one of the most eminent tourist \n";
            cout << " destinations in the country. Set amidst beautiful hills and mystical woods, Shimla\n";
            cout << " is one of most aesthetically planned cities in India. The erstwhile summer capital\n";
            cout << " of British India, this town's captivating natural beauty, and the atmosphere are\n";
            cout << " bound to leave any tourist overwhelmed. The well-knit roads, impeccable cleanliness,\n";
            cout << " and an efficient administration make for a perfect combination for any tourist\n";
            cout << " destination in the world. This town has colonial-style buildings alongside the\n";
            cout << " historic temples, and the amalgamation of the worlds leaves everyone visiting\n";
            cout << " this region spellbound.\n"; break;
            case 2:cout<<"Within this city, one must visit the Mall Road, The Ridge, Institute of\n";
            cout << " Advanced Studies and Jakhu Temple. Shimla is also used as a base to cover\n";
            cout << " other nearby places like Chail, Kufri, Naldehra, Mashobra, Tattapani and\n";
            cout << " Narkanda. The toy train to Shimla from Kalka passes through beautiful hills\n";
            cout << " and valleys and is one of the most beautiful train routes in the world."; break;
            case 3:cout<<" The hotels in Shimla include :-\n";
            cout << "\n\t 1. Radisson Jass\n";
            cout << "\t 2. Hotel Landmark\n";
            cout << "\t 3. Hotel Silverine\n";
            cout << "\t 4. Hotel Willow Banks\n"; break;
            case 4:cout<<'4'<<" days"; break;
            case 5:places();
            default:y=1;
        }
    std::cout << "\n\nPress any key to continue... " << '\n';
    } while(2);
return 0;
}


int main() {
    int x=0,y=0;
    do {
    system("clear");
    std::cout << "\n\t Akshay's Tour " << '\n';
    std::cout << "*******************************************************************" << '\n';
    cout<< "\n\tStart by :-";
    std::cout << "\n\n\t1. Knowing the places we offer" << '\n';
    std::cout << "\n\t2. Knowing the vehicles we provide services for" << '\n';
    std::cout << "\n\t3. Book tickets for the desired place" << '\n';
    std::cout << "\n\t4. Check for reservations" << '\n';
    std::cout << "\n\t5. Exit\n " << '\n';
    std::cout << "*******************************************************************" << '\n';
    std::cout << "\n\n\tEnter your choice: "; cin >>x;
    switch (x) {
        case 1:places(); break;
        case 2:vehicles(); break;
        case 4:tickets();break;
        case 3:reservations();break;
        case 5:exit (0);
        default:y=1;
    }
    }while(3); return 0;
}

int places()
{   int x=0,y=0;
    do {
    system("clear");
    std::cout << "*****************************************************************" << '\n';
    std::cout << "\nList :-" << '\n';
    std::cout << "\t1. Delhi" << '\n';
    std::cout << "\t2. Mumbai" << '\n';
    std::cout << "\t3. Goa" << '\n';
    std::cout << "\t4. Jaipur" << '\n';
    std::cout << "\t5. Shimla" << '\n';
    std::cout << "\t6. Back (Go to menu)\n" << '\n';
    std::cout << "*****************************************************************" << '\n';
    std::cout << "\n\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:delhi(); break;
            case 2:mumbai(); break;
            case 3:goa(); break;
            case 4:jaipur(); break;
            case 5:shimla(); break;
            case 6:main();
            default:y=1;
        }
    } while(2);
return 0;
}
