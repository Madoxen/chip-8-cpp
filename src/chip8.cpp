#include "chip8.h"
#include <algorithm>

namespace chip8
{
	Chip8Emulator::Chip8Emulator(std::vector<std::byte> program)
		: m_memory(),
		  m_registers(),
		  m_address_register(),
		  m_stack(),
		  m_delay_timer(std::byte{0}),
		  m_sound_timer(std::byte{0})
	{
		//Write program into the memory 
		//CHIP-8 programs often are loaded at 0x200, that's because
		//old machines had CHIP8 interpreter loaded at first 512 bytes of memory
		std::copy_n(program.begin() + 0x200, 4096, this->m_memory.begin());

	}

	Chip8Emulator::~Chip8Emulator()
	{
	}

	void Chip8Emulator::run()
	{
		
	}

}
