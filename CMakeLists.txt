cmake_minimum_required(VERSION 3.2)

project(helloworld VERSION 1.1.$ENV{TRAVIS_BUILD_NUMBER})
#project(helloworld VERSION 12.0.12)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

configure_file(version.h.in version.h)

add_executable(helloworld_cli main.cpp) 

add_executable(test_helloworld test.cpp)

add_library(helloworld lib.cpp)

set_target_properties(helloworld_cli helloworld test_helloworld PROPERTIES

	CXX_STANDARD 14
	CXX_STANDARD_REQUIRED ON
	COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)
set_target_properties(test_helloworld PROPERTIES
	COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
	INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
)

target_link_libraries(helloworld_cli helloworld)

target_link_libraries(test_helloworld ${Boost_LIBRARIES} helloworld)

install(TARGETS helloworld_cli RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")

set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")

set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT n.gaivoronskiy@innopolis.ru)

include(CPack)

enable_testing()

add_test(test_helloworld test_helloworld)
