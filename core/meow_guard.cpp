#include "meow_guard.h"
#include "Windows.h"
MeowGuard::MeowGuard(uint8_t *script_encryption_key)
        script_encryption_key(script_encryption_key):{

}

void MeowGuard::init_key(){
    uint8_t key[KEY_SIZE];
    for (size_t i = 0;i < KEY_SIZE; i++){
        key[i] = encrypted_key[i] / 2 - 7;
        script_encryption_key[i] = key[i];
    }
}
void MeowGuard::reset_key(){
    for (size_t i = 0;i < KEY_SIZE;i++){
        script_encryption_key[i] = 0;
    }
}
void MeowGuard::check_debugger(){
    if(IsDebuggerPresent()){
        exit(1);
    }
}