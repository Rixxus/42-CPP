/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:11:22 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 12:12:23 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::getline;

int main(int ac, char **av){
    if (ac != 4){
        cout << "Expected ./sed <input file name> <text to replace> <text to replace with>" << endl;
        return (1);
    }
    
    string fileName = av[1]; // The infile name
    ifstream infile(av[1]); // Creates an ifstream object called infile, attempts to open the file
    if (!infile.is_open()){ // If file fails to open
        cout << "No file can be found by that name." << endl;
        return (1);
    }
    fileName.append(".replace"); // Adds .replace to end of infilename
    ofstream outfile(fileName, std::ios::out); // Creates an ofstream object called outfile, 
    // passes it the new name and sets the opening mode to output

    string findText = av[2];
    string replaceText = av[3];
    string line;

    size_t match;
    while (getline(infile, line)) // getline takes the infile and line variable and reads one line at a time
    {
        match = line.find(findText); // searches the line for the text, if found returns index of start of text
        while (match != string::npos) // npos is the max value of size_t, indicating no match is found. The while loop
        // will be entered every time we find a match in line.
        {
            line.erase(match, findText.length()); // deletes the matched text
            line.insert(match, replaceText); // inserts the replace text
            match = line.find(findText);
        }
        outfile << line << endl; // after making changes we write the line to the outfile
    }
    infile.close();
    outfile.close();
}