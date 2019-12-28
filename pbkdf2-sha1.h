#ifndef __PBKDF2_SHA1__
#define __PBKDF2_SHA1__

void PKCS5_PBKDF2_HMAC(const unsigned char *password, size_t plen,
    const unsigned char *salt, size_t slen,
    const unsigned long iteration_count, const unsigned long key_length,
    unsigned char *output);

#endif
