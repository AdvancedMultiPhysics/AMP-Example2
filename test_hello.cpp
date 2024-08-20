#include "AMP/utils/AMPManager.h"
#include "AMP/IO/PIO.h"


int main( int argc, char *argv[] )
{
    AMP::AMPManager::startup( argc, argv );
    AMP::pout << "Hello World" << std::endl;
    AMP::AMPManager::shutdown();
    return 0;
}
