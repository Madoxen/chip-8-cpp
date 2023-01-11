#include <iostream>
#include "chip8.h"
#include <fstream>

int main(int argc, char *argv[])
{

	if (argc < 2)
	{
		std::cerr << "Provide file path to ROM as a first argument" << std::endl;
		return 1;
	}

	// load a program
	std::ifstream input(std::string(argv[1]), std::ios::binary | std::ios::ate);

	std::streamsize size = input.tellg();
	input.seekg(0, std::ios::beg);
	std::vector<std::byte> program_bytes;
	program_bytes.resize(size);
	if (!input.read(reinterpret_cast<char*>(program_bytes.data()), size)) 
	{
		std::cerr << "Bad read" << std::endl;
	}

	input.close();
	chip8::Chip8Emulator emu(program_bytes);
	emu.run();
}
