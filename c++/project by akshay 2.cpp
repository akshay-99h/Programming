//	INSTRUCTIONS TO BE FOLLOWED
// 	Project by Akshay Prabhat Mishra
// 	Class - XI-A
// 	Topic- " App for travel agency "
// 	Type - No such pre-requisite knowledge is required, the program will proceed on its own ...

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;


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
        std::cout << "*******************************************************************************" << '\n';
        std::cout << "\n\n\tMenu :-" << '\n';
        std::cout << "\t\t1. Do reservation " << '\n';
        std::cout << "\n\t\t2. Go back " << '\n';
        std::cout << "*******************************************************************************" << '\n';
        std::cout << "\n\t Enter your choice (1/2) : " ; std::cin >> x;
        if (x==1) {
            std::cout << "*******************************************************************************" << '\n';
            std::cout << "\n\tEnter your first name : " ; gets(name.first);
            std::cout << "\n\tEnter your surname : " ; gets(name.sur);
            std::cout << "\tEnter your gender (m/f/o)" ; std::cin >> name.gender;
            std::cout << "*******************************************************************************" << '\n';
            std::cout << "\tEnter the dates of booking :-\n";
            std::cout << "\t\t date (dd) : "; std::cin>> date.dd;
            std::cout << "\n\t\t month (mm) : " ; std::cin >> date.mm;
            std::cout << "\n\t\t year (yyyy) :  " ; std::cin >> date.yyyy;
            std::cout << "*******************************************************************************" << '\n';
            std::cout << "\n\t Places :-" << '\n';
            std::cout << "\n\t\t1. Delhi " << '\n';
            std::cout << "\t\t2. Mumbai" << '\n';
            std::cout << "\t\t3. Goa " << '\n';
            std::cout << "\t\t4. Jaipur " << '\n';
            std::cout << "\t\t5. Shimla " << '\n';
            std::cout << "\n\tEnter your choice's no. : "; std::cin >> ::place;
            std::cout << "*******************************************************************************" << '\n';
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
            std::cout << "\n\tMr. " <<name.first<<' '<<name.sur<< '\n';
        }
        else if (name.gender=='f')
        {
            std::cout << "\n\tMs. " <<name.first<<' '<<name.sur<< '\n';
        }
        else std::cout << "\n\tDear " <<name.first<<' '<<name.sur<< '\n';
        std::cout << "You are planning to visit : " ;
        switch (::place) {
            case 1: std::cout << "Delhi" << '\n';break;
            case 2: std::cout << "Mumbai" << '\n';break;
            case 3: std::cout << "Goa" << '\n';break;
            case 4: std::cout << "Jaipur" << '\n';break;
            case 5: std::cout << "Shimla" << '\n';break;
        }
        std::cout << "Dated : " << date.dd << "/" << date.mm << "/"<< date.yyyy<< '\n';
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
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\n We provide a no. of vehicles....\n\n";
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\nThey include:-\n" << '\n';
    std::cout << "\t 1. Bike " << '\n';
    std::cout << "\t 2. Car " << '\n';
    std::cout << "\t 3. Flight" << '\n';
    std::cout << "\t 4. Train " << '\n';
    std::cout << "\t 5. Volvo" << '\n';
    std::cout << "\n\n Now what do you want ? Enter its number : " ; std::cin >> ::vehicle;
    return 0;
}

int delhi(){
    int x=0,y=0;
    do {
    system("clear"); cout << "\n\n";
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\t:::::::.                   oMMM  yMMN         +dd+" << '\n';
    std::cout << "\tMMMMMMMMNh:                oMMM  yMMN         yMMh" << '\n';
    std::cout << "\tMMMm::+hMMMh`     `..`     oMMM  yMMN  `.      `` " << '\n';
    std::cout << "\tMMMd    +MMMy  .yNMMNMNy.  oMMM  yMMNhMMMMd-  hMMd" << '\n';
    std::cout << "\tMMMd    -MMMd -MMMy::+MMN. oMMM  yMMM+-:mMMd  hMMd" << '\n';
    std::cout << "\tMMMd   -dMMM/ +MMMhhhhhhh: oMMM  yMMN   yMMm  hMMd" << '\n';
    std::cout << "\tMMMNhdNMMMm:  .NMMy:-+yyy` oMMM  yMMN   yMMm  hMMd" << '\n';
    std::cout << "\tdddddddyo-     `+hNMMNds.  +ddd  oddh   oddh  sddy" << '\n';
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:std::cout <<"\n\n One of the most stunning destinations of India, ";
            cout << "Delhi is situated along side River Yamuna with its rich historical background. It is a major ";
            cout << "gateway to many tour itineraries to India as most of the tours of India begin from Delhi itself. " ;getchar();break;
            case 2:std::cout <<"\n\n It includes the must-see sights like the Red Fort, India Gate and Rajpath,";
            cout << " India’s largest mosque Jama Masjia, Gandhi’s memorial at Raj Ghat and the Chandni Chowk ";
            cout << "market. Visit the breathtaking Sikh Gurudwara Bangla Sahib and famous temples like the Lotus";
            cout << " temple, ISKCON Temple, Chhatarpur Temple and the Qutb Complex is also included in this ";
            cout << "packed itinerary. See the president’s residence, Rashtrapati Bhavan, Humayun’s Tomb and ";
            cout << "learn about Hinduism at Swaminarayan Akshardham.";getchar();break;
            case 3:std::cout <<"\n\n\t The list of hotels is as follows:-\n 1. The Leela Palace\n 2. Shanti Home\n 3.";
            cout << " Colonel's Retreat";getchar();break;
            case 4:cout <<"\n\t\t"<<'5'<<" days";getchar();break;
            case 5:places();break;
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " ;getchar();
    } while(2);
return 0;
}


int mumbai(){
    int x=0,y=0;
    do {
    system("clear");cout << "\n\n";
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\t  +oo-    +oo:                              NMM                   .dmy" << '\n';
    std::cout << "\t :MMMN.  sMMMm                   `     `    NMM ```       ``      `os/" << '\n';
    std::cout << "\t hMMNMm.oMMNMM-  yhh   hhh  hhhohdhs:shdh/  NMMsdddy/` `/hdddshhy `hhs" << '\n';
    std::cout << "\t.MMN:NMmMMssMMs  NMM`  MMM  MMM:-hMMh-:NMM` NMMo-:hMMs yMMy::oMMm .MMd" << '\n';
    std::cout << "\toMMy :NMMs -MMm  mMM:.-MMN  MMN  +MMo  mMM` NMM+--yMMy yMMy--+MMm .MMd" << '\n';
    std::cout << "\thmm:  :ms   dmm. -hmNNNNh:  mmd  /mm+  hmm` dmmymNNh+` `+dNNmymmh .mmh" << '\n';
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:std::cout<<"\n\n Mumbai is the city you would like to visit after Delhi. A city of ";
            cout << "entrepreneurs, concrete towers, clubs and discos, cricket, Bollywood and more. To everyone ";
            cout << "who lives in Mumbai, it is a magical city with a vibe that cannot be felt anywhere else."; getchar();break;
            case 2:std::cout<<"\n\n The places to visit in Mumbai are :\n 1. Gateway of India\n";
            cout << " 2. Elephanta Caves\n 3. Juhu Beach\n 4. Marine Drive\n 5. Film City"; getchar();break;
            case 3:std::cout<<"List of the Hotels:-\n 1. The LaLiT Mumbai\n 2. Grand Hyatt\n";
            cout << " 3. The Oberoi";getchar(); break;
            case 4:std::cout<<"\n\t\t"<<'4'<<" days";getchar(); break;
            case 5:places();
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " ;getchar();
    } while(2);
return 0;
}


int goa(){
    int x=0,y=0;
    do {
    system("clear");cout << "\n\n";
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\t   .+ymNMMMNds:                                   " << '\n';
    std::cout << "\t .hMMMMMNNMMMMMm-                                 " << '\n';
    std::cout << "\t-NMMMN+`  `:dMNho        .---`          `--.      " << '\n';
    std::cout << "\tdMMMN.      `.       `odMMMMMMNy:    .smMMMMNhMMMM" << '\n';
    std::cout << "\tMMMMh    dMMMNMMMN. -NMMMmsshMMMMy  -NMMMmyshMMMMM" << '\n';
    std::cout << "\tdMMMN`   shhdMMMMN  dMMMy    .MMMM: hMMMh    -MMMM" << '\n';
    std::cout << "\t-NMMMm/`   .yMMMM/  yMMMd.   +MMMM- yMMMm.   +MMMM" << '\n';
    std::cout << "\t .hMMMMMmmNMMMMm:   `hMMMMmdNMMMN/  `dMMMMNmNMMMMM" << '\n';
    std::cout << "\t   .+hmNMMNmhs:       -sdmNNNmy+`     :sdNNmy/hhhh" << '\n';
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout << "\n\n Tourism is generally focused on the coastal areas of Goa, with decreased";
            cout << " tourist activity inland. Foreign tourists, mostly from Europe, arrive in Goa in winter whilst";
            cout << " the summer and monsoon seasons see a large number of Indian tourists."; getchar(); break;
            case 2:cout<<"\n\n\t The places to visit include :-\n 1. Calangute Beach\n 2. Baga Beach\n";
            cout << " 3. Basilica Of Bom Jesus\n 4. Aguada Fort\n 5. Vagator Beach"; getchar(); break;
            case 3:cout << "\n\n\t The list of Hotels include :-\n 1. Boshan Hotels\n 2. Ginger Hotel\n";
            cout << " 3. Hotel Palacio De Goa"; getchar(); break;
            case 4:cout <<"\n\t\t"<<'3'<<" days"; getchar(); break;
            case 5:places();
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " ;getchar();
    } while(2);
return 0;
}


int jaipur(){
    int x=0,y=0;
    do {
    system("clear");cout << "\n\n";
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\t     /+++.                .dMNo                                       " << '\n';
    std::cout << "\t     mMMM:                .mMMs                                       " << '\n';
    std::cout << "\t     mMMM:      ``          ``         ``                             " << '\n';
    std::cout << "\t     mMMM:   /hNMMMdhNNN: .NNNy  yNNNsNMMMms.  `NNNh   /NNN/ `NNNhomMM" << '\n';
    std::cout << "\t     mMMM:  hMMMmsshMMMM: .MMMy  hMMMNyoyNMMM: `MMMh   +MMM/ `MMMMNyyh" << '\n';
    std::cout << "\t     mMMM: .MMMm    oMMM: .MMMy  hMMM`   :MMMh `MMMh   +MMM/ `MMMm`   " << '\n';
    std::cout << "\t /h::NMMM- `NMMM+.`:mMMM: .MMMy  hMMMs.`-hMMMs  MMMm. `yMMM/ `MMMh    " << '\n';
    std::cout << "\tsMMMMMMN+   -dMMMMMMNMMM: .MMMy  hMMMMMMMMMMs   oMMMMNMMMMh` `MMMh    " << '\n';
    std::cout << "\t .+sso:`      ./oo+-.///. `///-  hMMM./ooo:`     `/ossso/.    ///:    " << '\n';
    std::cout << "\t                                 hMMM`                                " << '\n';
    std::cout << "\t                                 hMMM`                                " << '\n';
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout<<"\n\n\nPlanned by Vidyadhar Bhattacharya, Jaipur holds the distinction of being";
            cout << " the first planned city of India. Renowned globally for its coloured gems, the capital city";
            cout << " of Rajasthan combines the allure of its ancient history with all the advantages of a metropolis.";
            cout << " The bustling modern city is one of the three corners of the golden triangle that includes";
            cout << " Delhi, Agra and Jaipur.\n\n The story goes that in 1876, the Prince of Wales visited India";
            cout << " on a tour. Since the colour pink was symbolic of hospitality, Maharaja Ram Singh of";
            cout << " Jaipur painted the entire city pink. The pink that colours the city makes for a marvellous";
            cout << " spectacle to behold. Jaipur rises up majestically against the backdrop of the forts";
            cout << " Nahargarh, Jaigarh and Garh Ganesh Temple.\n\n Jaipur traces back its origins to 1727";
            cout << " when it was established by Jai Singh II, the Raja of Amber. He shifted his capital from";
            cout << " Amber to the new city because of the rapidly-growing population and an increasing";
            cout << " water scarcity. Noted architect Vidyadhar Bhattacharya used the established principles";
            cout << " of Vastu Shastra to build the city."; getchar();break;
            case 2:cout<<"\nThe places to visit include :-\n\n";
            cout << "\n\n 1. Amber Palace - Amber (pronounced Amer) is at a distance of about";
            cout << " 11 kilometres from Jaipur. Now a UNESCO World Heritage Site, it was";
            cout << " the bastion of the Kachwahas of Amber, until the capital was moved to the";
            cout << " plains, to what is today Jaipur. The palace, located in craggy hills, is a ";
            cout << " beautiful melange of Hindu and Mughal styles.";
            cout << "\n\n 2. City Palace - Located deep within the walled city, the City Palace Complex";
            cout << " was conceived and built by Maharaja Sawai Jai Singh II, the founder of";
            cout << " Jaipur. A beautiful fusion of Mughal and Rajput architecture, the palace is";
            cout << " still home to the last ruling royal family which lives in a private section of the palace.";
            cout << "\n\n 3. Jantar Mantar - Now a UNESCO World Heritage Site, Jantar Mantar in";
            cout << " Jaipur is considered to be the largest of the five astronomical observatories";
            cout << " built by Maharaja Sawai Jai Singh II, the founder of Jaipur. It contains sixteen";
            cout << " geometric devices, designed to measure time, track celestial bodies and ";
            cout << " observe the orbits of the planets around the sun. ";
            cout << "\n\n 4. Hawa Mahal - Hawa Mahal, literally the Palace of Winds, was built in 1799";
            cout << " by the poet king Sawai Pratap Singh as a summer retreat for him and his family.";
            cout << " It also served as a place where the ladies of the royal household could observe";
            cout << " everyday life without being seen themselves. This unique five-storey structure";
            cout << " is a blend of Hindu and Islamic architecture, and the exterior, with its small latticed";
            cout << " windows (called jharokhas), resembles the crown of Lord Krishna."; getchar();break;
            case 3:cout<<"\n The list of hotels is as follows :-\n";
            cout << "\n\t 1. The Lalit Jaipur \n";
            cout << " \t 2. Rambagh Palace\n";
            cout << " \t 3. Jaipur Marriott Hotel\n";
            cout << " \t 4. Clarks Amer\n"; getchar();break;
            case 4:cout<<"\n\t\t"<<'2'<<" days"; getchar();break;
            case 5:places();
            default:y=1;
        }
        std::cout << "\n\nPress enter to continue... " ;getchar();
    } while(2);
return 0;
}


int shimla(){
    int x=0,y=0;
    do {
    system("clear");cout << "\n\n";
    std::cout << "*******************************************************************************" << '\n';
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
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\n What do you want to see ?" << '\n';
    std::cout << "\t1. Description of place " << '\n';
    std::cout << "\t2. Places to visit" << '\n';
    std::cout << "\t3. Hotels" << '\n';
    std::cout << "\t4. Plan of stay" << '\n';
    std::cout << "\t5. back" << '\n';
    std::cout << "\tEnter your choice " ; std::cin >> x;
    switch (x) {
            case 1:cout<<"\nProbably the most popular hill station in northern India, Shimla is the";
            cout << " capital city of Himachal Pradesh. Famous for its Mall road, the Ridge, toy";
            cout << " train and colonial architecture, Shimla is popular among honeymooners and families alike.";
            cout << "\n Situated at the height of 2200 m, Shimla is one of the most eminent tourist ";
            cout << " destinations in the country. Set amidst beautiful hills and mystical woods, Shimla";
            cout << " is one of most aesthetically planned cities in India. The erstwhile summer capital";
            cout << " of British India, this town's captivating natural beauty, and the atmosphere are";
            cout << " bound to leave any tourist overwhelmed. The well-knit roads, impeccable cleanliness,";
            cout << " and an efficient administration make for a perfect combination for any tourist";
            cout << " destination in the world. This town has colonial-style buildings alongside the";
            cout << " historic temples, and the amalgamation of the worlds leaves everyone visiting";
            cout << " this region spellbound.\n"; getchar();break;
            case 2:cout<<"\n\nWithin this city, one must visit the Mall Road, The Ridge, Institute of";
            cout << " Advanced Studies and Jakhu Temple. Shimla is also used as a base to cover";
            cout << " other nearby places like Chail, Kufri, Naldehra, Mashobra, Tattapani and";
            cout << " Narkanda. The toy train to Shimla from Kalka passes through beautiful hills";
            cout << " and valleys and is one of the most beautiful train routes in the world.";getchar(); break;
            case 3:cout<<"\n\n The hotels in Shimla include :-\n";
            cout << "\n\t 1. Radisson Jass\n";
            cout << "\t 2. Hotel Landmark\n";
            cout << "\t 3. Hotel Silverine\n";
            cout << "\t 4. Hotel Willow Banks\n"; getchar();break;
            case 4:cout<<"\n\t\t"<<'4'<<" days";getchar(); break;
            case 5:places();
            default:y=1;
        }
    std::cout << "\n\nPress any key to continue... "; getchar();
    } while(2);
return 0;
}


int main() {
    int x=0,y=0;
    do {
    system("clear");
    std::cout << "_______________________________________________________________________________\n";
    std::cout << "\n\t\t\t\t Akshay's Tour \n" << '\n';
    std::cout << "_______________________________________________________________________________\n";
    std::cout << "*******************************************************************************" << '\n';
    cout<< "\n\tStart by :-";
    std::cout << "\n\n\t1. Knowing the places we offer" << '\n';
    std::cout << "\n\t2. Knowing the vehicles we provide services for" << '\n';
    std::cout << "\n\t3. Book tickets for the desired place" << '\n';
    std::cout << "\n\t4. Check for reservations" << '\n';
    std::cout << "\n\t5. Exit\n " << '\n';
    std::cout << "*******************************************************************************" << '\n';
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
    std::cout << "*******************************************************************************" << '\n';
    std::cout << "\nList :-" << '\n';
    std::cout << "\t1. Delhi" << '\n';
    std::cout << "\t2. Mumbai" << '\n';
    std::cout << "\t3. Goa" << '\n';
    std::cout << "\t4. Jaipur" << '\n';
    std::cout << "\t5. Shimla" << '\n';
    std::cout << "\t6. Back (Go to menu)\n" << '\n';
    std::cout << "*******************************************************************************" << '\n';
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
