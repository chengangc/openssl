/*
 * Copyright 2017-2018 The OpenSSL Project Authors. All Rights Reserved.
 * Copyright 2016 Cryptography Research, Inc.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 *
 * Originally written by Mike Hamburg
 */

#ifndef OSSL_CRYPTO_EC_CURVE448_ARCH_64_INTRINSICS_H
# define OSSL_CRYPTO_EC_CURVE448_ARCH_64_INTRINSICS_H

# define ARCH_WORD_BITS 64

static ossl_inline uint64_t word_is_zero(uint64_t a)
{
    /* let's hope the compiler isn't clever enough to optimize this. */
    return (((__uint128_t) a) - 1) >> 64;
}

static ossl_inline uint128_t widemul(uint64_t a, uint64_t b)
{
    return ((uint128_t) a) * b;
}

#endif                          /* OSSL_CRYPTO_EC_CURVE448_ARCH_64_INTRINSICS_H */