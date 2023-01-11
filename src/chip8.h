#ifndef CHIP8_H
#define CHIP8_H
#pragma once

#include <array>
#include <cstddef>
#include <stack>
#include <bitset> 
#include <vector>

namespace chip8 
{
	class Chip8Emulator
	{
		public:

			Chip8Emulator(std::vector<std::byte> program);
			~Chip8Emulator();
			
			void run();

		private:
			//CHIP-8 internal state
			std::array<std::byte, 4096> m_memory;	
			std::array<std::byte, 16> m_registers;
			std::bitset<12> m_address_register;
			std::stack<std::bitset<12>> m_stack;
			std::byte m_delay_timer;
			std::byte m_sound_timer;

	};
}
#endif
