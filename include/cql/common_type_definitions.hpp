/* 
 * File:   common_type_definitions.hpp
 * Author: mc
 *
 * Created on September 27, 2013, 3:09 PM
 */

#ifndef COMMON_TYPE_DEFINITIONS_HPP_
#define	COMMON_TYPE_DEFINITIONS_HPP_

#include <map>
#include <string>

#include "cql/cql_endpoint.hpp"
#include "cql/lockfree/cql_lockfree_hash_map.hpp"
#include "cql/cql_uuid.hpp"
#include "cql/cql_connection.hpp"

namespace cql {
    
typedef
    cql::cql_lockfree_hash_map_t<
        cql_uuid_t, 
        boost::shared_ptr<cql_connection_t> >
    cql_connections_collection_t;  

typedef
    cql::cql_lockfree_hash_map_t<
        cql_endpoint_t, 
        boost::shared_ptr<cql_connections_collection_t> >
    cql_connection_pool_t;

typedef
    std::map<std::string, std::string>
    cql_credentials_t;
}

#endif	/* COMMON_TYPE_DEFINITIONS_HPP_ */

