#include <fstream>
#include <iostream>

int	initialize_validate(std::string &filename, std::string &s1, std::string &s2,
		int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <first string> <second string>" << std::endl;
		return (1);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cerr << "Error: Strings must not be empty." << std::endl;
		return (1);
	}
	if (s1 == s2)
		return (2);
	return (0);
}

void	find_occurrence(std::string &content, const std::string &s1,
		const std::string &s2)
{
	size_t	pos;
	size_t	i;

	std::string result;
	pos = 0;
	while (pos < content.length())
	{
		i = 0;
		while (i < s1.length() && pos + i < content.length() && content[pos
			+ i] == s1[i])
			i++;
		if (i == s1.length())
		{
			result += s2;
			pos += s1.length();
		}
		else
		{
			result += content[pos];
			pos++;
		}
	}
	content = result;
}

bool	exctract_content(std::ifstream &input_file, std::string &content_file,
		const std::string &filename)
{
	std::string line;
	input_file.open(filename.c_str());
	if (!input_file.is_open())
	{
		std::cerr << "Error: Could not open file." << std::endl;
		return (1);
	}
	while (std::getline(input_file, line))
	{
		content_file += line;
		if (!input_file.eof())
			content_file += "\n";
	}
	if (input_file.bad())
	{
		std::cerr << "Error: An error occurred while reading the file." << std::endl;
		input_file.close();
		return (1);
	}
	input_file.close();
	return (0);
}

bool	fill_replacer(std::string &filename, std::string &content)
{
	std::ofstream output_file;
	output_file.open((filename + ".replace").c_str());
	if (!output_file.is_open())
	{
		std::cerr << "Error: Could not create output file." << std::endl;
		return (1);
	}
	output_file << content;
	if (output_file.bad())
	{
		std::cerr << "Error: An error occurred while writing to the file." << std::endl;
		output_file.close();
		return (1);
	}
	output_file.close();
	return (0);
}

int	main(int ac, char **av)
{
	int	ret_checker;

	std::string filename;
	std::string s1;
	std::string s2;
	std::ifstream input_file;
	std::string content_file;
	ret_checker = initialize_validate(filename, s1, s2, ac, av);
	if (ret_checker == 1)
		return (1);
	if (exctract_content(input_file, content_file, filename))
		return (1);
	if (ret_checker == 0)
		find_occurrence(content_file, s1, s2);
	if (fill_replacer(filename, content_file))
		return (1);
	return (0);
}
