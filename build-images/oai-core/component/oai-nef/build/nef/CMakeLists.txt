################################################################################
# Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The OpenAirInterface Software Alliance licenses this file to You under
# the OAI Public License, Version 1.1  (the "License"); you may not use this file
# except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.openairinterface.org/?page_id=698
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#-------------------------------------------------------------------------------
# For more information about the OpenAirInterface (OAI) Software Alliance:
#      contact@openairinterface.org
################################################################################
cmake_minimum_required (VERSION 3.0.2)
project(oai-cn)

# Override options for NEF
set (  PACKAGE_NAME                    "NEF" )
set (  STATIC_LINKING                   False )
#############################################
# Base directories, compatible with legacy OAI building
################################################
if (DEFINED ENV{OPENAIRCN_DIR})
  set (OPENAIRCN_DIR   $ENV{OPENAIRCN_DIR})
else()
  set (OPENAIRCN_DIR ${CMAKE_CURRENT_LIST_DIR}/../..)
endif()
set (BUILD_TOP_DIR   ${OPENAIRCN_DIR}/build)
set (SRC_TOP_DIR     ${OPENAIRCN_DIR}/src)

set (NF_TARGET           nef)
set (MOUNTED_COMMON      common-src)

include(${CMAKE_CURRENT_SOURCE_DIR}/../../src/oai-nef/CMakeLists.txt)

ADD_SUBDIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/../../src/nef_app ${CMAKE_CURRENT_BINARY_DIR}/nef_app)
