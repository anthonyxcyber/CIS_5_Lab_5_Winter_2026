// CIS_5_Lab_5_Winter_2026 - Practicing Structures
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct BusinessCard {
    string companyName;
    string companyAddress;
    string phoneNumber;
    string workingHours;
    string representativePOC;
    int priceQuoted;
};

int main() {
    srand((unsigned)time(0)); // seed random generator

    const int SIZE = 5;
    BusinessCard companies[SIZE];

    // Texas companies with funny names
    companies[0] = {
        "Lone Star Tech Wizards",
        "123 Yeehaw Rd, Austin, TX",
        "512-555-1001",
        "Mon-Fri 9am-5pm",
        "Buck Johnson",
        0
    };

    companies[1] = {
        "Big Iron Cyber Defense",
        "88 Alamo Ave, San Antonio, TX",
        "210-555-1002",
        "24/7",
        "Sally McHack",
        0
    };

    companies[2] = {
        "Howdy IT Solutions",
        "450 Cowboy Blvd, Fort Worth, TX",
        "817-555-1003",
        "Mon-Sat 8am-6pm",
        "Tex Morris",
        0
    };

    companies[3] = {
        "Red Dirt Plumbing & Code",
        "19 BBQ Lane, Lubbock, TX",
        "806-555-1004",
        "Mon-Fri 7am-4pm",
        "Rusty Grill",
        0
    };

    companies[4] = {
        "Bluebonnet Cloud Services",
        "700 Ranch Rd, Dallas, TX",
        "214-555-1005",
        "Mon-Sun 8am-8pm",
        "Beau Carter",
        0
    };

    // Generate random prices ($300–$1200)
    for (int i = 0; i < SIZE; i++) {
        companies[i].priceQuoted = 300 + (rand() % 901);
    }

    cout << fixed << setprecision(0);
    cout << "\n=== Texas Company Price Comparison ===\n";

    // Print all business cards
    for (int i = 0; i < SIZE; i++) {
        cout << "\nCompany #" << i + 1 << "\n";
        cout << "Name: " << companies[i].companyName << "\n";
        cout << "Address: " << companies[i].companyAddress << "\n";
        cout << "Phone: " << companies[i].phoneNumber << "\n";
        cout << "Hours: " << companies[i].workingHours << "\n";
        cout << "POC: " << companies[i].representativePOC << "\n";
        cout << "Price Quote: $" << companies[i].priceQuoted << "\n";
    }

    // Find lowest price
    int bestIndex = 0;
    for (int i = 1; i < SIZE; i++) {
        if (companies[i].priceQuoted < companies[bestIndex].priceQuoted) {
            bestIndex = i;
        }
    }

    cout << "\n=== Best Deal in Texas 🤠 ===\n";
    cout << "Company: " << companies[bestIndex].companyName << "\n";
    cout << "Price: $" << companies[bestIndex].priceQuoted << "\n";

    return 0;
}

https://drive.google.com/file/d/1AkJ4MOrsNKYS-243vozRR6QnfgdR9NDo/view?usp=sharing 
