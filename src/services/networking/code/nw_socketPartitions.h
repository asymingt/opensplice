/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2009 PrismTech 
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */
#ifndef NW_SOCKETPARTITIONS_H
#define NW_SOCKETPARTITIONS_H

#include "nw__socket.h"

NW_CLASS(nw_socketPartitions);

nw_socketPartitions  nw_socketPartitionsNew();

void                 nw_socketPartitionsFree(
                         nw_socketPartitions socketPartitions);

nw_bool              nw_socketPartitionsAdd(
                         nw_socketPartitions socketPartitions,
                         sk_partitionId partitionId,
                         sk_address partitionAddress,
                         sk_bool connected);

nw_bool              nw_socketPartitionsLookup(
                         nw_socketPartitions socketPartitions,
                         sk_partitionId partitionId,
                         sk_address *partitionAddress);

#endif /*NW_SOCKETPARTITIONS_H*/
