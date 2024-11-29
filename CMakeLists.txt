cmake_minimum_required(VERSION 3.21...3.31)

project(6502Emulator VERSION 0.1
					 DESCRIPTION "Emulating a 6502 based PC"
					 LANGUAGES C)

add_executable(Emulator src/main.c
						src/processor.c
						src/memory.c
						src/emulator.c)

target_include_directories(Emulator PUBLIC include)
target_compile_features(Emulator PUBLIC c_std_23)
