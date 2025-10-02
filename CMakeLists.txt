# CMakeList.txt : CMake project for CppPatterns, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project (CppPatterns)

# Add source to this project's executable.
# add_library(CppPatternsLib "src/CppPatterns.cpp")
# target_include_directories(CppPatternsLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# add_executable(CppPatternsApp "src/CppPatterns.cpp")
# target_link_libraries(CppPatternsApp PRIVATE CppPatternsLib)

# Add tests
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
# For MSVC runtime settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(CppPatternsTest
	"src/utils/Timer.h" 
	"src/utils/Timer.cpp" 
	"test/utils/TimerTests.cpp" 
	
	"src/callbacks/TimedEvent.h" 
	"src/callbacks/TimedEvent.cpp" 
	"test/callbacks/TimedEventTests.cpp" 
	
	"src/functional/TimedEvent.h" 
	"src/functional/TimedEvent.cpp"
	"test/functional/FnTimedEventTests.cpp" 
)

target_link_libraries(CppPatternsTest PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(CppPatternsTest)