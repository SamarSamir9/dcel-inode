/*_HIENA_ADDR_T_H_*/
/* Copyright (c) 2016 Raygan Henley */
/* see "LICENSE" */

#ifndef _HIENA_ADDR_T_H_
#define _HIENA_ADDR_T_H_


/*== OBJECT: addr_t ==*/
#include <sys/types.h> /* off_t, size_t */
#include "bounds_t.h"

typedef struct hiena_parse_packet_addr
{
	/* stuff that domaincell.h requires */
	void *serversign;
    /* SERVER RELATIVE ADDRESS */
    size_t    size;
    void     *ptr;


    /* SCANNER RELATIVE ADDRESS */
    bounds_t *bounds;
    int       bounds_dim;

    /* MEMORY: 'bounds' free'd by Ppak,
       do not include any malloc'd items inside 'bounds' */
    /* "bounds" is defined by the scanner during map object creation
       and expresses a scanner-relative address in the data
       sourced by the parent ppak.  */

}addr_t;

void    addr_t_cleanup( addr_t *a );
/*--------*/

#endif /*!_HIENA_ADDR_T_H_*/
