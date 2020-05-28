//
//  generic_kext_demo.c
//  generic-kext demo
//
//  Created by Jozef on 28/05/2020.
//  Copyright © 2020 Jozef Zuzelka. All rights reserved.
//

#include <sys/systm.h>
#include <mach/mach_types.h>

kern_return_t generic_kext_demo_start(kmod_info_t * ki, void *d);
kern_return_t generic_kext_demo_stop(kmod_info_t *ki, void *d);
const char* demoName = "generic-kext";

kern_return_t generic_kext_demo_start(kmod_info_t * ki, void *d)
{
    printf("(%s) Hello, World!\n", demoName);
    return KERN_SUCCESS;
}

kern_return_t generic_kext_demo_stop(kmod_info_t *ki, void *d)
{
    printf("(%s) Goodbye, World!\n", demoName);
    return KERN_SUCCESS;
}
