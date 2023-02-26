/*
 *  Biologists use a sequence of letters A, C, T, and G to model a genome.
 *  A gene is a substring of a genome that starts after a triplet ATG and ends before a triplet TAG, TAA, or TGA.
 *  Furthermore, the length of a gene string is a multiple of 3 and the gene does not contain
 *  any of the triplets ATG, TAG, TAA,and TGA. Write a program that prompts the user to enter a genome
 *  and displays all genes in the genome. If no gene is found in the input sequence, displays no gene
 *
 * */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string displayGenes(const string& s);

int main()
{
    string genome;

    //prompt user to enter a genome string
    cout << "Enter a genome string: ";
    cin >> genome;

    //print result
    if(displayGenes(genome).empty())
        cout << "no gene is found" << endl;
    else
    {
        //extract gene and display each per line
        string genes = displayGenes(genome);
        stringstream ss(genes);

        string word;
        while(!ss.eof())
        {
            ss >> word;
            cout << word << endl;
        }
    }

    return 0;
}

//function implementation
string displayGenes(const string& s)
{
    string triplet[] = {"ATG", "TAG", "TAA", "TGA"}; //array of triplet
    string genes, gene;

    int currentPosition = 0; //start position

    while(currentPosition < s.length())
    {
        int position = s.find(triplet[0], currentPosition); //locate the start triplet

        if(position == string::npos)
            return genes; //return empty string if triplet not found
        else
        {
            int endPosition; //initialise the end position

            //conditional statement to locate first end triplet
            if(s.find(triplet[1], currentPosition) < s.find(triplet[2], currentPosition)
               && s.find(triplet[1], currentPosition) < s.find(triplet[3], currentPosition))
                endPosition = s.find(triplet[1], currentPosition);

            else if(s.find(triplet[2], currentPosition) < s.find(triplet[1], currentPosition)
                    && s.find(triplet[2], currentPosition) < s.find(triplet[3], currentPosition))
                endPosition = s.find(triplet[2], currentPosition);

            else if(s.find(triplet[3], currentPosition) < s.find(triplet[1], currentPosition)
                    && s.find(triplet[3], currentPosition) < s.find(triplet[2], currentPosition))
                endPosition = s.find(triplet[3], currentPosition);

            //locate gene as a substring and assign it
            gene.assign(s, position + 3, (endPosition - position - 3));

            currentPosition = endPosition + 3; //update currentPosition

            //check if gene is a multiple of 3 and append to genes
            if (gene.size() % 3 == 0)
            {
                genes += ' '; //to separate genes
                genes += gene;
            }
        }
    }

    return genes;
}