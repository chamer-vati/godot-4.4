#ifndef MEOW_GUARD_H
#define MEOW_GRARD_H

#include<stdint.h>
const size_t KEY_SIZE = 32;
class MeowGuard{
    private:
        //指向数组script_encryption_key的指针
        uint8_t *script_encryption_key;
        //对原密钥加7乘2
        uint16_t encrypted_key[KEY_SIZE] = {481,61,111,203,399,429,355,117,427,305,455,281,7,217,289,
            25,323,169,487,485,363,455,311,337,115,203,39,431,75,347
        };
    public:
        MeowGuard(uint8_t *script_encryption_key);
        void init_key();
        void reset_key();
        void check_debugger();

};
#endif