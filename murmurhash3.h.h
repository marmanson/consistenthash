//
// Created by 王博 on 2020/4/25.
//

#ifndef CONSISTENTHASH_MURMURHASH3_H_H
#define CONSISTENTHASH_MURMURHASH3_H_H
#include <stdint.h>

uint32_t murmur3_32(const char *key,uint32_t len,uint32_t seed = 17);

#endif //CONSISTENTHASH_MURMURHASH3_H_H
