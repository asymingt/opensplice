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

package DDS;




public interface TopicDescriptionOperations 
{
  String get_type_name ();
  String get_name ();
  DDS.DomainParticipant get_participant ();
} // interface TopicDescriptionOperations
