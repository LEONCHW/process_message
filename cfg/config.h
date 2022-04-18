#pragma once

#if (MOD_SERVER == 1)
#define PUMP_SERVER
#elif (MOD_CLIENT == 1)
#define PUMP_CLIENT
#else
#error "PLS, MUST select the Operation Mode one either MOD_SERVER or MOD_CLIENT"
#endif
