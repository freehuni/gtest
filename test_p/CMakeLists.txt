cmake_minimum_required(VERSION 3.2)
project(hello)

add_executable(hello
	hello.cc
	hello_test.cc
	)

target_link_libraries(hello	
	gtest_main
	gtest
	gmock	
	pthread
)