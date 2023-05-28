#include <stdint.h>

/* 8-bit manipulation functions */
inline uint8_t b8_set(uint8_t data, uint8_t pos);
inline uint8_t b8_get(uint8_t data, uint8_t pos);
inline uint8_t b8_clr(uint8_t data, uint8_t pos);
inline uint8_t b8_tog(uint8_t data, uint8_t pos);

inline uint8_t b8_multipleset(uint8_t data, ...);
inline uint8_t b8_multipleget(uint8_t data, ...);
inline uint8_t b8_multipleclr(uint8_t data, ...);
inline uint8_t b8_multipletog(uint8_t data, ...);

// /* 16-bit manipulation functions */
// inline uint16_t b16_set(uint16_t data, uint8_t pos);
// inline uint16_t b16_get(uint16_t data, uint8_t pos);
// inline uint16_t b16_clr(uint16_t data, uint8_t pos);
// inline uint16_t b16_tog(uint16_t data, uint8_t pos);
//
// /* 32-bit manipulation functions */
// inline uint32_t b32_set(uint32_t data, uint8_t pos);
// inline uint32_t b32_get(uint32_t data, uint8_t pos);
// inline uint32_t b32_clr(uint32_t data, uint8_t pos);
// inline uint32_t b32_tog(uint32_t data, uint8_t pos);
