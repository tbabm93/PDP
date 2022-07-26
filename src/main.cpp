#include "detail_placer.h"
#include <pdpCommand.h>

int Tcl_AppInit(Tcl_Interp* interp)
{
    std::cout << "**************************************************************" << std::endl;
    std::cout << "Mixed-Size cell Legalizer and Detail Placer" << std::endl;
    std::cout << "**************************************************************" << std::endl;
    if (Tcl_Init(interp) == TCL_ERROR) {
        return TCL_ERROR;
    }
    if (pdp::pdp_cmd_manager::init_tcl_cmd(interp) == TCL_ERROR) {
        return TCL_ERROR;
    }
    return TCL_OK;
}

int main(int argc, char* argv[])
{
    Tcl_Main(argc, argv, Tcl_AppInit);
    return 0;
}
