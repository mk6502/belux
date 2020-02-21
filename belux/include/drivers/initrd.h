#ifndef _DRIVERS_INITRD_H
#define _DRIVERS_INITRD_H

#include <drivers/fs.h>

typedef struct {
   uint32_t nfiles; // The number of files in the ramdisk.
} initrd_header_t;

typedef struct {
	uint8_t magic;
	int8_t name[64];
	uint32_t offset;
	uint32_t length;
} initrd_file_header_t;

fs_node_t* initialise_initrd(uint32_t location);

#endif