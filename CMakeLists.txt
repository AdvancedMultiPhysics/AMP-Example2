# Set some CMake properties    
CMAKE_MINIMUM_REQUIRED(VERSION 3.9)


# Initialize the project
PROJECT( ${PROJ} LANGUAGES CXX )


# Prevent users from building in place
IF ( "${CMAKE_CURRENT_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_BINARY_DIR}" )
    MESSAGE( FATAL_ERROR "Building code in place is a bad idea" )
ENDIF()


# Load AMP
IF ( NOT AMP_DIRECTORY )
    MESSAGE( FATAL_ERROR "AMP_DIRECTORY must be specified")
ENDIF()
SET( TPLs_COMPILERS_INITIALIZED TRUE )
FIND_PACKAGE( AMP PATHS "${AMP_DIRECTORY}/lib/cmake" )


# Compile a test
ADD_EXECUTABLE( test_hello test_hello.cpp )
TARGET_LINK_LIBRARIES( test_hello AMP::amp )

