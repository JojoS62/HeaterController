/**
 * @file    LL.h
 * @brief   Core Utility - Templated Linked List class
 * @author  sam grove
 * @version 1.0
 * @see     
 *
 * Copyright (c) 2013
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LL_H_
#define LL_H_

#include <stdint.h>
#include <cstddef>

/**
 *  @struct node
 *  @brief The Linked List structure
 */ 
struct node
{
    void *data;         /*!< pointer to list member data */
    struct node *next;  /*!< pointer to the next list member */
};

/** Example using the LL Class
 * @code
 *  #include "mbed.h"
 *  #include "LL.h"
 *  
 *  LL<node>list;
 *  
 *  int main()
 *  {
 *      node *tmp;
 *      
 *      list.push((char *)"Two\n");
 *      list.append((char *)"Three\n");
 *      list.append((char *)"Four\n");
 *      list.push((char*)"One\n");
 *      list.append((char*)"Five\n");
 *      
 *      for(int i=1; i<=list.length(); i++)
 *      {
 *          tmp = list.pop(i);
 *          printf("%s", (char *)tmp->data);
 *      }
 *      
 *      error("done\n");
 *  }
 * @endcode
 */

/**
 *  @class LL
 *  @brief API abstraction for a Linked List
 */ 
template<class retT>
class LL
{
protected:
    retT *_head;

public:
    /** Create the LL object
     */   
    LL();
    
    /** Deconstructor for the LL object
     *  Removes any members
     */ 
    ~LL();

    /** Add a member to the begining of the list
     *  @param data - Some data type that is added to the list
     *  @return The member that was just inserted (NULL if empty)
     */
    retT *push(void *data);
    
//    /** Add a member to some position in the list
//     *  @param data - Some data type that is added to the list
//     *  @param loc - Place in the list to put the data
//     *  @return The member that was just inserted (NULL if empty)
//     */
//    retT *insert(void *data, uint32_t loc);
    
    /** Add a member to the end of the list
     *  @param data - Some data type that is added to the list
     *  @return The member that was just inserted (NULL if empty)
     */
    retT *append(void *data);
    
    /** Remove a member from the list
     *  @param loc - The location of the member to remove
     *  @return The head of the list
     */
    retT *remove(uint32_t loc);
    
    /** Get access to a member from the list
     *  @param loc - The location of the member to access
     *  @return The member that was just requested (NULL if empty or out of bounds)
     */
    retT *pop(uint32_t loc);
    
    /** Get the length of the list
     *  @return The number of members in the list
     */
    uint32_t length(void);
};

#endif /* LINKEDLIST_H_ */
