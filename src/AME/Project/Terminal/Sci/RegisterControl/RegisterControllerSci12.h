/*
 * RegisterControllerSci12.h
 *
 *  Created on: 21.04.2022
 *      Author: Tobias Hirsch, AME
 *  Copyright (c) 2022 Andreas Müller electronic GmbH (AME)
 */

#ifndef SRC_AME_PROJECT_TERMINAL_SCI_REGISTERCONTROL_REGISTERCONTROLLERSCI12_H_
#define SRC_AME_PROJECT_TERMINAL_SCI_REGISTERCONTROL_REGISTERCONTROLLERSCI12_H_

#include "../SciRegisterController.h"

namespace AME_SRC {

class RegisterControllerSci12: public SciRegisterController {
 public:
    RegisterControllerSci12();
    virtual ~RegisterControllerSci12();
    void setRegisterByteSMRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteSCRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteBRRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteSEMRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteSPMRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteSCMRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteTDRforSCI(uint8_t byte, SCINumber sci);
    void setRegisterByteSSRforSCI(uint8_t byte, SCINumber sci);

    uint8_t getRegisterByteSCRforSCI(SCINumber sci);
    uint8_t getRegisterByteSSRforSCI(SCINumber sci);
    uint8_t getRegisterByteRDRforSCI(SCINumber sci);
};

}  // namespace AME_SRC

#endif  // SRC_AME_PROJECT_TERMINAL_SCI_REGISTERCONTROL_REGISTERCONTROLLERSCI12_H_