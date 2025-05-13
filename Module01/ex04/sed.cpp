#include "sed.hpp"

void replace_line(std::string &line, const std::string &from, const std::string &to)
{
    if(from.empty()){
        std::cerr << "s1 is empty !" << std::endl;
        return ;
    }

    std::string new_string;
    size_t pos = 0;
    size_t len_s1 = from.length();
    while((pos = line.find(from, pos)) != std::string::npos)
    {
        new_string.append(line, 0, pos);
        new_string.append(to);
        pos+= len_s1;
        line.erase(0, pos);
        pos = 0;
    }
    new_string.append(line);
    line.swap(new_string);
}

void sed(char **av)
{
    std::string line;
    std::string outfile = std::string(av[1]) + ".replace";
    std::ifstream infile(av[1]);
    std::ofstream output(outfile.c_str());

    if(!infile){
        std::cerr << "Failed to open the input file" << std::endl;
        return;
    }

    if(!output){
        std::cerr << "Failed to open the output file : " << outfile << std::endl;
        return ;
    }

    while(std::getline(infile, line)){
        replace_line(line, av[2], av[3]);
        output << line << std::endl;
    }
    infile.close();
    output.close();
}