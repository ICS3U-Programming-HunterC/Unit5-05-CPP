// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 9, 2022
// This program gets your mark in number level and finds the middle
// percentage

#include <iostream>
#include <string>

std::string FormatAddress(std::string name, std::string streetNumber,
                          std::string streetName, std::string city,
                          std::string province, std::string postalCode,
                          std::string apartmentNumber = "") {
    std::string address = "";

    // format the address
    if (apartmentNumber != "") {
        address = name + " \n" + apartmentNumber + "-" + streetNumber +
        " " + streetName + "\n" + city + " " + province + " " + postalCode;
    } else {
        address = name + " \n" + streetNumber + " " + streetName + "\n" +
        city + " " + province + " " + postalCode;
    }

    return address;
}


main() {
    // declare variables
    std::string name;
    std::string question;
    std::string apartmentNumber = "";
    std::string streetNumber;
    std::string streetName;
    std::string city;
    std::string province;
    std::string postalCode;
    std::string address;


    // get the user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Do you live in an apartment? (y/n): ";
    std::getline(std::cin, question);
    if (question == "y" || question == "yes") {
        std::cout << "Enter your apartment number: ";
        std::getline(std::cin, apartmentNumber);
    }
    std::cout << "Enter your street number: ";
    std::getline(std::cin, streetNumber);
    std::cout << "Enter your street name AND type "
    "(Main St., Heron Road, etc.): ";
    std::getline(std::cin, streetName);
    std::cout << "Enter your city: ";
    std::getline(std::cin, city);
    std::cout << "Enter your province (as an abbreviation, "
    "i.e. ON, QC, BC, etc.): ";
    std::getline(std::cin, province);
    std::cout << "Enter your postal code (K3L 9H2): ";
    std::getline(std::cin, postalCode);
    std::cout << "\n";

    if (apartmentNumber != "") {
        address = FormatAddress(name, streetNumber, streetName, city,
        province, postalCode, apartmentNumber);
    } else {
        address = FormatAddress(name, streetNumber, streetName, city,
        province, postalCode);
    }
    std::cout << "Your canadian mailing address is: \n";
    std::cout << address;
}

